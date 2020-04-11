public class LinkedList{
    Node head;
    Node tail;
    public LinkedList(Object a[]){
        head = new Node(a[0], null, null);
        tail = head;
        for(int i = 1; i < a.length; i++){
            Node n = new Node(a[i], null, null);
            tail.next = n;
            n.prev = tail;
            tail = n;
        }
        tail.next = head;
        head.prev = tail;
    }
    public void sort(){
        for(Node i = head.next; i != head; i = i.next){
            Object key = i.elem;
            Node j = i.prev;
            for(; j != tail && ((Comparable)key).compareTo(j.elem) < 0; j = j.prev)
                j.next.elem = j.elem;
            j.next.elem = key;
        }
    }
    public void print(){
        System.out.print(head.elem + " ");
        for(Node i = head.next; i != head; System.out.print(i.elem + " "), i = i.next);
        System.out.println();
    }
}