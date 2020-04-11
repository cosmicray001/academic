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
    public void selectionSort(){
        if(head == null || head.next == null) return;
        for(Node i = head; i.next != null; i = i.next){
            Node min = i;
            for(Node j = i.next; j != null; j = j.next){
                if(((Comparable)min.elem).compareTo(j.elem) > 0) min = j;
            }
            if(i != min){
                Object temp = i.elem;
                i.elem = min.elem;
                min.elem = temp;
            }
        }
    }
    public void print(){
        System.err.println("After sorting");
        for(Node i = head; i != null; System.out.print(i.elem + " "), i = i.next);
        System.out.println();
    }
}