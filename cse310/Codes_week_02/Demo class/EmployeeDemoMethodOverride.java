public class EmployeeDemoMethodOverride extends Employee {
  
  private int getSalary()
  {
    return 1000;
  }
  
  public int getNothing()
  {
    return 50;
  }
  
  //Method overriding
    public static void main(String[] args) 
    {
        EmployeeDemoMethodOverride e1 = new EmployeeDemoMethodOverride();
        System.out.println(e1.getSalary());
    }
  
}