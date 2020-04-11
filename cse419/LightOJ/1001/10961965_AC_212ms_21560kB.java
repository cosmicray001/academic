import java.util.Scanner ;
public class Main{
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        int T=sc.nextInt();
        for(int i = 1; i <= T; i++){
            int n = sc.nextInt();
            int x = n / 2;
            int y = n - x;
            System.out.printf("%d %d\n", x, y);
        }
    }
}