public class EasyHomework{
	public String determineSign(int[] A){
    	boolean f = true;
        int c = 0;
        for(int i = 0; i < A.length; i++){
        	if(A[i] == 0) return "ZERO";
            else if(A[i] < 0) c++;
        }
        if(c % 2 == 0) return "POSITIVE";
        else return "NEGATIVE";
    }
}