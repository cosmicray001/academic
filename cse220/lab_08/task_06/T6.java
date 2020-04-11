// Implement binary search algorithm.
import java.util.*;
public class T6{
    public static void main(String[] args){
        Object a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        Object key = 5;
        System.err.println(fnc(a, key));
    }
    public static int fnc(Object a[], Object key){
        int hi = a.length - 1, lo = 0, mid;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            if(key.equals(a[mid])) return mid;
            else if(((Comparable)key).compareTo(a[mid]) < 0) hi = mid - 1;
            else lo = mid + 1;
        }
        return -1;
    }
}