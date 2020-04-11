import java.util.*;
import java.math.BigInteger;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        BigInteger n[] = new BigInteger[110];
        n[1] = BigInteger.valueOf(1);
        for(int i = 2; i <= 100; i++){
            n[i] = n[i - 1].multiply(BigInteger.valueOf(i));
        }
        int  t = sc.nextInt();
        for(int i = 0; i < t; i++){
            int x = sc.nextInt();
            System.out.println(n[x]);
        }
    }
}