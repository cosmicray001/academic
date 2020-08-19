//This code will generate an error because you cannot override a final method
class FinalMethodOverride extends FinalMethod
{
  void method1()
  {
    System.out.println("I am method1 of parent class.");
  }
}