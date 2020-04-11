public class TestTaking{
	public int findMax(int questions, int guessed, int actual){
    	int x = guessed;
        if(guessed > actual) x = actual;
        int y = guessed;
        if(guessed < actual) y = actual;
        int ans = x + (questions - y);
        
        return ans;
    }
}