import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = 10;
        BigInteger n1, n, x, l, k;
        while(t != 0){
            n1 = sc.nextBigInteger();
            x = sc.nextBigInteger();
            n = n1.subtract(x);
            k = n.divide(BigInteger.valueOf(2));
            l = n1.subtract(k);
            System.out.println(l);
            System.out.println(k);
            t--;
        }
    }
}