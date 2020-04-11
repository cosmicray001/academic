// Sort a DOUBLY linked sequential list using insertion sort algorithm.
public class T5{
    public static void main(String[] args){
        Object a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        LinkedList list = new LinkedList(a);
        list.sort();
        list.print();
    }
}