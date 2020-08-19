class threadImplementingRunnable implements Runnable{  
  String threadName;
  threadImplementingRunnable(String x)
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
  threadImplementingRunnable obj1 = new threadImplementingRunnable("Thread 1");
  Thread thread1 = new Thread(obj1);
  thread1.start();
  threadImplementingRunnable obj2 = new threadImplementingRunnable("Thread 2");  
  Thread thread2 = new Thread(obj2);
  thread2.start();
}  
}  