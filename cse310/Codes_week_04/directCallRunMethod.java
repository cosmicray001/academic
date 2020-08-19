class directCallRunMethod extends Thread{  
 public void run(){  
   System.out.println("running...");  
 }  
 public static void main(String args[]){  
  directCallRunMethod t1=new directCallRunMethod();  
  t1.run();//fine, but does not start a separate call stack  
 }  
}  