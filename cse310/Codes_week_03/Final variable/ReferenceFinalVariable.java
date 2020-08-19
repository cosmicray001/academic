class ReferenceFinalVariable
{
    public static void main(String[] args) 
    {
        // a final reference variable sb
        final StringBuilder sb = new StringBuilder("Geeks");
         
        System.out.println(sb);
         
        // changing internal state of object
        // reference by final reference variable sb
        // Note that this is not re-assigning. 
        sb.append("ForGeeks");
         
        System.out.println(sb);
    }    
}