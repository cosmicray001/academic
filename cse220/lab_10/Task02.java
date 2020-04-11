public class Task02{
    public static void main(String[] args){
    }
    public int Level(Node n){
     if(n.parent==null)return 0;
     else return 1+Level(n.parent);
    }
}