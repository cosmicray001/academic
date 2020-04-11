public class DeerInZooDivTwo{
    public int[] getminmax(int N, int K){
        int n[] = new int[2];
        int x = N - K;
        if(x < 0) x = 0;
        n[0] = x;
        int y = 0;
        if(K % 2 != 0) K++;
        y = K / 2;
        y = N - y;
        if(y < 0) y = 0;
        n[1] = y;
        return n;
    }
}