import java.io.File;
import java.util.*;
import java.util.Scanner;
import java.util.Set;
import java.util.Iterator;
public class Kruskal {
    public static int nodes;
    public static int edges;
    public static void main(String [] args)throws Exception{
        File f =new File("C:\\Users\\JAVA\\Desktop\\AdjList.txt");
        Scanner sc= new Scanner(f);
        nodes=sc.nextInt();
        edges=sc.nextInt();
        PriorityQueue< Node > pq = new PriorityQueue< Node >();
        Set<String>st=new HashSet<>();
        String s,k;
        int y;
        int a=0;
        for (int i=0 ;i<edges ;i++){
            s=sc.next();
            k=sc.next();
            y=sc.nextInt();
            st.add(s);
            Node n=new Node(s,k,y);
            pq.add(n);
        }
        String x[]=new String [nodes];
        
        for (String d : st) {
            x[a++]=d;
        }
       
        int sum=0;
        
        while (pq.size() != 0)
        {
        Node j = pq.remove();
        Boolean z=false;
        int i,w=0;
        for( i=0;i<nodes;i++){
            String q=x[i];
            
            if(q.contains(j.a) && q.contains(j.b)){
             z=true;
            }
            else{
            if(q.contains(j.a) || q.contains(j.b))w=i;
            }
            
            
        }
        if(z){
        
        }
        else{
        sum+=j.weight;
        x[w]+=j.a+j.b;
        }
        
        
        }
        System.out.println(sum);
        }
       
        }
  


