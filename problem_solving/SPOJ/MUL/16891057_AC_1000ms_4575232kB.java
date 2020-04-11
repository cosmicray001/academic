import java.util.Scanner;
import java.math.BigInteger;
public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    for(int i = 0; i < t; i++){
      BigInteger n = sc.nextBigInteger();
      BigInteger m = sc.nextBigInteger();
      BigInteger o = n.multiply(m);
      System.out.println(o);
    }
  }
}