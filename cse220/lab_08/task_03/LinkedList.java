public class LinkedList{
    Node head;
    public LinkedList(Object a[]){
        head = new Node(a[0], null);
        Node h = head;
        for(int i = 1; i < a.length; i++){
            Node tail = new Node(a[i], null);
            h.next = tail;
            h = tail;
        }
    }
    public void bubbleSort(){
        if(head == null || head.next == null) return;
        for(Node i = head; i.next != null; i = i.next){
            boolean f = false;
            for(Node j = head; j.next != null; j = j.next){
                Node h = j.next;
                if(((Comparable)j.elem).compareTo(h.elem) > 0){
                    Object temp = j.elem;
                    j.elem = h.elem;
                    h.elem = temp;
                    f = true;
                }
            }
            if(!f) break;
        }
    }
    public void print(){
        System.err.println("\nAfter Sorting");
        for(Node i = head; i != null; System.out.print(i.elem + " "), i = i.next);
        System.out.println();
    }
}