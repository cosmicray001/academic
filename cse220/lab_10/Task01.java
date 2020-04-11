public class Task01{
    public static void main(String[] args){
    }
    public static int height(Node n){
        if(n==null)return -1;
        else return 1+(int)max(height(n.left),height(n.right));
    }
    public static int level(Node n){
        if(n.parent==null)return 0;
        else return 1+level(n.parent);
    }
    public static void inOrder(Node n){
        if(n==null) return;
        inOrder(n.left);
        System.out.print( n.element+"  ");
        inOrder(n.right);
    }
    public static void preOrder(Node n){
        if(n==null) return;
        System.out.print( n.element+"  ");
        preOrder(n.left);
        
        preOrder(n.right);
    }
    public static void postOrder(Node n){
        if(n==null) return;
        postOrder(n.left);
        postOrder(n.right);
        System.out.print( n.element+"  ");
    }
    public static boolean compare(Node n1,Node n2){
        if(n1==null && n2==null) return true;
        else if(n1.element.equals(n2.element)){
            if(compare(n1.left,n2.left) && compare(n1.right,n2.right)){
                return true;
            }
        }
        return false;
    }
    public static Node copy(Node n){
        if(n==null){
            return null;
        }
        else{
        Node c=new Node(n.element,copy(n.left),copy(n.right));
        return c;
        }
    }
    public static Object max(Object a, Object b){
    if((int)a>(int)b) return a;
    else return b;
    } 
}