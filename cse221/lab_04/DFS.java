import java.io.File;
import java.util.*;
import java.util.Scanner;
// Consider u=0,v=1,w=2,x=3,y=4,z=5
// in such way the output of the lab04 doc is 3 4 1 0 5 2
public class DFS  {
    public static int nodes;
    public static int edges;
    public static String [] color;
    public static int time=0;
    
    public static void main(String [] args)throws Exception{
        Stack<Integer>s=new Stack<Integer>();
        File f =new File("Adjacency.txt");
        Scanner sc= new Scanner(f);
         nodes=sc.nextInt();
         edges=sc.nextInt();

        LinkedList<LinkedList<Integer>> list= new LinkedList<LinkedList<Integer>>();
        for (int i=0 ;i<nodes ;i++){
            list.add(new LinkedList<Integer>());
        }
        for (int i=0 ;i<edges ;i++){
            list.get(sc.nextInt()).add(sc.nextInt());
        }
        
        dfs(0,list,s);
	System.out.println();
    }
    public static void dfs_visit(int v,LinkedList<LinkedList<Integer>> list,Stack<Integer>s){
        color[v]="white";
        time=time+1;
        s.push(v);
        Iterator<Integer> i = list.get(v).listIterator();
        while(i.hasNext()){
        int e=i.next();
        if(color[e]!="white"){
        dfs_visit( e, list,s);
        
        }
        }
        
    }
 public static void dfs(  int v,LinkedList<LinkedList<Integer>> list,Stack<Integer>s){
color=new String [nodes]; 
dfs_visit( v, list,s);
while(!s.isEmpty())
    {  
       int t= s.pop();
       System.out.print(t+"  ");
    }
for(int count = 0; count < nodes; count++) {
   if(color[count] != "white") {
    dfs_visit( count, list,s);
    while(!s.isEmpty())
    {  
       int t= s.pop();
       System.out.print(t+"  ");
    }
   }
 }
}
}
