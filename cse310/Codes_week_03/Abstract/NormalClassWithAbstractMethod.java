//This program will generate an error because if there is any abstract method in a class, that class must be abstract.
class NormalClassWithAbstractMethod
{
  abstract method1()
  {
    System.out.println("Hello");
  }
  public static void main(String []args)
  {
    NormalClassWithAbstractMethod obj = new NormalClassWithAbstractMethod();
    obj.metohd1();
  }
}