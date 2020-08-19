abstract class AbstractBank
{    
  abstract int getRateOfInterest();   
}    

class SBIBank extends AbstractBank
{    
  int getRateOfInterest(){return 7;}    
} 

class PNBBank extends AbstractBank
{    
  int getRateOfInterest(){return 8;}    
}    