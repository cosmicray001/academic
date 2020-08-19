class StudentStatic{  
   int rollno;  
   String name;  
   static String college ="ITS";
   int count_student = 0;
     
   StudentStatic(int r,String n){  
   rollno = r;  
   name = n;
   count_student++;
   }  
   void display (){System.out.println(rollno+" "+name+" "+college+" "+count_student);}  
  
 public static void main(String args[]){  
 StudentStatic s1 = new StudentStatic(111,"Karan");  
 s1.display();  
 
 StudentStatic s2 = new StudentStatic(222,"Aryan");
 s2.display();  
 }  
}