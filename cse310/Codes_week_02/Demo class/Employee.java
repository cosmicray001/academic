class Employee {
    String name;
    String ssn;
    String emailAddress;
    int yearOfBirth;
  //Method overloading
    public void display()
    {
      System.out.println("I am method without parameter");
    }
    
    public void display(int a , double b)
    {
      System.out.println("I am method with two parameters");
    }
   
  //Method overriding
/*    public int getSalary()
    {
      return 0;
   }
   */ 
}
