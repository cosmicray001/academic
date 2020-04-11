/*Name: MD. SAMIUL ISLAM
* ID: 17101419
* CSE221, Sec: 03*/
import java.io.File;
import java.util.*;
import java.util.Scanner;
public class LAB03OnBFS  {
    public static int nodes;
    public static int edges;
    public static void main(String [] args)throws Exception{
        File f = new File("/home/cosmicray/Desktop/lab_03/input.txt");
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
        System.out.println();
        for(int i=0;i<nodes;i++){
            System.out.print(i);
            for(int j=0 ;j<nodes;j++){
                if(list.get(i).contains(j)) System.out.print(" --> "+j);

            }
            System.out.println();
        }
        graph(list,1);
    }
    public static void graph(LinkedList<LinkedList<Integer>> list,int s){
        String color[]= new String [nodes];
        int dis[] = new int[nodes];
        int pa[] = new int[nodes];
        color[s]="white";
        dis[s] = 0;
        pa[s] = s;
        LinkedList<Integer> queue=new LinkedList<Integer>();
        queue.add(s);
        while(queue.size()!=0){
            int k=queue.poll();
            System.out.print(k+" : distance from source : " + dis[k] + ", Path-> ");
            fnc(s, k, pa);
            Iterator<Integer>i= list.get(k).listIterator();
            while(i.hasNext()){
                int n=i.next();
                if(color[n]!="white"){
                    color[n]="white";
                    dis[n] = dis[k] + 1;
                    pa[n] = k;
                    queue.add(n);
                }
            }
        }
    }
    public static void fnc(int sor, int cur, int pa[]){
        int n[] = new int[1000006];
        int i = 0;
        int x = cur;
        for( ; x != sor; i++){
            n[i] = x;
            x = pa[x];
        }
        n[i] = sor;
        for(; i > 0; System.out.print(n[i] + ", "), i--);
        System.out.println(n[0]);
    }
}
/*Input:
5
10
0 1
0 2
1 0
1 2
1 4
2 0
2 1
2 3
3 2
4 1
*/

/* output:
0 --> 1 --> 2
1 --> 0 --> 2 --> 4
2 --> 0 --> 1 --> 3
3 --> 2
4 --> 1
1 : distance from source : 0, Path-> 1
0 : distance from source : 1, Path-> 1, 0
2 : distance from source : 1, Path-> 1, 2
4 : distance from source : 1, Path-> 1, 4
3 : distance from source : 2, Path-> 1, 2, 3
*/
