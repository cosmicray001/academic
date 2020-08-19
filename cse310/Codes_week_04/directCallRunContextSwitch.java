class directCallRunContextSwitch extends Thread{  
 public void run(){  
  for(int i=1;i<5;i++){  
    try{Thread.sleep(500);}catch(InterruptedException e){System.out.println(e);}  
    System.out.println(i);  
  }  
 }  
 public static void main(String args[]){  
  directCallRunContextSwitch t1=new directCallRunContextSwitch();  
  directCallRunContextSwitch t2=new directCallRunContextSwitch();  
   
  t1.run();  
  t2.run();  
 }  
}  