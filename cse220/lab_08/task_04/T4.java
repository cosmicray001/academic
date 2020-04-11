// Sort a singly linked sequential list using selection sort algorithm.
import java.util.*;
public class T4{
    public static void main(String[] args){
        Object a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        System.err.println("Orginal list");
        for(int i = 0; i < a.length; System.out.print(a[i] + " "), i++);
        System.out.println();
        LinkedList list = new LinkedList(a);
        list.selectionSort();
        list.print();
    }
}