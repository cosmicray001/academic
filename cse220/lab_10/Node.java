public class Node {
    public Object element;
    public Node left;
    public Node right;
    public Node parent;
    public Node (Object e) {
        this(e, null, null);
    }
    public Node (Object e, Node l, Node r) {
        element = e;
        left = l;
        right = r;
    }
}