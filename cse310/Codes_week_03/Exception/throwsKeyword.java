import java.io.*;
 
class throwsKeyword {
  public static void main(String[] args) throws IOException {
        FileReader file = new FileReader("C:\\test\\a.txt");
        BufferedReader fileInput = new BufferedReader(file);
         
        // Print first 3 lines of file "C:\test\a.txt"
        for (int counter = 0; counter < 3; counter++) 
            System.out.println(fileInput.readLine());
        fileInput.close();
    
    //Exception handle using try catch block
    /*try{
        FileReader file = new FileReader("C:\\test\\a.txt");
        BufferedReader fileInput = new BufferedReader(file);
         
        // Print first 3 lines of file "C:\test\a.txt"
        for (int counter = 0; counter < 3; counter++) 
            System.out.println(fileInput.readLine());
        fileInput.close();
    }
    catch (IOException e)
    {
      System.out.println(e);
    }*/
    
    }
}
