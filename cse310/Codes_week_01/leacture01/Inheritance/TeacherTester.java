public class TeacherTester
{
   
   public static void main(String args[])
   {
//      Teacher obj = new MathTeacher();
//     doesCheck(new MathTeacher());
//      System.out.println(obj.college);
//      System.out.println(obj.designation);
//      System.out.println(obj.mainSubject);
//      obj.does();
      doesCheck(new MathTeacher());
      doesCheck(new ChemTeacher());
//      obj.does();
   }
   
   static void doesCheck(Teacher obj){
     obj.does();
   }
}