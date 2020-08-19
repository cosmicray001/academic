class MultipleInhertanceUsingAnInterfaceExtendingMultipleInterfaces implements C
{
  public void method1()
  {
    System.out.println("Hi, this is metohd1");
  }
  
  public void method2()
  {
    System.out.println("Hi, this is metohd2");
  }
  
  public void method3()
  {
    System.out.println("Hi, this is metohd3");
  }
  
  public static void main (String []args)
  {
    C obj = new MultipleInhertanceUsingAnInterfaceExtendingMultipleInterfaces();
    obj.method1();
    obj.method2();
    obj.method3();
  }
}