class TestAbstractBank{    
public static void main(String args[])
{    
  AbstractBank b;  
  b=new SBIBank();  
  System.out.println("Rate of Interest is: "+b.getRateOfInterest()+" %");    
  b=new PNBBank();  
  System.out.println("Rate of Interest is: "+b.getRateOfInterest()+" %");    
}}