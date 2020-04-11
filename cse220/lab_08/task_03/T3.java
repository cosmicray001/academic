// Sort a singly linked sequential list using bubble sort algorithm.
import java.util.*;
public class T3{
    public static void main(String[] args){
        Object a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        LinkedList list = new LinkedList(a);
        System.err.println("Orginal list");
        for(int i = 0; i < a.length; System.out.print(a[i] + " "), i++);
        list.bubbleSort();
        list.print();
    }
}