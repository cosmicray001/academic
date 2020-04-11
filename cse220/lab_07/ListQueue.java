public class ListQueue implements Queue{
    int size;
    Node front;
    Node rear;
    
    
    public ListQueue(){
        size = 0;
        front = null;
        rear = null;
    }
    
//TO DO
    public int size(){
        return size;
    } 
    
// Returns true if the queue is empty
    public boolean isEmpty(){
        if(front==null) return true;
        else return false;
    } 
    
// Adds the new item on the back of the queue, throwing the
// QueueOverflowException if the queue is at maximum capacity. It
// does not throw an exception for an "unbounded" queue, which 
// dynamically adjusts capacity as needed.
    public void enqueue(Patient o) throws QueueOverflowException{
        Node n=new Node(o,null);
        if(rear== null){
            front=n;
            rear=n;
        }
        else{
            rear.next=n;
            rear=n;
        }
        size++;
    } 
    
// Removes the item in the front of the queue, throwing the 
// QueueUnderflowException if the queue is empty.
    public Object dequeue() throws QueueUnderflowException{
        if(front==null){
        throw new QueueUnderflowException();
        }
        else{
        Object o=front.val;
        front=front.next;
        size--;
        return o;
        }
    }
    
// Peeks at the item in the front of the queue, throwing
// QueueUnderflowException if the queue is empty.
    public Object peek() throws QueueUnderflowException{
        if(front==null){
        throw new QueueUnderflowException();
        }
        else{
        Object o=front.val;
        return o;
        }
    }
    
// Returns a textual representation of items in the queue, in the
// format "[ x y z ]", where x and z are items in the front and
// back of the queue respectively.
    public String toString(){
        String s="[ ";
        for(Node h=front ;h!=null ; h=h.next){
        s+=h.val+" ";
        }
        s+=" ]";
        return s;
    }
    
// Returns an array with items in the queue, with the item in the
// front of the queue in the first slot, and back in the last slot.
    public Object[] toArray(){
        Object a[]=new Object[size];
        int i=0;
        for(Node h=front ;h!=null ; h=h.next,i++){
        a[i]=h.val;
        }
        return a;
    }
    
// Searches for the given item in the queue, returning the
// offset from the front of the queue if item is found, or -1
// otherwise.
    public int search(Object o){
      int search=-1;
      int i=0;
        for(Node h=front;h!=null ; h=h.next,i++){
            
            if(o.equals(h.val)){
            search=i;
            }
            
        }
        return search;
    }
}