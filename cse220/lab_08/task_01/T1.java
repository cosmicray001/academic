// Sort an array using selection sort algorithm.
import java.util.*;
public class T1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int n[] = new int[len];
        for(int i = 0; i < len; n[i] = sc.nextInt(), i++);
        fnc(n);
    }
    public static void fnc(int a[]){
        for(int i = 0; i < a.length - 1; i++){
            int min_pos = i;
            for(int j = i + 1; j < a.length; j++){
                if(a[min_pos] > a[j]) min_pos = j;
            }
            if(i != min_pos){
                int temp = a[i];
                a[i] = a[min_pos];
                a[min_pos] = temp;
            }
        }
        for(int i = 0; i < a.length; System.out.print(a[i] + " "), i++);
        System.out.println();
    }
}