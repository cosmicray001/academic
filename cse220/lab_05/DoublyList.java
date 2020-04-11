public class DoublyList{
    public Node head;
    
    
    /* First Constructor:
     * Creates a linked list using the values from the given array. head will refer
     * to the Node that contains the element from a[0]
     */ 
    public DoublyList(Object [] a){
        head = new Node(null, null, null);
        Node tail = head;
        
        for(int i = 0; i<a.length; i++){
            Node mn = new Node(a[i], null, null);
            tail.next = mn;
            mn.prev=tail;
            tail=tail.next;
        }
        tail.next=head; // Making it circular
        head.prev=tail;
    }
    
    /* Second Constructor:
     * Sets the value of head. head will refer
     * to the given LinkedList
     */
    public DoublyList(Node h){
        head = h;
    }
    
    /* Counts the number of Nodes in the list */
    public int countNode(){
        int c = 0;
        for(Node i = head.next; i != head; i = i.next) c++;
        return c;
    }
    
    /* prints the elements in the list */
    public void forwardprint(){
        for(Node n = head.next; n != head; n = n.next)
            System.out.print(n.element + " ");
        System.out.println();
    }
    
    public void backwardprint(){
        for(Node n = head.prev; n != head; n = n.prev)
            System.out.print(n.element + " ");
        System.out.println();
    }
    
    
    // returns the reference of the Node at the given index. For invalid index return null.
    public Node nodeAt(int idx){
        if(idx == -1 || idx == countNode()) return head;
        int c = 0;
        for(Node n = head.next; n != head; n = n.next, c++){
            if(c == idx) return n;
        }
        return null;
    }
    
    
    
    /* returns the index of the Node containing the given element.
     if the element does not exist in the List, return -1.
     */
    public int indexOf(Object elem){
        int c = 0;
        for(Node n = head.next; n != head; n = n.next, c++){
            if(n.element == elem) return c;
        }
        return -1;
    }
    
    
    
    /* inserts Node containing the given element at the given index
     * Check validity of index.
     */
    public void insert(Object elem, int idx){
        Node nw=new Node(elem, null, null);
        Node p = nodeAt(idx);
        Node q = p.prev;
        nw.next = p;
        nw.prev = q;
        q.next = nw;
        p.prev = nw;
    }
    
    
    
    
    /* removes Node at the given index. returns element of the removed node.
     * Check validity of index. return null if index is invalid.
     */
    public Object remove(int index){
        if(index < 0 || index > countNode()) return null;
        Node rmv = new Node(null, null, null);
        rmv = nodeAt(index);
        Node n = rmv.next;
        Node p = rmv.prev;
        p.next = n;
        n.prev = p;
        
        return rmv.element;
    }
    
    
    
}