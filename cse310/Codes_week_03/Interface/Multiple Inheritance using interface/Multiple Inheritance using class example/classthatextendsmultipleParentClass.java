class classthatextendsmultipleParentClass extends A,B //The error will be given in this line because java does not support multiple inhertance
{
  //This will generate the error because the compiler does not understand method1() of which class (class A or class B) to override. This the ambiguity. That is why you cannot do multiple inheritance using class
  public void method1()
  {
    System.out.println("Hi , I am method1 is class C");
  }
  
  public static void main(String []args)
  {
    classthatextendsmultipleParentClass obj = new classthatextendsmultipleParentClass();
    
    obj.method1();
  }
}