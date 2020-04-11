/*	 MD. SAMIUL ISLAM
	 ID: 17101419
	 CSE_220
	 Sec: 01
*/


public class CircularArray{
    
    private int start;
    private int size;
    private Object [] cir;
    
    /*
     * if Object [] lin = {10, 20, 30, 40, null}
     * then, CircularArray(lin, 2, 4) will generate
     * Object [] cir = {40, null, 10, 20, 30}
     */
    public CircularArray(Object [] lin, int st, int sz){
        start = st;
        size  = sz;
        cir = new Object[lin.length];
        int k = start;
        for(int i = 0; i < size; i++){
            cir[k] = lin[i];
            k = (k + 1) % cir.length;
        }
    }
    
    //Prints from index --> 0 to cir.length-1
    public void printFullLinear(){
        for(int i = 0; i < cir.length - 1; i++)
            System.out.printf(cir[i] + ",  ");
        System.out.println(cir[cir.length - 1] + ".");
    }
    
    // Starts Printing from index start. Prints a total of size elements
    public void printForward(){
        int s = start;
        for(int i = 0; i < size - 1; i++){
            System.out.print(cir[s] + ",  ");
            s =(s + 1) % cir.length;
        }
        System.out.println(cir[(start + size - 1) % cir.length] + ".");
    }
    
    
    public void printBackward(){
        int k = (start + size - 1) % cir.length;
        for(int i = 0; i < size - 1; i++){
            System.out.print(cir[k] + ",  ");
            --k;
            if(k < 0) k = cir.length + k;
        }
        System.out.println(cir[start] + ".");
    }
    
    // With no null cells
    public void linearize(){
        Object cir1[] = new Object[size];
        int s = start;
        for(int i = 0; i < size; i++){
            cir1[i] = cir[s];
            s = (s + 1) % cir.length;
        }
        cir = cir1;
    }
    
    // Do not change the Start index
    public void resizeStartUnchanged(int newcapacity){
        Object n[] = new Object[newcapacity];
        int s1 = start;
        int s2 = start;
        for(int i = 0; i < size; i++){
            n[s1] = cir[s2];
            s1 = (s1 + 1) % n.length;
            s2 = (s2 + 1) % cir.length;
        }
        cir = n;
    }
    
    // Start index becomes zero
    public void resizeByLinearize(int newcapacity){
        Object n1[] = new Object[newcapacity];
        int s = start;
        for(int i = 0; i < size; i++){
            n1[i] = cir[s];
            s = (s + 1) % cir.length;
        }
        cir = n1;
    }
    
    /* pos --> position relative to start. Valid range of pos--> 0 to size.
     * Increase array length by 3 if size==cir.length
     * use resizeStartUnchanged() for resizing.
     */
    public void insertByRightShift(Object elem, int pos){
        if(pos > size || pos < 0)
            System.out.println("Invalid position!");
        else{
            if(size >= cir.length)
                resizeStartUnchanged(cir.length + 3);
            int tiShift = size - pos;
            int form = (start + size - 1) % cir.length;
            int to = (form + 1) % cir.length;
            for(int i = 0; i < tiShift; i++){
                cir[to] = cir[form];
                to = form;
                form--;
                if(form < 0) form = cir.length + form;
            }
            pos = (start + pos) % cir.length;
            cir[pos] = elem;
            size++;
        }
    }
    
    public void insertByLeftShift(Object elem, int pos){
        if(pos > size || pos < 0)
            System.out.println("Invaild position!");
        else{
            if(size >= cir.length)
                resizeStartUnchanged(cir.length + 3);
            int nShift = pos + 1;
            int from = start;
            int to = (from  - 1);
            if(to < 0) to = cir.length + to;
            for(int i = 0; i < nShift; i++){
                cir[to] = cir[from];
                to = from;
                from = (from + 1) % cir.length;
            }
            pos = (start + pos) % cir.length;
            cir[pos] = elem;
            size++;
            start--;
            if(start < 0) start = cir.length + start;
        }
    }
    
    /* parameter--> pos. pos --> position relative to start.
     * Valid range of pos--> 0 to size-1
     */
    public void removeByLeftShift(int pos){
        if(pos >= size || pos < 0) System.out.println("Invaild range!");
        else{
            int nShift = size - pos - 1;
            int to = (start + pos) % cir.length;
            int from = (to + 1) % cir.length;
            for(int i = 0; i < nShift; i++){
                cir[to] = cir[from];
                to = from;
                from = (from + 1) % cir.length;
            }
            int k = (start + size - 1) % cir.length;
            cir[k] = null;
            size--;
        }
    }
    
    /* parameter--> pos. pos --> position relative to start.
     * Valid range of pos--> 0 to size-1
     */
    public void removeByRightShift(int pos){
        if(pos < 0 || pos >= size) System.out.println("Invaild range!");
        else{
            int nShift = pos;
            int to = (start + pos) % cir.length;
            int from = to - 1;
            if(from < 0) from = cir.length + from;
            for(int i = 0; i < nShift; i++){
                cir[to] = cir[from];
                to = from;
                from--;
                if(from < 0) from = cir.length + from;
            }
            cir[start] = null;
            size--;
            start = (start + 1) % cir.length;
        }
    }
    
    
    //This method will check whether the array is palindrome or not
    public void palindromeCheck(){
        int i = start;
        int j = (start + size - 1) % cir.length;
        boolean f = true;
        for(int p = 0; p < size / 2; p++){
            if(cir[i] != cir[j]){
                f = false;
                break;
            }
            i = (i + 1) % cir.length;
            j--;
            if(j < 0) j = cir.length + j;
        }
        if(f == true) System.out.println("This array is a palindrome.");
        else System.out.println("This array is NOT a palindrome.");
    }
    
    
    //This method will sort the values by keeping the start unchanged
    public void sort(){
        for(int i = 0; i < size - 1; i++){
            int s = start;
            int k = (s + 1) % cir.length;
            for(int j = 0; j < size - 1 - i; j++){
                if((int)cir[s] > (int)cir[k]){
                    Object temp = cir[s];
                    cir[s] = cir[k];
                    cir[k] = temp;
                }
                s = (s + 1) % cir.length;
                k = (s + 1) % cir.length;
            }
        }
    }
    
    //This method will check the given array across the base array and if they are equivalent interms of values return true, or else return false
    public boolean equivalent(CircularArray k){
        boolean f = true;
        int s = start, s1 = k.start;
        for(int i = 0; i < size; i++){
            if((int)cir[s] != (int)k.cir[s1]){
                f = false;
                break;
            }
            s = (s + 1) % cir.length;
            s1 = (s1 + 1) % k.cir.length;
        }
        return f; // Remove this line
    }
}
