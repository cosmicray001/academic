class ExceptionWithSeveralCatchBlocks
{
  void divideByZero()
  {
    int a = 10/0;
    //System.out.println(a);
  }
  
  public static void main(String []args)
  {
    int [] arr = new int[4];
    ExceptionWithSeveralCatchBlocks obj = new ExceptionWithSeveralCatchBlocks();
    try
    {
      int x = arr[4]; //This will throw array index out of bounds error
      //System.out.println(x);
      obj.divideByZero(); //This will throw arithmetic exception error 
    }
    catch(ArithmeticException ex)
    {
      System.out.println(ex);
    }
    catch (ArrayIndexOutOfBoundsException  ex)
    {
      System.out.println(ex);
    }
    finally
    {
      System.out.println("All errors handled");
    }
  }
}