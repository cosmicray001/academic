public class LinkedList{
    public Node head;
    
    
    /* First Constructor:
     * Creates a linked list using the values from the given array. head will refer
     * to the Node that contains the element from a[0]
     */ 
    public LinkedList(Object [] a){
        head = new Node(a[0], null);
        Node h = head;
        for(int i = 1; i < a.length; i++){
            Node tail = new Node(a[i], null);
            h.next = tail;
            h = tail;
        }
    }
    
    /* Second Constructor:
     * Sets the value of head. head will refer
     * to the given LinkedList
     */
    public LinkedList(Node h){
        head = h;
    }
    
    /* Counts the number of Nodes in the list */
    public int countNode(){
        int c = 0;
        for(Node i = head; i !=null; i=i.next) c++;
        return c; // please remove this line!
    }
    
    /* prints the elements in the list */
    public void printList(){
        for(Node i = head; i!=null; i = i.next)
            System.out.print(i.element + " ");
        System.out.println();
    }
    
    // returns the reference of the Node at the given index. For invalid index return null.
    public Node nodeAt(int idx){
        int c = 0;
        for(Node i = head; i !=null; i = i.next){
            if(c == idx) return i;
            c++;
        }
        return null; // please remove this line!
    }
    
    
// returns the element of the Node at the given index. For invalid idx return null.
    public Object get(int idx){
        int c = 0;
        for(Node i = head; i != null; i = i.next){
            if(c == idx) return i.element;
            c++;
        }
        return null; // please remove this line!
    }
    
    
    
    /* updates the element of the Node at the given index. 
     * Returns the old element that was replaced. For invalid index return null.
     * parameter: index, new element
     */
    public Object set(int idx, Object elem){
        int c = 0;
        for(Node i = head; i != null; i = i.next){
            if(c == idx){
                Object tem = i.element;
                i.element = tem;
                return tem;
            }
            c++;
        }
        return null; // please remove this line!
    }
    
    
    /* returns the index of the Node containing the given element.
     if the element does not exist in the List, return -1.
     */
    public int indexOf(Object elem){
        int c = 0;
        for(Node i = head; i != null; i = i.next){
            if(i.element == elem){
                return c;
            }
            c++;
        }
        return - 1; // please remove this line!
    }
    
    // returns true if the element exists in the List, return false otherwise.
    public boolean contains(Object elem){
        for(Node i = head; i != null; i = i.next){
            if(i.element == elem) return true;
        }
        return false; // please remove this line!
    }
    
    // Makes a duplicate copy of the given List. Returns the reference of the duplicate list.
    public Node copyList(){
        Node Head1 = new Node(head.element, null);
        Node h = Head1;
        for(Node i = head.next; i != null; i = i.next){
            Node tail = new Node(i.element, null);
            h.next = tail;
            h = tail;
        }
        return Head1;
    }
    
    // Makes a reversed copy of the given List. Returns the head reference of the reversed list.
    public Node reverseList(){
        Node Head1 = new Node(head.element, null);
        for(Node i = head.next; i != null; i = i.next){
            Node h = new Node(i.element, Head1);
            Head1 = h;
        }
        return Head1;
    }
    /* inserts Node containing the given element at the given index
     * Check validity of index.
     */
    public void insert(Object elem, int idx){
        int c = 0;
        Node h = new Node(null, null);
        if(idx > 0){
            for(Node i = head; i != null; i = i.next){
                if(c == idx - 1){
                    h.element = elem;
                    h.next = i.next;
                    i.next = h;
                }
                c++;
            }
            if(c + 2 <= idx) System.out.println("Invalid");
        }
        else if(idx == 0){
            h.element = elem;
            h.next = head;
            head = h;
        }
    }
    
    
    /* removes Node at the given index. returns element of the removed node.
     * Check validity of index. return null if index is invalid.
     */
    public Object remove(int index){
        int c = 0;
        Object p = null;
        Node t = new Node(null, null);
        for(Node i = head; i != null; i = i.next){
            if(index == 0){
                p = i.element;
                head = i.next;
                break;
            }
            if(c == index){
                p = i.element;
                t.next = i.next;
                break;
            }
            t = i;
            c++;
        }
        return p; // please remove this line!
    }
    
    // Rotates the list to the left by 1 position.
    public void rotateLeft(){
        Node t=head;
        head = head.next;
        for(Node i = head; i != null; i = i.next){
            if(i.next == null){
                i.next = t;
                t.next = null;
            }
        }
    }
    
    // Rotates the list to the right by 1 position.
    public void rotateRight(){
        Node head1;
        Node t = new Node(null, null);
        for(Node i = head; i != null; i = i.next){
            if(i.next == null){
                i.next = head;
                head = i;
                t.next = null;
                break;
            }
            t = i;
        }
    }
    
}