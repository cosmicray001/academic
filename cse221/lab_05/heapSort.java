/* MD. SAMIUL ISLAM
 * ID: 17101419; SEC: 03; CSE221*/
import java.util.*;
import java.io.*;
public class heapSort{
    public static int n[] = new int[10004];
    public static void main(String[] args) throws Exception{
        File f = new File("/home/cosmicray/Downloads/lab_05/input.txt"); // for linux OS
        Scanner sc = new Scanner(f);
        int len = sc.nextInt();
        len++;
        for(int i = 1; i < len; n[i] = sc.nextInt(), i++);
        printf("Orginal array:", len, 0);
        max_heapify(len);
        printf("After heapify:", len, 1);
        heapIncreaseKey(9, 892, len);
        printf("After increasing key:", len, 1);
        maxHeapInsert(900, ++len);
        printf("After inserting key:", len, 1);
        ext_max();
        sort(len);
        printf("The heap sorted array is:", len, 1);
    }
    public static void max_heapify(int len){
        for(int i = (len - 1) / 2; i > 0; i--) heapify(len, i);
    }
    public static void sort(int len){
        for(int i = len - 1; i > 0; i--){
            swap(i, 1);
            len--;
            heapify(len, 1);
        }
    }
    public static void heapify(int len, int a){
        int l = a * 2, r = l + 1, max = a;
        if(l < len && n[l] > n[max]) max = l;
        if(r < len && n[r] > n[max]) max = r;
        if(max != a){
            swap(a, max);
            heapify(len, max);
        }
    }
    public static void heapIncreaseKey(int idx, int ve, int len){
        n[idx] = ve;
        printf("Increasing key: heapIncreaseKey(arr, 9, 892)", len, 0);
        for(int i = idx; i > 1 && n[i / 2] < n[i]; i /= 2) swap(i, i / 2);
    }
    public static void maxHeapInsert(int ve, int len){
        n[len - 1] = ve;
        printf("Inserting the key: maxHeapInsert(arr, 900)", len, 0);
        max_heapify(len);
    }
    public static void ext_max(){
        System.err.print("Extracting the maximum value: ");
        System.out.println(n[1]);
        System.out.println("\n------------------------------------------------------------------------------------------------------------------\n");
    }
    public static void printf(String s, int len, int div){
        System.err.println(s);
        for(int i = 1; i < len - 1; System.out.print(n[i] + " "), i++);
        System.out.println(n[len - 1] + "\n");
        if(div == 1) System.out.println("------------------------------------------------------------------------------------------------------------------\n");
    }
    public static void swap(int x, int y){
        int temp = n[x];
        n[x] = n[y];
        n[y] = temp;
    }
}