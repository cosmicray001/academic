class TestInterfaceBank{  
public static void main(String[] args){  
BankInterface b=new SBIBank();  
System.out.println("ROI in SBI: "+b.rateOfInterest());  
BankInterface p=new PNBBank();  
System.out.println("ROI in PNB: "+p.rateOfInterest()); 
}}  