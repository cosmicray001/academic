/* package whatever; // don't place package name! */
import java.math.BigInteger;
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BigInteger b[] = new BigInteger[10004];
		Scanner sc = new Scanner(System.in);
		b[0] = BigInteger.valueOf(1);
		b[1] = BigInteger.valueOf(1);
		for(int i = 2; i < 10001; b[i] = b[i - 1].multiply(BigInteger.valueOf(i)), i++);
		while(sc.hasNext()){
			int a = sc.nextInt();
			String s = b[a].toString();
			char ch[] = s.toCharArray();
			for(int i = s.length() - 1; i >= 0; i--){
				if(ch[i] != '0'){
					System.out.printf("%5d -> %c\n", a, ch[i]);
					break;
				}
			}
		}
	}
}