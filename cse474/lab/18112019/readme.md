
# <center>f(x) = 2x<sup>3</sup> + 5x<sup>2</sup> + 10x + 15</center>



```
trapezoidal
a = -1
b = 3
n = 10
```







```python
import numpy as np
def fnc(x):
  return (2 * x**3) + (5 * x**2) + (10 * x) + 15
def trapezoidal(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    sum += (2 * fnc(x_data[i]))
  return (h / 2) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 10 # better result can be found increasing the value of n
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(trapezoidal(x_data, h))
```

    126.66776406035666


# <center>f(x) = 2x<sup>3</sup> + 5x<sup>2</sup> + 10x + 15</center>



```
simpson 1 / 3
a = -1
b = 3
n = 10
```







```python
import numpy as np
def fnc(x):
  return (2 * x**3) + (5 * x**2) + (10 * x) + 15
def simpson13(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    if(i % 2 == 0):
      sum += (2 * fnc(x_data[i]))
    else:
      sum += (4 * fnc(x_data[i]))
  return (h / 3) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 10
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(simpson13(x_data, h))
```

    123.1553726566072


# <center>f(x) = 2x<sup>3</sup> + 5x<sup>2</sup> + 10x + 15</center>



```
simpson 3 / 8
a = -1
b = 3
n = 10
```







```python
import numpy as np
def fnc(x):
  return (2 * x**3) + (5 * x**2) + (10 * x) + 15
def simpson38(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    if(i % 3 == 0):
      sum += (2 * fnc(x_data[i]))
    else:
      sum += (3 * fnc(x_data[i]))
  return ((3*h) / 8) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 10
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(simpson38(x_data, h))
```

    120.03456790123457


# <center>f(x) = xe<sup>x<sup>2</sup> + 5</sup></center>



```
trapezoidal
a = -1
b = 3
n = 11
```







```python
import numpy as np
def fnc(x):
  return x * np.exp(x**2 + 5)
def trapezoidal(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    sum += (2 * fnc(x_data[i]))
  return (h / 2) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 11
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(trapezoidal(x_data, h))
```

    674071.9183354853


# <center>f(x) = xe<sup>x<sup>2</sup> + 5</sup></center>



```
simpson 1 / 3
a = -1
b = 3
n = 11
```







```python
import numpy as np
def fnc(x):
  return x * np.exp(x**2 + 5)
def simpson13(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    if(i % 2 == 0):
      sum += (2 * fnc(x_data[i]))
    else:
      sum += (4 * fnc(x_data[i]))
  return (h / 3) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 10
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(simpson13(x_data, h))
```

    496907.1665103868


# <center>f(x) = xe<sup>x<sup>2</sup> + 5</sup></center>



```
simpson 3 / 8
a = -1
b = 3
n = 11
```







```python
import numpy as np
def fnc(x):
  return x * np.exp(x**2 + 5)
def simpson38(x_data, h):
  sum = 0
  for i in range(1, len(x_data) - 2):
    if(i % 3 == 0):
      sum += (2 * fnc(x_data[i]))
    else:
      sum += (3 * fnc(x_data[i]))
  return ((3*h) / 8) * (fnc(x_data[0]) + sum + fnc(x_data[len(x_data) - 1]))
a = float(-1.)
b = float(3.)
n = 10
h = (b - a) / n
x_data = np.linspace(a, b, n)
print(simpson38(x_data, h))
```

    554877.1554564404

