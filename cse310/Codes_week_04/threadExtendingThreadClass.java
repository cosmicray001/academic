class threadExtendingThreadClass extends Thread{  
  String threadName;
  threadExtendingThreadClass(String x)
  {
    threadName = x;
  }
public void run()
{  
  System.out.println(threadName + " is running..."); 
  int i = 0;
  try{
    for(i = 0 ; i < 5 ; i++)
    {
      Thread.sleep(2000);
      System.out.println(threadName + " " +i);
    }
   
  }
  catch (InterruptedException e) {
         System.out.println("Thread " + " interrupted.");
      }
}  
public static void main(String args[])
{  
  threadExtendingThreadClass thread1=new threadExtendingThreadClass("Thread 1");
  threadExtendingThreadClass thread2=new threadExtendingThreadClass("Thread 2"); 
  thread1.start();
  thread2.start();
}  
}  