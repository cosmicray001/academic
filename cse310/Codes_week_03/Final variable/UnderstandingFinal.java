class UnderstandingFinal
{
  //a final variable direct initialize
   final int THRESHOLD = 5;
     
    // a blank final variable
    final int CAPACITY;
     
    // another blank final variable
    final int  MINIMUM;
     
    // a final static variable PI
    // direct initialize
    static final double PI = 3.141592653589793;
     
    // a  blank final static  variable
    static final double EULERCONSTANT; // a blank static variable MUST be initialized in a static block
    
    // instance initializer block for 
    // initializing CAPACITY
    {
        CAPACITY = 25;
    }
    
    // static initializer block for 
    // initializing EULERCONSTANT
    static{
        EULERCONSTANT = 2.3;
    }
    
    
    // constructor for initializing MINIMUM
    // Note that if there are more than one
    // constructor, you must initialize MINIMUM
    // in them also
    public UnderstandingFinal() 
    {
        //CAPACITY = -5; //If uncomment this line it will throw an error becasue CAPACITY variable has already been initialized.
        MINIMUM = -5;
    }
    
    //This constructor does not initialize MINIMUM variable . So it will throw an error. Please uncomment the below code to check if the error occurs
    /*public UnderstandingFinal (int x)
    {
      System.out.println ("Constructor without initializing blank final variable");
    }
    */
    
    
    public static void main (String []args)
    {
      UnderstandingFinal abc = new UnderstandingFinal();
      System.out.println(abc.THRESHOLD + " " + abc.CAPACITY + " " + abc.MINIMUM + " " + UnderstandingFinal.EULERCONSTANT);
    }
}