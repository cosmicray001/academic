class ExceptionThrown
{
    // It throws the Exception(ArithmeticException).
    // Appropriate Exception handler is not found within this method.
    static int divideByZero(int a, int b){
         
        // this statement will cause ArithmeticException(/ by zero)
        int i = a/b; 
         
        return i;
    }
     
    // The runTime System searches the appropriate Exception handler
    // in this method also but couldn't have found. So looking forward
    // on the call stack.
    static int computeDivision(int a, int b) {
         
        int res =0;
         
        try
        {
          res = divideByZero(a,b);
        }
        // doesn't matches with ArithmeticException
        catch(NumberFormatException ex)
        {
           System.out.println("NumberFormatException is occured"); 
        }
        return res;
    }
     
    // In this method found appropriate Exception handler.
    // i.e. matching catch block.
    public static void main(String args[]){
         
        int a = 1;
        int b = 0;
         
        try
        {
            int i = computeDivision(a,b);
         
        }
         
        // matching ArithmeticException
        catch(ArithmeticException ex)
        {
            // getMessage will print description of exception(here / by zero)
            System.out.println(ex);
        }
    }
}