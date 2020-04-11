public class ArrayQueue implements Queue{
    int size;
    int front;
    int rear;
    Patient [] data;
    
    public ArrayQueue(){
        size=0;
        front = -1;
        rear = -1;
        data = new Patient[5];
    }
    public int size(){
        return size;
    }
    public boolean isEmpty(){
        if(size==0){
            return true;
        }
        return false;
    }
    public void enqueue(Patient o) throws QueueOverflowException{
        if(size==5){
            throw new QueueOverflowException();
        }
        else{
            data[size]=o;
            size+=1;
            rear+=1;
        }
    }
    
    public Patient dequeue() throws QueueUnderflowException{
        if(size==0){
            throw new QueueUnderflowException();
        }
        else{
            Patient temp=data[front+1];
            data[front+1]=null;
            size-=1;
            rear-=1;
            for(int x=0;x<size;x++){
                data[x]=data[x+1];
            }
            return temp;
        }
    }
    public Object peek() throws QueueUnderflowException{
        if(size==0){
            throw new QueueUnderflowException();
        }
        else{
            return data[front+1];
        }
    }
    
    public String toString(){
        if(isEmpty()){
            return "[ null ]";
        }
        else{
            String s="[ ";
            for(int x=0;x<size;x++){
                s=s+data[x]+" ";
            }
             return s+"]";   
        }
    }
    
    public Patient[] toArray(){
        Patient [] array=new Patient[size];
        for(int x=0;x<size;x++){
            array[x]=data[x];
        }
        return array;
    }
    
    public int search(Object o){
        for(int x=0;x<size;x++){
            if(data[x].equals(o)){
                return x;
            }
        }
        return -1;
    }
    public void clear(){
    Patient [] p=new Patient[5];
    data=p;
    size=0;
    front=0;
    rear=0;
    }
}