public class Node{
    Object elem;
    Node next;
    Node prev;
    public Node(Object o, Node n, Node p){
        elem = o;
        next = n;
        prev = p;
    }
}