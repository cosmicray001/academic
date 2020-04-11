

```python
from google.colab import drive
drive.mount('/content/drive')
```

    Go to this URL in a browser: https://accounts.google.com/o/oauth2/auth?client_id=947318989803-6bn6qk8qdgf4n4g3pfee6491hc0brc4i.apps.googleusercontent.com&redirect_uri=urn%3aietf%3awg%3aoauth%3a2.0%3aoob&response_type=code&scope=email%20https%3a%2f%2fwww.googleapis.com%2fauth%2fdocs.test%20https%3a%2f%2fwww.googleapis.com%2fauth%2fdrive%20https%3a%2f%2fwww.googleapis.com%2fauth%2fdrive.photos.readonly%20https%3a%2f%2fwww.googleapis.com%2fauth%2fpeopleapi.readonly
    
    Enter your authorization code:
    ··········
    Mounted at /content/drive


# Import the Pandas library
# Read in the raw temperature and emissions datasets (they are in CSV format) 


```python
import pandas as pd 
raw_t = pd.read_csv('/content/drive/My Drive/Colab Notebooks/cse474/test/GLB.Ts+dSST.csv', skiprows=1)
raw_t = raw_t.iloc[:,:13]
raw_e = pd.read_csv('/content/drive/My Drive/Colab Notebooks/cse474/test/API_EN.ATM.CO2E.PC_DS2_en_csv_v2_511927.csv', skiprows=3)
```


```python
# Create new dataframe with an index for each month
# First create the date range
date_rng = pd.date_range(start='1/1/1880', end='1/03/2019', freq='M')

type(date_rng[0])
### returns 
### pandas._libs.tslibs.timestamps.Timestamp

# Next create the empty DataFrame, which we will populate using the actual data
t = pd.DataFrame(date_rng, columns=['date'])

# Create a column for the anomoly values
t['Avg_Anomaly_deg_C'] = None

# Set the index of the DataFrame to the date column (DateTime index)
t.set_index('date', inplace=True)

# Show the first few elements
#t.head()
```


```python
# Import relevant libraries
import calendar
from datetime import datetime

# Function definition
def populate_df_with_anomolies_from_row(row):
    year = row['Year']
    # Anomaly values (they seem to be a mixture of strings and floats)
    monthly_anomolies = row.iloc[1:]
    # Abbreviated month names (index names)
    months = monthly_anomolies.index
    for month in monthly_anomolies.index:
        # Get the last day for each month 
        last_day = calendar.monthrange(year,datetime.strptime(month, '%b').month)[1]
        # construct the index with which we can reference our new DataFrame (to populate) 
        date_index = datetime.strptime(f'{year} {month} {last_day}', '%Y %b %d')
        # Populate / set value @ above index, to anomaly value
        t.loc[date_index] = monthly_anomolies[month]

# Apply function to each row of raw data 
_ = raw_t.apply(lambda row: populate_df_with_anomolies_from_row(row), axis=1)

# Show the first few elements of our newly populated DataFrame
#t.head()
```


```python
import numpy as np

# Define function to convert values to floats, and return a 'NaN = Not a Number' if this is not possible
def clean_anomaly_value(raw_value):
    try:
        return float(raw_value)
    except:
        return np.NaN
    
# Apply above function to all anomaly values in DataFrame
t['Avg_Anomaly_deg_C'] = t['Avg_Anomaly_deg_C'].apply(lambda raw_value: clean_anomaly_value(raw_value))

# 'Forward fill' to take care of NaN values
t.fillna(method='ffill', inplace=True)

# Show the first few elements of our newly cleaned DataFrame
#t.head()
```


```python
# import Matplotlib
import matplotlib.pyplot as plt
# Allow for graphs to be displayed in Jupyter notebook
%matplotlib inline
```


```python
# Define function to pull value from raw data, using DateIndex from new DataFrame row
def populate_df(row):
    index = str(row['date'].year)
    value = raw_e_world.loc[index]
    return value
  
# Select just the co2 emissions for the 'world', and the columns for the years 1960-2018 
raw_e_world = raw_e[raw_e['Country Name']=='World'].loc[:,'1960':'2018']

# 'Traspose' the resulting slice, making the columns become rows and vice versa
raw_e_world = raw_e_world.T
raw_e_world.columns = ['value']

# Create a new DataFrame with a daterange the same the range for.. 
# the Temperature data (after resampling to years)
date_rng = pd.date_range(start='31/12/1960', end='31/12/2018', freq='y')
e = pd.DataFrame(date_rng, columns=['date'])

# Populate the new DataFrame using the values from the raw data slice
v = e.apply(lambda row: populate_df(row), axis=1)
e['Global CO2 Emissions per Capita'] = v
e.set_index('date', inplace=True)
#e.head()
e.fillna(method='ffill', inplace=True)
```


```python
t_resampled = t.resample('A').mean()

# Create figures and axes
fig, ax = plt.subplots(figsize=(10,8))

# Plot temperature data with specific colour and line thickness
ax.plot(t_resampled, color='#1C7C54', linewidth=2.5)

# Set axis labels and graph title
ax.set(xlabel='Time (years)', ylabel='Temperature Anomaly (deg. Celsius)',
       title='Global Temperature Anomalies')

# Enable grid
ax.grid()
# Create figures and axes
fig, ax = plt.subplots(figsize=(10,8))

# Plot co2 emissions data with specific colour and line thickness
ax.plot(e, color='#FF5733', linewidth=2.5)

# Set axis labels and graph title
ax.set(xlabel='Time (years)', ylabel='Emissions (Metric Tons per Capita)',
       title='Global CO2 Emission over Time')

# Enable grid
ax.grid()
```


![png](output_8_0.png)



![png](output_8_1.png)



```python
xx = raw_e.iloc[:, 4:59]
#xx['c_code'] = raw_e.iloc[:, 1:2]
xx.tail()
```




<div>
<style scoped>
    .dataframe tbody tr th:only-of-type {
        vertical-align: middle;
    }

    .dataframe tbody tr th {
        vertical-align: top;
    }

    .dataframe thead th {
        text-align: right;
    }
</style>
<table border="1" class="dataframe">
  <thead>
    <tr style="text-align: right;">
      <th></th>
      <th>1960</th>
      <th>1961</th>
      <th>1962</th>
      <th>1963</th>
      <th>1964</th>
      <th>1965</th>
      <th>1966</th>
      <th>1967</th>
      <th>1968</th>
      <th>1969</th>
      <th>1970</th>
      <th>1971</th>
      <th>1972</th>
      <th>1973</th>
      <th>1974</th>
      <th>1975</th>
      <th>1976</th>
      <th>1977</th>
      <th>1978</th>
      <th>1979</th>
      <th>1980</th>
      <th>1981</th>
      <th>1982</th>
      <th>1983</th>
      <th>1984</th>
      <th>1985</th>
      <th>1986</th>
      <th>1987</th>
      <th>1988</th>
      <th>1989</th>
      <th>1990</th>
      <th>1991</th>
      <th>1992</th>
      <th>1993</th>
      <th>1994</th>
      <th>1995</th>
      <th>1996</th>
      <th>1997</th>
      <th>1998</th>
      <th>1999</th>
      <th>2000</th>
      <th>2001</th>
      <th>2002</th>
      <th>2003</th>
      <th>2004</th>
      <th>2005</th>
      <th>2006</th>
      <th>2007</th>
      <th>2008</th>
      <th>2009</th>
      <th>2010</th>
      <th>2011</th>
      <th>2012</th>
      <th>2013</th>
      <th>2014</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>259</th>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
    </tr>
    <tr>
      <th>260</th>
      <td>0.683679</td>
      <td>0.494324</td>
      <td>0.71013</td>
      <td>0.525293</td>
      <td>0.644143</td>
      <td>0.686312</td>
      <td>0.595799</td>
      <td>0.517041</td>
      <td>1.940466</td>
      <td>0.767437</td>
      <td>0.405577</td>
      <td>0.313630</td>
      <td>0.234116</td>
      <td>0.420242</td>
      <td>0.339045</td>
      <td>0.319965</td>
      <td>0.368387</td>
      <td>0.415295</td>
      <td>0.418921</td>
      <td>0.420264</td>
      <td>0.417864</td>
      <td>0.514063</td>
      <td>0.696341</td>
      <td>0.713607</td>
      <td>0.778529</td>
      <td>0.904474</td>
      <td>0.831807</td>
      <td>0.841254</td>
      <td>0.894977</td>
      <td>0.893385</td>
      <td>0.819517</td>
      <td>0.748475</td>
      <td>0.768266</td>
      <td>0.638507</td>
      <td>0.634010</td>
      <td>0.701763</td>
      <td>0.687684</td>
      <td>0.836202</td>
      <td>0.741634</td>
      <td>0.821118</td>
      <td>0.841075</td>
      <td>0.904554</td>
      <td>0.854733</td>
      <td>0.911487</td>
      <td>0.966289</td>
      <td>0.996838</td>
      <td>1.030386</td>
      <td>0.985390</td>
      <td>1.020428</td>
      <td>1.090827</td>
      <td>1.011975</td>
      <td>0.826044</td>
      <td>0.762823</td>
      <td>1.013900</td>
      <td>0.878996</td>
    </tr>
    <tr>
      <th>261</th>
      <td>5.727221</td>
      <td>5.832621</td>
      <td>5.88717</td>
      <td>5.961336</td>
      <td>6.332342</td>
      <td>6.616544</td>
      <td>6.453861</td>
      <td>6.560824</td>
      <td>6.593620</td>
      <td>6.665435</td>
      <td>6.785930</td>
      <td>7.437296</td>
      <td>7.376052</td>
      <td>7.256836</td>
      <td>7.198226</td>
      <td>7.350683</td>
      <td>7.474399</td>
      <td>7.550741</td>
      <td>7.446834</td>
      <td>7.866690</td>
      <td>7.999998</td>
      <td>8.773991</td>
      <td>9.311609</td>
      <td>9.428691</td>
      <td>9.922516</td>
      <td>9.921215</td>
      <td>9.877464</td>
      <td>9.593208</td>
      <td>9.773399</td>
      <td>9.493669</td>
      <td>8.513600</td>
      <td>8.653758</td>
      <td>7.801071</td>
      <td>8.100407</td>
      <td>8.361297</td>
      <td>8.742673</td>
      <td>8.626706</td>
      <td>8.982420</td>
      <td>8.647141</td>
      <td>8.462993</td>
      <td>8.420830</td>
      <td>8.163977</td>
      <td>7.727642</td>
      <td>8.657236</td>
      <td>9.519375</td>
      <td>8.707407</td>
      <td>9.236950</td>
      <td>9.498786</td>
      <td>9.979458</td>
      <td>9.967159</td>
      <td>9.256681</td>
      <td>9.048936</td>
      <td>8.872523</td>
      <td>8.686590</td>
      <td>8.979062</td>
    </tr>
    <tr>
      <th>262</th>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>0.946606</td>
      <td>1.096876</td>
      <td>0.951121</td>
      <td>1.261961</td>
      <td>1.166853</td>
      <td>1.056845</td>
      <td>0.902038</td>
      <td>0.877861</td>
      <td>0.910556</td>
      <td>0.993839</td>
      <td>0.879394</td>
      <td>0.825640</td>
      <td>0.787503</td>
      <td>0.708080</td>
      <td>0.635726</td>
      <td>0.637301</td>
      <td>0.603456</td>
      <td>0.555921</td>
      <td>0.561825</td>
      <td>0.504629</td>
      <td>0.420787</td>
      <td>0.397784</td>
      <td>0.404311</td>
      <td>0.366559</td>
      <td>0.413596</td>
      <td>0.332929</td>
      <td>0.304334</td>
      <td>0.293034</td>
      <td>0.290710</td>
      <td>0.288904</td>
      <td>0.272863</td>
      <td>0.238645</td>
      <td>0.200238</td>
      <td>0.249112</td>
      <td>0.234519</td>
      <td>0.178277</td>
      <td>0.174972</td>
      <td>0.178339</td>
      <td>0.180815</td>
      <td>0.187638</td>
      <td>0.185721</td>
      <td>0.192996</td>
      <td>0.188267</td>
      <td>0.154271</td>
      <td>0.168958</td>
      <td>0.189800</td>
      <td>0.197823</td>
      <td>0.209458</td>
      <td>0.253506</td>
      <td>0.265078</td>
      <td>0.292412</td>
    </tr>
    <tr>
      <th>263</th>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>NaN</td>
      <td>1.034903</td>
      <td>1.166242</td>
      <td>1.307900</td>
      <td>1.108579</td>
      <td>1.291859</td>
      <td>1.320779</td>
      <td>1.543255</td>
      <td>1.596158</td>
      <td>1.449632</td>
      <td>1.579042</td>
      <td>1.488477</td>
      <td>1.321987</td>
      <td>1.671491</td>
      <td>1.385335</td>
      <td>1.341457</td>
      <td>1.319808</td>
      <td>1.300765</td>
      <td>1.229246</td>
      <td>1.107255</td>
      <td>1.267386</td>
      <td>1.158913</td>
      <td>1.156175</td>
      <td>1.426918</td>
      <td>1.599635</td>
      <td>1.634845</td>
      <td>1.594088</td>
      <td>1.499501</td>
      <td>1.493786</td>
      <td>1.560590</td>
      <td>1.475029</td>
      <td>1.580213</td>
      <td>1.325951</td>
      <td>1.299201</td>
      <td>1.236363</td>
      <td>1.213377</td>
      <td>1.339295</td>
      <td>1.171874</td>
      <td>1.056377</td>
      <td>1.000931</td>
      <td>0.889343</td>
      <td>0.789234</td>
      <td>0.891798</td>
      <td>0.859470</td>
      <td>0.806649</td>
      <td>0.627678</td>
      <td>0.447289</td>
      <td>0.612528</td>
      <td>0.741686</td>
      <td>0.594152</td>
      <td>0.874563</td>
      <td>0.884721</td>
    </tr>
  </tbody>
</table>
</div>




```python
xx.describe()
```




<div>
<style scoped>
    .dataframe tbody tr th:only-of-type {
        vertical-align: middle;
    }

    .dataframe tbody tr th {
        vertical-align: top;
    }

    .dataframe thead th {
        text-align: right;
    }
</style>
<table border="1" class="dataframe">
  <thead>
    <tr style="text-align: right;">
      <th></th>
      <th>1960</th>
      <th>1961</th>
      <th>1962</th>
      <th>1963</th>
      <th>1964</th>
      <th>1965</th>
      <th>1966</th>
      <th>1967</th>
      <th>1968</th>
      <th>1969</th>
      <th>1970</th>
      <th>1971</th>
      <th>1972</th>
      <th>1973</th>
      <th>1974</th>
      <th>1975</th>
      <th>1976</th>
      <th>1977</th>
      <th>1978</th>
      <th>1979</th>
      <th>1980</th>
      <th>1981</th>
      <th>1982</th>
      <th>1983</th>
      <th>1984</th>
      <th>1985</th>
      <th>1986</th>
      <th>1987</th>
      <th>1988</th>
      <th>1989</th>
      <th>1990</th>
      <th>1991</th>
      <th>1992</th>
      <th>1993</th>
      <th>1994</th>
      <th>1995</th>
      <th>1996</th>
      <th>1997</th>
      <th>1998</th>
      <th>1999</th>
      <th>2000</th>
      <th>2001</th>
      <th>2002</th>
      <th>2003</th>
      <th>2004</th>
      <th>2005</th>
      <th>2006</th>
      <th>2007</th>
      <th>2008</th>
      <th>2009</th>
      <th>2010</th>
      <th>2011</th>
      <th>2012</th>
      <th>2013</th>
      <th>2014</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>count</th>
      <td>193.000000</td>
      <td>194.000000</td>
      <td>196.000000</td>
      <td>197.000000</td>
      <td>203.000000</td>
      <td>203.000000</td>
      <td>203.000000</td>
      <td>203.000000</td>
      <td>203.000000</td>
      <td>203.000000</td>
      <td>205.000000</td>
      <td>206.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>208.000000</td>
      <td>209.000000</td>
      <td>209.000000</td>
      <td>209.000000</td>
      <td>209.000000</td>
      <td>215.000000</td>
      <td>217.000000</td>
      <td>241.000000</td>
      <td>241.000000</td>
      <td>242.000000</td>
      <td>243.000000</td>
      <td>243.000000</td>
      <td>244.000000</td>
      <td>245.000000</td>
      <td>245.000000</td>
      <td>245.000000</td>
      <td>245.000000</td>
      <td>246.000000</td>
      <td>246.000000</td>
      <td>246.000000</td>
      <td>247.000000</td>
      <td>248.000000</td>
      <td>249.000000</td>
      <td>249.000000</td>
      <td>249.000000</td>
      <td>249.000000</td>
      <td>249.000000</td>
      <td>251.000000</td>
      <td>251.000000</td>
      <td>250.000000</td>
    </tr>
    <tr>
      <th>mean</th>
      <td>2.037282</td>
      <td>2.150171</td>
      <td>2.241690</td>
      <td>2.753812</td>
      <td>2.916141</td>
      <td>3.035673</td>
      <td>3.049316</td>
      <td>3.116120</td>
      <td>3.315619</td>
      <td>3.927816</td>
      <td>4.204099</td>
      <td>4.427336</td>
      <td>4.494008</td>
      <td>4.812818</td>
      <td>4.507408</td>
      <td>4.377664</td>
      <td>4.368837</td>
      <td>4.499300</td>
      <td>4.526618</td>
      <td>4.577355</td>
      <td>4.475246</td>
      <td>4.003176</td>
      <td>3.883912</td>
      <td>3.735079</td>
      <td>3.833816</td>
      <td>3.927593</td>
      <td>3.913394</td>
      <td>3.950233</td>
      <td>4.084677</td>
      <td>4.219883</td>
      <td>4.087860</td>
      <td>4.125632</td>
      <td>4.482813</td>
      <td>4.505842</td>
      <td>4.428009</td>
      <td>4.478244</td>
      <td>4.496961</td>
      <td>4.495002</td>
      <td>4.485427</td>
      <td>4.453672</td>
      <td>4.583647</td>
      <td>4.637700</td>
      <td>4.605110</td>
      <td>4.737570</td>
      <td>4.784463</td>
      <td>4.826155</td>
      <td>4.901256</td>
      <td>4.930568</td>
      <td>4.935583</td>
      <td>4.721868</td>
      <td>4.847677</td>
      <td>4.811059</td>
      <td>4.955428</td>
      <td>4.872777</td>
      <td>4.886320</td>
    </tr>
    <tr>
      <th>std</th>
      <td>4.184849</td>
      <td>4.377180</td>
      <td>4.717044</td>
      <td>8.443484</td>
      <td>8.493180</td>
      <td>8.706497</td>
      <td>8.062852</td>
      <td>7.263779</td>
      <td>7.187105</td>
      <td>9.921855</td>
      <td>9.263233</td>
      <td>9.886576</td>
      <td>10.141886</td>
      <td>10.766220</td>
      <td>9.198437</td>
      <td>8.467537</td>
      <td>8.085626</td>
      <td>8.012298</td>
      <td>8.069064</td>
      <td>7.968325</td>
      <td>7.429310</td>
      <td>6.211035</td>
      <td>5.797967</td>
      <td>5.297735</td>
      <td>5.576488</td>
      <td>5.617238</td>
      <td>5.537729</td>
      <td>5.336876</td>
      <td>5.485957</td>
      <td>5.738058</td>
      <td>5.639184</td>
      <td>5.694542</td>
      <td>6.025123</td>
      <td>6.347220</td>
      <td>6.247433</td>
      <td>6.392206</td>
      <td>6.252384</td>
      <td>6.563317</td>
      <td>6.179797</td>
      <td>5.966715</td>
      <td>6.380133</td>
      <td>6.535791</td>
      <td>6.335804</td>
      <td>6.387948</td>
      <td>6.304327</td>
      <td>6.408915</td>
      <td>6.528367</td>
      <td>6.353846</td>
      <td>6.134005</td>
      <td>5.811829</td>
      <td>5.858565</td>
      <td>5.786095</td>
      <td>6.155163</td>
      <td>5.840759</td>
      <td>6.068998</td>
    </tr>
    <tr>
      <th>min</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>0.011589</td>
      <td>0.011851</td>
      <td>0.013248</td>
      <td>0.011791</td>
      <td>-0.020098</td>
      <td>0.016104</td>
      <td>0.012334</td>
      <td>0.011946</td>
      <td>0.011574</td>
      <td>0.011215</td>
      <td>0.009735</td>
      <td>0.009747</td>
      <td>0.009905</td>
      <td>0.010192</td>
      <td>0.007379</td>
      <td>0.004333</td>
      <td>0.035283</td>
      <td>0.029589</td>
      <td>0.028209</td>
      <td>0.030747</td>
      <td>0.041402</td>
      <td>0.035264</td>
      <td>0.035641</td>
      <td>0.036583</td>
      <td>0.011809</td>
      <td>0.017783</td>
      <td>0.023982</td>
      <td>0.010720</td>
      <td>0.013268</td>
      <td>0.013966</td>
      <td>0.015142</td>
      <td>0.015693</td>
      <td>0.017195</td>
      <td>0.019060</td>
      <td>0.019350</td>
      <td>0.020034</td>
      <td>0.017282</td>
      <td>0.017264</td>
      <td>0.018603</td>
      <td>0.019182</td>
      <td>0.022595</td>
      <td>0.020912</td>
      <td>0.024582</td>
      <td>0.023787</td>
      <td>0.023466</td>
      <td>0.022707</td>
      <td>0.024515</td>
      <td>0.027016</td>
      <td>0.030539</td>
      <td>0.030365</td>
      <td>0.044700</td>
    </tr>
    <tr>
      <th>25%</th>
      <td>0.183316</td>
      <td>0.180620</td>
      <td>0.198531</td>
      <td>0.199338</td>
      <td>0.214492</td>
      <td>0.233321</td>
      <td>0.242972</td>
      <td>0.251838</td>
      <td>0.280633</td>
      <td>0.320451</td>
      <td>0.349795</td>
      <td>0.340798</td>
      <td>0.355732</td>
      <td>0.368516</td>
      <td>0.371617</td>
      <td>0.380724</td>
      <td>0.362854</td>
      <td>0.387947</td>
      <td>0.401433</td>
      <td>0.438602</td>
      <td>0.448290</td>
      <td>0.466774</td>
      <td>0.453681</td>
      <td>0.450120</td>
      <td>0.475806</td>
      <td>0.473886</td>
      <td>0.441159</td>
      <td>0.483382</td>
      <td>0.500122</td>
      <td>0.497808</td>
      <td>0.457140</td>
      <td>0.440831</td>
      <td>0.569229</td>
      <td>0.528187</td>
      <td>0.568108</td>
      <td>0.587897</td>
      <td>0.620413</td>
      <td>0.678608</td>
      <td>0.675733</td>
      <td>0.726635</td>
      <td>0.742181</td>
      <td>0.757221</td>
      <td>0.755792</td>
      <td>0.783483</td>
      <td>0.828754</td>
      <td>0.859606</td>
      <td>0.808379</td>
      <td>0.898907</td>
      <td>0.816057</td>
      <td>0.827852</td>
      <td>0.815799</td>
      <td>0.832929</td>
      <td>0.836163</td>
      <td>0.866682</td>
      <td>0.880427</td>
    </tr>
    <tr>
      <th>50%</th>
      <td>0.612271</td>
      <td>0.636830</td>
      <td>0.654542</td>
      <td>0.640002</td>
      <td>0.765958</td>
      <td>0.695949</td>
      <td>0.750375</td>
      <td>0.802935</td>
      <td>1.004495</td>
      <td>1.056845</td>
      <td>1.000292</td>
      <td>1.103881</td>
      <td>1.111408</td>
      <td>1.136338</td>
      <td>1.233332</td>
      <td>1.285485</td>
      <td>1.361852</td>
      <td>1.412222</td>
      <td>1.518657</td>
      <td>1.580338</td>
      <td>1.528621</td>
      <td>1.581525</td>
      <td>1.479083</td>
      <td>1.365647</td>
      <td>1.447949</td>
      <td>1.540763</td>
      <td>1.588908</td>
      <td>1.637335</td>
      <td>1.755377</td>
      <td>1.641918</td>
      <td>1.678107</td>
      <td>1.864979</td>
      <td>2.295183</td>
      <td>2.286818</td>
      <td>2.229188</td>
      <td>2.326499</td>
      <td>2.411662</td>
      <td>2.282605</td>
      <td>2.256440</td>
      <td>2.268336</td>
      <td>2.344271</td>
      <td>2.540171</td>
      <td>2.544182</td>
      <td>2.644354</td>
      <td>2.672370</td>
      <td>2.757264</td>
      <td>2.929917</td>
      <td>2.823702</td>
      <td>3.029991</td>
      <td>2.939359</td>
      <td>2.935527</td>
      <td>2.951649</td>
      <td>3.027053</td>
      <td>3.042065</td>
      <td>3.091317</td>
    </tr>
    <tr>
      <th>75%</th>
      <td>1.694988</td>
      <td>1.726250</td>
      <td>1.939525</td>
      <td>1.710527</td>
      <td>1.998806</td>
      <td>2.190061</td>
      <td>2.455830</td>
      <td>2.923741</td>
      <td>3.257972</td>
      <td>3.597430</td>
      <td>4.014685</td>
      <td>4.502778</td>
      <td>4.525627</td>
      <td>5.223770</td>
      <td>4.664393</td>
      <td>4.898802</td>
      <td>5.173553</td>
      <td>5.322942</td>
      <td>5.746698</td>
      <td>5.496695</td>
      <td>5.492031</td>
      <td>5.307244</td>
      <td>5.376697</td>
      <td>5.408734</td>
      <td>5.273742</td>
      <td>5.573662</td>
      <td>4.977945</td>
      <td>5.386307</td>
      <td>5.796251</td>
      <td>5.837883</td>
      <td>5.914871</td>
      <td>5.988953</td>
      <td>6.471896</td>
      <td>6.655498</td>
      <td>6.446692</td>
      <td>6.477661</td>
      <td>6.758176</td>
      <td>6.576799</td>
      <td>6.553864</td>
      <td>6.696470</td>
      <td>6.603843</td>
      <td>6.938325</td>
      <td>6.956241</td>
      <td>7.251943</td>
      <td>7.142759</td>
      <td>7.037947</td>
      <td>7.052989</td>
      <td>6.916701</td>
      <td>7.010559</td>
      <td>6.413945</td>
      <td>6.642697</td>
      <td>6.715381</td>
      <td>6.694898</td>
      <td>6.745239</td>
      <td>6.391435</td>
    </tr>
    <tr>
      <th>max</th>
      <td>36.685183</td>
      <td>36.583778</td>
      <td>42.360705</td>
      <td>99.464612</td>
      <td>92.860862</td>
      <td>85.458585</td>
      <td>78.625153</td>
      <td>77.502352</td>
      <td>75.967182</td>
      <td>101.051663</td>
      <td>69.111602</td>
      <td>76.647897</td>
      <td>82.640973</td>
      <td>87.686551</td>
      <td>68.269442</td>
      <td>66.680842</td>
      <td>62.156927</td>
      <td>54.446456</td>
      <td>54.866211</td>
      <td>69.990262</td>
      <td>58.571779</td>
      <td>51.858029</td>
      <td>44.563363</td>
      <td>36.432177</td>
      <td>36.135754</td>
      <td>36.544811</td>
      <td>33.430236</td>
      <td>31.100021</td>
      <td>29.726963</td>
      <td>31.574754</td>
      <td>28.444624</td>
      <td>36.327418</td>
      <td>54.102490</td>
      <td>61.263036</td>
      <td>59.607436</td>
      <td>61.913951</td>
      <td>61.812478</td>
      <td>70.042227</td>
      <td>58.745185</td>
      <td>55.054269</td>
      <td>58.619465</td>
      <td>67.310496</td>
      <td>63.828097</td>
      <td>60.900809</td>
      <td>57.005574</td>
      <td>58.881084</td>
      <td>62.066185</td>
      <td>51.933672</td>
      <td>45.134782</td>
      <td>41.827221</td>
      <td>39.059708</td>
      <td>39.509205</td>
      <td>42.860375</td>
      <td>36.387918</td>
      <td>43.857308</td>
    </tr>
  </tbody>
</table>
</div>




```python
np.mean(xx['1960'])
xx.iloc[0:1, 0:1]
```




<div>
<style scoped>
    .dataframe tbody tr th:only-of-type {
        vertical-align: middle;
    }

    .dataframe tbody tr th {
        vertical-align: top;
    }

    .dataframe thead th {
        text-align: right;
    }
</style>
<table border="1" class="dataframe">
  <thead>
    <tr style="text-align: right;">
      <th></th>
      <th>1960</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>0</th>
      <td>NaN</td>
    </tr>
  </tbody>
</table>
</div>




```python
xx = xx.fillna(value=xx.min())
xx['c_code'] = raw_e.iloc[:, 1:2]
xx.head(1000)
```




<div>
<style scoped>
    .dataframe tbody tr th:only-of-type {
        vertical-align: middle;
    }

    .dataframe tbody tr th {
        vertical-align: top;
    }

    .dataframe thead th {
        text-align: right;
    }
</style>
<table border="1" class="dataframe">
  <thead>
    <tr style="text-align: right;">
      <th></th>
      <th>1960</th>
      <th>1961</th>
      <th>1962</th>
      <th>1963</th>
      <th>1964</th>
      <th>1965</th>
      <th>1966</th>
      <th>1967</th>
      <th>1968</th>
      <th>1969</th>
      <th>1970</th>
      <th>1971</th>
      <th>1972</th>
      <th>1973</th>
      <th>1974</th>
      <th>1975</th>
      <th>1976</th>
      <th>1977</th>
      <th>1978</th>
      <th>1979</th>
      <th>1980</th>
      <th>1981</th>
      <th>1982</th>
      <th>1983</th>
      <th>1984</th>
      <th>1985</th>
      <th>1986</th>
      <th>1987</th>
      <th>1988</th>
      <th>1989</th>
      <th>1990</th>
      <th>1991</th>
      <th>1992</th>
      <th>1993</th>
      <th>1994</th>
      <th>1995</th>
      <th>1996</th>
      <th>1997</th>
      <th>1998</th>
      <th>1999</th>
      <th>2000</th>
      <th>2001</th>
      <th>2002</th>
      <th>2003</th>
      <th>2004</th>
      <th>2005</th>
      <th>2006</th>
      <th>2007</th>
      <th>2008</th>
      <th>2009</th>
      <th>2010</th>
      <th>2011</th>
      <th>2012</th>
      <th>2013</th>
      <th>2014</th>
      <th>c_code</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>0</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>0.011589</td>
      <td>0.011851</td>
      <td>0.013248</td>
      <td>0.011791</td>
      <td>-0.020098</td>
      <td>0.016104</td>
      <td>0.012334</td>
      <td>0.011946</td>
      <td>0.011574</td>
      <td>0.011215</td>
      <td>0.009735</td>
      <td>0.009747</td>
      <td>0.009905</td>
      <td>0.010192</td>
      <td>0.007379</td>
      <td>0.004333</td>
      <td>0.035283</td>
      <td>0.029589</td>
      <td>0.028209</td>
      <td>0.030747</td>
      <td>0.041402</td>
      <td>0.035264</td>
      <td>2.868319</td>
      <td>7.235198</td>
      <td>10.026179</td>
      <td>10.634733</td>
      <td>26.374503</td>
      <td>26.046130</td>
      <td>21.442559</td>
      <td>22.000786</td>
      <td>21.036245</td>
      <td>20.771936</td>
      <td>20.318353</td>
      <td>20.426818</td>
      <td>20.587669</td>
      <td>20.311567</td>
      <td>26.194875</td>
      <td>25.934024</td>
      <td>25.671162</td>
      <td>26.420452</td>
      <td>26.517293</td>
      <td>27.200708</td>
      <td>26.947726</td>
      <td>27.895023</td>
      <td>26.229553</td>
      <td>25.915322</td>
      <td>24.670529</td>
      <td>24.507516</td>
      <td>13.157722</td>
      <td>8.353561</td>
      <td>8.410064</td>
      <td>ABW</td>
    </tr>
    <tr>
      <th>1</th>
      <td>0.046057</td>
      <td>0.053589</td>
      <td>0.073721</td>
      <td>0.074161</td>
      <td>0.086174</td>
      <td>0.101285</td>
      <td>0.107399</td>
      <td>0.123410</td>
      <td>0.115142</td>
      <td>0.086510</td>
      <td>0.149651</td>
      <td>0.165208</td>
      <td>0.129996</td>
      <td>0.135367</td>
      <td>0.154503</td>
      <td>0.167612</td>
      <td>0.153558</td>
      <td>0.181522</td>
      <td>0.161894</td>
      <td>0.167066</td>
      <td>0.131783</td>
      <td>0.150615</td>
      <td>0.163104</td>
      <td>0.201224</td>
      <td>0.231961</td>
      <td>0.293957</td>
      <td>0.267772</td>
      <td>0.269230</td>
      <td>0.246823</td>
      <td>0.233882</td>
      <td>0.210643</td>
      <td>0.183364</td>
      <td>0.096197</td>
      <td>0.085087</td>
      <td>0.075806</td>
      <td>0.068640</td>
      <td>0.062435</td>
      <td>0.056642</td>
      <td>0.052763</td>
      <td>0.040723</td>
      <td>0.037235</td>
      <td>0.037846</td>
      <td>0.047377</td>
      <td>0.050481</td>
      <td>0.038410</td>
      <td>0.051744</td>
      <td>0.062428</td>
      <td>0.083893</td>
      <td>0.151721</td>
      <td>0.238399</td>
      <td>0.289988</td>
      <td>0.406424</td>
      <td>0.345149</td>
      <td>0.310341</td>
      <td>0.293946</td>
      <td>AFG</td>
    </tr>
    <tr>
      <th>2</th>
      <td>0.100835</td>
      <td>0.082204</td>
      <td>0.210531</td>
      <td>0.202737</td>
      <td>0.213560</td>
      <td>0.205891</td>
      <td>0.268941</td>
      <td>0.172102</td>
      <td>0.289718</td>
      <td>0.480234</td>
      <td>0.608224</td>
      <td>0.564548</td>
      <td>0.721246</td>
      <td>0.751240</td>
      <td>0.720776</td>
      <td>0.628569</td>
      <td>0.451354</td>
      <td>0.469221</td>
      <td>0.694737</td>
      <td>0.683063</td>
      <td>0.640966</td>
      <td>0.611135</td>
      <td>0.519355</td>
      <td>0.551349</td>
      <td>0.520983</td>
      <td>0.471903</td>
      <td>0.451619</td>
      <td>0.544085</td>
      <td>0.463508</td>
      <td>0.437295</td>
      <td>0.431744</td>
      <td>0.415531</td>
      <td>0.410523</td>
      <td>0.441721</td>
      <td>0.288119</td>
      <td>0.787033</td>
      <td>0.726233</td>
      <td>0.496361</td>
      <td>0.475815</td>
      <td>0.577083</td>
      <td>0.581961</td>
      <td>0.574316</td>
      <td>0.722959</td>
      <td>0.500225</td>
      <td>1.001878</td>
      <td>0.985736</td>
      <td>1.105019</td>
      <td>1.203134</td>
      <td>1.185000</td>
      <td>1.234425</td>
      <td>1.244092</td>
      <td>1.252681</td>
      <td>1.330219</td>
      <td>1.253776</td>
      <td>1.290307</td>
      <td>AGO</td>
    </tr>
    <tr>
      <th>3</th>
      <td>1.258195</td>
      <td>1.374186</td>
      <td>1.439956</td>
      <td>1.181681</td>
      <td>1.111742</td>
      <td>1.166099</td>
      <td>1.333055</td>
      <td>1.363746</td>
      <td>1.519551</td>
      <td>1.558968</td>
      <td>1.753240</td>
      <td>1.989498</td>
      <td>2.515914</td>
      <td>2.303897</td>
      <td>1.849007</td>
      <td>1.910634</td>
      <td>2.013585</td>
      <td>2.275876</td>
      <td>2.530625</td>
      <td>2.898209</td>
      <td>1.935058</td>
      <td>2.693024</td>
      <td>2.624857</td>
      <td>2.683240</td>
      <td>2.694291</td>
      <td>2.658015</td>
      <td>2.665356</td>
      <td>2.414061</td>
      <td>2.331599</td>
      <td>2.783243</td>
      <td>1.678107</td>
      <td>1.312213</td>
      <td>0.774725</td>
      <td>0.723790</td>
      <td>0.600204</td>
      <td>0.654537</td>
      <td>0.636625</td>
      <td>0.490365</td>
      <td>0.560271</td>
      <td>0.960164</td>
      <td>0.978175</td>
      <td>1.053304</td>
      <td>1.229541</td>
      <td>1.412697</td>
      <td>1.376213</td>
      <td>1.412498</td>
      <td>1.302576</td>
      <td>1.322335</td>
      <td>1.484311</td>
      <td>1.495600</td>
      <td>1.578574</td>
      <td>1.803715</td>
      <td>1.692908</td>
      <td>1.749211</td>
      <td>1.978763</td>
      <td>ALB</td>
    </tr>
    <tr>
      <th>4</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>0.011589</td>
      <td>0.011851</td>
      <td>0.013248</td>
      <td>0.011791</td>
      <td>-0.020098</td>
      <td>0.016104</td>
      <td>0.012334</td>
      <td>0.011946</td>
      <td>0.011574</td>
      <td>0.011215</td>
      <td>0.009735</td>
      <td>0.009747</td>
      <td>0.009905</td>
      <td>0.010192</td>
      <td>0.007379</td>
      <td>0.004333</td>
      <td>0.035283</td>
      <td>0.029589</td>
      <td>0.028209</td>
      <td>0.030747</td>
      <td>0.041402</td>
      <td>0.035264</td>
      <td>0.035641</td>
      <td>0.036583</td>
      <td>0.011809</td>
      <td>0.017783</td>
      <td>7.467336</td>
      <td>7.182457</td>
      <td>6.912053</td>
      <td>6.736055</td>
      <td>6.494200</td>
      <td>6.662052</td>
      <td>7.065071</td>
      <td>7.239713</td>
      <td>7.660784</td>
      <td>7.975454</td>
      <td>8.019284</td>
      <td>7.786950</td>
      <td>7.590615</td>
      <td>7.315761</td>
      <td>7.358625</td>
      <td>7.299872</td>
      <td>6.746052</td>
      <td>6.519387</td>
      <td>6.427810</td>
      <td>6.121580</td>
      <td>6.122595</td>
      <td>5.867410</td>
      <td>5.916884</td>
      <td>5.901775</td>
      <td>5.832906</td>
      <td>AND</td>
    </tr>
    <tr>
      <th>...</th>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
    </tr>
    <tr>
      <th>259</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>0.011589</td>
      <td>0.011851</td>
      <td>0.013248</td>
      <td>0.011791</td>
      <td>-0.020098</td>
      <td>0.016104</td>
      <td>0.012334</td>
      <td>0.011946</td>
      <td>0.011574</td>
      <td>0.011215</td>
      <td>0.009735</td>
      <td>0.009747</td>
      <td>0.009905</td>
      <td>0.010192</td>
      <td>0.007379</td>
      <td>0.004333</td>
      <td>0.035283</td>
      <td>0.029589</td>
      <td>0.028209</td>
      <td>0.030747</td>
      <td>0.041402</td>
      <td>0.035264</td>
      <td>0.035641</td>
      <td>0.036583</td>
      <td>0.011809</td>
      <td>0.017783</td>
      <td>0.023982</td>
      <td>0.010720</td>
      <td>0.013268</td>
      <td>0.013966</td>
      <td>0.015142</td>
      <td>0.015693</td>
      <td>0.017195</td>
      <td>0.019060</td>
      <td>0.019350</td>
      <td>0.020034</td>
      <td>0.017282</td>
      <td>0.017264</td>
      <td>0.018603</td>
      <td>0.019182</td>
      <td>0.022595</td>
      <td>0.020912</td>
      <td>0.024582</td>
      <td>0.023787</td>
      <td>0.023466</td>
      <td>0.022707</td>
      <td>0.024515</td>
      <td>0.027016</td>
      <td>0.030539</td>
      <td>0.030365</td>
      <td>0.044700</td>
      <td>XKX</td>
    </tr>
    <tr>
      <th>260</th>
      <td>0.683679</td>
      <td>0.494324</td>
      <td>0.710130</td>
      <td>0.525293</td>
      <td>0.644143</td>
      <td>0.686312</td>
      <td>0.595799</td>
      <td>0.517041</td>
      <td>1.940466</td>
      <td>0.767437</td>
      <td>0.405577</td>
      <td>0.313630</td>
      <td>0.234116</td>
      <td>0.420242</td>
      <td>0.339045</td>
      <td>0.319965</td>
      <td>0.368387</td>
      <td>0.415295</td>
      <td>0.418921</td>
      <td>0.420264</td>
      <td>0.417864</td>
      <td>0.514063</td>
      <td>0.696341</td>
      <td>0.713607</td>
      <td>0.778529</td>
      <td>0.904474</td>
      <td>0.831807</td>
      <td>0.841254</td>
      <td>0.894977</td>
      <td>0.893385</td>
      <td>0.819517</td>
      <td>0.748475</td>
      <td>0.768266</td>
      <td>0.638507</td>
      <td>0.634010</td>
      <td>0.701763</td>
      <td>0.687684</td>
      <td>0.836202</td>
      <td>0.741634</td>
      <td>0.821118</td>
      <td>0.841075</td>
      <td>0.904554</td>
      <td>0.854733</td>
      <td>0.911487</td>
      <td>0.966289</td>
      <td>0.996838</td>
      <td>1.030386</td>
      <td>0.985390</td>
      <td>1.020428</td>
      <td>1.090827</td>
      <td>1.011975</td>
      <td>0.826044</td>
      <td>0.762823</td>
      <td>1.013900</td>
      <td>0.878996</td>
      <td>YEM</td>
    </tr>
    <tr>
      <th>261</th>
      <td>5.727221</td>
      <td>5.832621</td>
      <td>5.887170</td>
      <td>5.961336</td>
      <td>6.332342</td>
      <td>6.616544</td>
      <td>6.453861</td>
      <td>6.560824</td>
      <td>6.593620</td>
      <td>6.665435</td>
      <td>6.785930</td>
      <td>7.437296</td>
      <td>7.376052</td>
      <td>7.256836</td>
      <td>7.198226</td>
      <td>7.350683</td>
      <td>7.474399</td>
      <td>7.550741</td>
      <td>7.446834</td>
      <td>7.866690</td>
      <td>7.999998</td>
      <td>8.773991</td>
      <td>9.311609</td>
      <td>9.428691</td>
      <td>9.922516</td>
      <td>9.921215</td>
      <td>9.877464</td>
      <td>9.593208</td>
      <td>9.773399</td>
      <td>9.493669</td>
      <td>8.513600</td>
      <td>8.653758</td>
      <td>7.801071</td>
      <td>8.100407</td>
      <td>8.361297</td>
      <td>8.742673</td>
      <td>8.626706</td>
      <td>8.982420</td>
      <td>8.647141</td>
      <td>8.462993</td>
      <td>8.420830</td>
      <td>8.163977</td>
      <td>7.727642</td>
      <td>8.657236</td>
      <td>9.519375</td>
      <td>8.707407</td>
      <td>9.236950</td>
      <td>9.498786</td>
      <td>9.979458</td>
      <td>9.967159</td>
      <td>9.256681</td>
      <td>9.048936</td>
      <td>8.872523</td>
      <td>8.686590</td>
      <td>8.979062</td>
      <td>ZAF</td>
    </tr>
    <tr>
      <th>262</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>0.946606</td>
      <td>1.096876</td>
      <td>0.951121</td>
      <td>1.261961</td>
      <td>1.166853</td>
      <td>1.056845</td>
      <td>0.902038</td>
      <td>0.877861</td>
      <td>0.910556</td>
      <td>0.993839</td>
      <td>0.879394</td>
      <td>0.825640</td>
      <td>0.787503</td>
      <td>0.708080</td>
      <td>0.635726</td>
      <td>0.637301</td>
      <td>0.603456</td>
      <td>0.555921</td>
      <td>0.561825</td>
      <td>0.504629</td>
      <td>0.420787</td>
      <td>0.397784</td>
      <td>0.404311</td>
      <td>0.366559</td>
      <td>0.413596</td>
      <td>0.332929</td>
      <td>0.304334</td>
      <td>0.293034</td>
      <td>0.290710</td>
      <td>0.288904</td>
      <td>0.272863</td>
      <td>0.238645</td>
      <td>0.200238</td>
      <td>0.249112</td>
      <td>0.234519</td>
      <td>0.178277</td>
      <td>0.174972</td>
      <td>0.178339</td>
      <td>0.180815</td>
      <td>0.187638</td>
      <td>0.185721</td>
      <td>0.192996</td>
      <td>0.188267</td>
      <td>0.154271</td>
      <td>0.168958</td>
      <td>0.189800</td>
      <td>0.197823</td>
      <td>0.209458</td>
      <td>0.253506</td>
      <td>0.265078</td>
      <td>0.292412</td>
      <td>ZMB</td>
    </tr>
    <tr>
      <th>263</th>
      <td>0.007984</td>
      <td>0.007857</td>
      <td>0.008435</td>
      <td>0.009336</td>
      <td>1.034903</td>
      <td>1.166242</td>
      <td>1.307900</td>
      <td>1.108579</td>
      <td>1.291859</td>
      <td>1.320779</td>
      <td>1.543255</td>
      <td>1.596158</td>
      <td>1.449632</td>
      <td>1.579042</td>
      <td>1.488477</td>
      <td>1.321987</td>
      <td>1.671491</td>
      <td>1.385335</td>
      <td>1.341457</td>
      <td>1.319808</td>
      <td>1.300765</td>
      <td>1.229246</td>
      <td>1.107255</td>
      <td>1.267386</td>
      <td>1.158913</td>
      <td>1.156175</td>
      <td>1.426918</td>
      <td>1.599635</td>
      <td>1.634845</td>
      <td>1.594088</td>
      <td>1.499501</td>
      <td>1.493786</td>
      <td>1.560590</td>
      <td>1.475029</td>
      <td>1.580213</td>
      <td>1.325951</td>
      <td>1.299201</td>
      <td>1.236363</td>
      <td>1.213377</td>
      <td>1.339295</td>
      <td>1.171874</td>
      <td>1.056377</td>
      <td>1.000931</td>
      <td>0.889343</td>
      <td>0.789234</td>
      <td>0.891798</td>
      <td>0.859470</td>
      <td>0.806649</td>
      <td>0.627678</td>
      <td>0.447289</td>
      <td>0.612528</td>
      <td>0.741686</td>
      <td>0.594152</td>
      <td>0.874563</td>
      <td>0.884721</td>
      <td>ZWE</td>
    </tr>
  </tbody>
</table>
<p>264 rows × 56 columns</p>
</div>




```python
#xx.to_csv(r'/content/sample_data/xx.csv')
!pip install geopandas
```

    Collecting geopandas
    [?25l  Downloading https://files.pythonhosted.org/packages/83/c5/3cf9cdc39a6f2552922f79915f36b45a95b71fd343cfc51170a5b6ddb6e8/geopandas-0.7.0-py2.py3-none-any.whl (928kB)
    [K     |████████████████████████████████| 931kB 18.4MB/s eta 0:00:01
    [?25hCollecting pyproj>=2.2.0
    [?25l  Downloading https://files.pythonhosted.org/packages/ce/37/705ee471f71130d4ceee41bbcb06f3b52175cb89273cbb5755ed5e6374e0/pyproj-2.6.0-cp36-cp36m-manylinux2010_x86_64.whl (10.4MB)
    [K     |████████████████████████████████| 10.4MB 1.5MB/s 
    [?25hRequirement already satisfied: shapely in /usr/local/lib/python3.6/dist-packages (from geopandas) (1.7.0)
    Requirement already satisfied: pandas>=0.23.0 in /usr/local/lib/python3.6/dist-packages (from geopandas) (1.0.3)
    Collecting fiona
    [?25l  Downloading https://files.pythonhosted.org/packages/ec/20/4e63bc5c6e62df889297b382c3ccd4a7a488b00946aaaf81a118158c6f09/Fiona-1.8.13.post1-cp36-cp36m-manylinux1_x86_64.whl (14.7MB)
    [K     |████████████████████████████████| 14.7MB 215kB/s 
    [?25hRequirement already satisfied: pytz>=2017.2 in /usr/local/lib/python3.6/dist-packages (from pandas>=0.23.0->geopandas) (2018.9)
    Requirement already satisfied: numpy>=1.13.3 in /usr/local/lib/python3.6/dist-packages (from pandas>=0.23.0->geopandas) (1.18.2)
    Requirement already satisfied: python-dateutil>=2.6.1 in /usr/local/lib/python3.6/dist-packages (from pandas>=0.23.0->geopandas) (2.8.1)
    Collecting cligj>=0.5
      Downloading https://files.pythonhosted.org/packages/e4/be/30a58b4b0733850280d01f8bd132591b4668ed5c7046761098d665ac2174/cligj-0.5.0-py3-none-any.whl
    Requirement already satisfied: click<8,>=4.0 in /usr/local/lib/python3.6/dist-packages (from fiona->geopandas) (7.1.1)
    Collecting click-plugins>=1.0
      Downloading https://files.pythonhosted.org/packages/e9/da/824b92d9942f4e472702488857914bdd50f73021efea15b4cad9aca8ecef/click_plugins-1.1.1-py2.py3-none-any.whl
    Requirement already satisfied: attrs>=17 in /usr/local/lib/python3.6/dist-packages (from fiona->geopandas) (19.3.0)
    Requirement already satisfied: six>=1.7 in /usr/local/lib/python3.6/dist-packages (from fiona->geopandas) (1.12.0)
    Collecting munch
      Downloading https://files.pythonhosted.org/packages/cc/ab/85d8da5c9a45e072301beb37ad7f833cd344e04c817d97e0cc75681d248f/munch-2.5.0-py2.py3-none-any.whl
    Installing collected packages: pyproj, cligj, click-plugins, munch, fiona, geopandas
    Successfully installed click-plugins-1.1.1 cligj-0.5.0 fiona-1.8.13.post1 geopandas-0.7.0 munch-2.5.0 pyproj-2.6.0



```python
import geopandas
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
```


```python
world = geopandas.read_file(geopandas.datasets.get_path('naturalearth_lowres'))
world.head(1000)
```




<div>
<style scoped>
    .dataframe tbody tr th:only-of-type {
        vertical-align: middle;
    }

    .dataframe tbody tr th {
        vertical-align: top;
    }

    .dataframe thead th {
        text-align: right;
    }
</style>
<table border="1" class="dataframe">
  <thead>
    <tr style="text-align: right;">
      <th></th>
      <th>pop_est</th>
      <th>continent</th>
      <th>name</th>
      <th>iso_a3</th>
      <th>gdp_md_est</th>
      <th>geometry</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>0</th>
      <td>920938</td>
      <td>Oceania</td>
      <td>Fiji</td>
      <td>FJI</td>
      <td>8374.0</td>
      <td>MULTIPOLYGON (((180.00000 -16.06713, 180.00000...</td>
    </tr>
    <tr>
      <th>1</th>
      <td>53950935</td>
      <td>Africa</td>
      <td>Tanzania</td>
      <td>TZA</td>
      <td>150600.0</td>
      <td>POLYGON ((33.90371 -0.95000, 34.07262 -1.05982...</td>
    </tr>
    <tr>
      <th>2</th>
      <td>603253</td>
      <td>Africa</td>
      <td>W. Sahara</td>
      <td>ESH</td>
      <td>906.5</td>
      <td>POLYGON ((-8.66559 27.65643, -8.66512 27.58948...</td>
    </tr>
    <tr>
      <th>3</th>
      <td>35623680</td>
      <td>North America</td>
      <td>Canada</td>
      <td>CAN</td>
      <td>1674000.0</td>
      <td>MULTIPOLYGON (((-122.84000 49.00000, -122.9742...</td>
    </tr>
    <tr>
      <th>4</th>
      <td>326625791</td>
      <td>North America</td>
      <td>United States of America</td>
      <td>USA</td>
      <td>18560000.0</td>
      <td>MULTIPOLYGON (((-122.84000 49.00000, -120.0000...</td>
    </tr>
    <tr>
      <th>...</th>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
      <td>...</td>
    </tr>
    <tr>
      <th>172</th>
      <td>7111024</td>
      <td>Europe</td>
      <td>Serbia</td>
      <td>SRB</td>
      <td>101800.0</td>
      <td>POLYGON ((18.82982 45.90887, 18.82984 45.90888...</td>
    </tr>
    <tr>
      <th>173</th>
      <td>642550</td>
      <td>Europe</td>
      <td>Montenegro</td>
      <td>MNE</td>
      <td>10610.0</td>
      <td>POLYGON ((20.07070 42.58863, 19.80161 42.50009...</td>
    </tr>
    <tr>
      <th>174</th>
      <td>1895250</td>
      <td>Europe</td>
      <td>Kosovo</td>
      <td>-99</td>
      <td>18490.0</td>
      <td>POLYGON ((20.59025 41.85541, 20.52295 42.21787...</td>
    </tr>
    <tr>
      <th>175</th>
      <td>1218208</td>
      <td>North America</td>
      <td>Trinidad and Tobago</td>
      <td>TTO</td>
      <td>43570.0</td>
      <td>POLYGON ((-61.68000 10.76000, -61.10500 10.890...</td>
    </tr>
    <tr>
      <th>176</th>
      <td>13026129</td>
      <td>Africa</td>
      <td>S. Sudan</td>
      <td>SSD</td>
      <td>20880.0</td>
      <td>POLYGON ((30.83385 3.50917, 29.95350 4.17370, ...</td>
    </tr>
  </tbody>
</table>
<p>177 rows × 6 columns</p>
</div>




```python
import warnings
warnings.filterwarnings("ignore")
for idx in range(55):
  for i in range(264):
    s = xx.at[i, 'c_code']
    for j in range(177):
      s1 = world.at[j, 'iso_a3']
      if(s == s1):
        world.at[j, 've'] = xx.iat[i, idx]
        break
  fig, ax = plt.subplots(figsize=(15,13))
  #divider = make_axes_locatable(ax)
  #cax = divider.append_axes("right", size="2%", pad=0.1)
  world.plot(column='ve', ax=ax, legend=False, legend_kwds={'label': "carbon emissions by country in {0}".format(idx + 1960), 'orientation': "horizontal"}, cmap='OrRd');
  #plt.savefig('/content/drive/My Drive/Colab Notebooks/cse474/test/imgs/a/foo{0}.png'.format(idx + 1960))
  plt.show()
  print("\n\n")
```


![png](output_16_0.png)


    
    
    



![png](output_16_2.png)


    
    
    



![png](output_16_4.png)


    
    
    



![png](output_16_6.png)


    
    
    



![png](output_16_8.png)


    
    
    



![png](output_16_10.png)


    
    
    



![png](output_16_12.png)


    
    
    



![png](output_16_14.png)


    
    
    



![png](output_16_16.png)


    
    
    



![png](output_16_18.png)


    
    
    



![png](output_16_20.png)


    
    
    



![png](output_16_22.png)


    
    
    



![png](output_16_24.png)


    
    
    



![png](output_16_26.png)


    
    
    



![png](output_16_28.png)


    
    
    



![png](output_16_30.png)


    
    
    



![png](output_16_32.png)


    
    
    



![png](output_16_34.png)


    
    
    



![png](output_16_36.png)


    
    
    



![png](output_16_38.png)


    
    
    



![png](output_16_40.png)


    
    
    



![png](output_16_42.png)


    
    
    



![png](output_16_44.png)


    
    
    



![png](output_16_46.png)


    
    
    



![png](output_16_48.png)


    
    
    



![png](output_16_50.png)


    
    
    



![png](output_16_52.png)


    
    
    



![png](output_16_54.png)


    
    
    



![png](output_16_56.png)


    
    
    



![png](output_16_58.png)


    
    
    



![png](output_16_60.png)


    
    
    



![png](output_16_62.png)


    
    
    



![png](output_16_64.png)


    
    
    



![png](output_16_66.png)


    
    
    



![png](output_16_68.png)


    
    
    



![png](output_16_70.png)


    
    
    



![png](output_16_72.png)


    
    
    



![png](output_16_74.png)


    
    
    



![png](output_16_76.png)


    
    
    



![png](output_16_78.png)


    
    
    



![png](output_16_80.png)


    
    
    



![png](output_16_82.png)


    
    
    



![png](output_16_84.png)


    
    
    



![png](output_16_86.png)


    
    
    



![png](output_16_88.png)


    
    
    



![png](output_16_90.png)


    
    
    



![png](output_16_92.png)


    
    
    



![png](output_16_94.png)


    
    
    



![png](output_16_96.png)


    
    
    



![png](output_16_98.png)


    
    
    



![png](output_16_100.png)


    
    
    



![png](output_16_102.png)


    
    
    



![png](output_16_104.png)


    
    
    



![png](output_16_106.png)


    
    
    



![png](output_16_108.png)


    
    
    

