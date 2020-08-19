class Hi extends Thread{
    public void run(){
        for(int i = 0; i < 5; i++){
            System.out.println("HI");
            try{Thread.sleep(1000);} catch (Exception e){}
        }
    }
}
class Hello extends Thread{
    public void run(){
        for(int i = 0; i < 5; i++){
            System.out.println("Hello");
            try{Thread.sleep(1000);} catch (Exception e){}
        }
    }
}
public class threadDemo {
    public static void main(String args[]){
        Hi ob1 = new Hi();
        Hello ob2 = new Hello();
        ob1.start();
        ob2.start();
    }
}
