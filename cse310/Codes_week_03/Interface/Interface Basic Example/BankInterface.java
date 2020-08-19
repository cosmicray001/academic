interface BankInterface
{  
  float rateOfInterest();  
}  
class SBIBank implements BankInterface{  
public float rateOfInterest(){return 9.15f;}  //If you comment this line it will generate an error because you must implement all the methods of BankInterface 
}  
class PNBBank implements BankInterface{  
public float rateOfInterest(){return 9.7f;}  //If you comment this line it will generate an error because you must implement all the methods of BankInterface
}  
