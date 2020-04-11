public class Patient{
    public int id=0;
    public static int id1=0;
    public String name="";
    public int age=0;
    public int phone=0;
    public Patient(String n,int a,int p){
        name=n;
        age=a;
        phone=p;
        id=++id1;
    }
}