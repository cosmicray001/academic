public class Node implements Comparable<Node>{
    String a;
    String b;
    int weight;
    public Node(String x , String y , int z){
    a=x;
    b=y;
    weight=z;
    }
    public int compareTo(Node n) {
        if(this.weight < n.weight){
            return -1;
        }else if(this.weight > n.weight){
            return 1;
        }else
            return 0;
    }
}