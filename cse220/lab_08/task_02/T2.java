// Sort an array using insertion sort algorithm.
import java.util.*;
public class T2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int n[] = new int[len];
        for(int i = 0; i < len; n[i] = sc.nextInt(), i++);
        for(int i = 0; i < n.length; System.err.print(n[i] + " "), i++);
        System.out.println();
        fnc(n);
    }
    public static void fnc(int n[]){
        for(int i = 1; i < n.length; i++){
            int key = n[i], j = i - 1;
            for(; j >= 0 && key < n[j]; j--) n[j + 1] = n[j];
            n[j + 1] = key;
        }
        for(int i = 0; i < n.length; System.out.print(n[i] + " "), i++);
        System.out.println();
    }
}