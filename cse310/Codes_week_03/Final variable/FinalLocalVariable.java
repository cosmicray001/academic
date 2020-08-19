class FinalLocalVariable
{
    public static void main(String args[])
    {
        // local final variable
        final int i;
        i = 20; 
        //i++; //if you uncomment this line it will show error. 
        System.out.println(i);
        
        int arr[] = {4, 2, 3};
      
      // final with for-each statement
      // legal statement
      for (final int j : arr)
      {
        System.out.print(j + " ");
      }
      
    }
}