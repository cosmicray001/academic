public class WRM{
  ArrayQueue ar;
  public WRM(){
    ar=new ArrayQueue();
  }
  public void registerPatient(String n,int a,int p){
    Patient x=new Patient(n,a, p);
    try{
      ar.enqueue(x);
    }
    catch(QueueOverflowException e){
      System.err.println("Queue Full! Cannot register any other patient\n"+e);
    }
  }
  public Patient servePatient(){
    try{
      return ar.dequeue();
    }
    catch(QueueUnderflowException e){
      System.err.println("Queue Empty! No other patient\n"+e);
      
    }
    return null;
  }
  public boolean CanDoctorGoHome(){
    boolean b=ar.isEmpty();
    return b;
  }
  public void cancelAll(){
    ar.clear();
  }
  public void showAllPatient(){
    String [] organizedNames=new String [ar.size()];
    Patient [] p=ar.toArray();
    for(int i=0 ;i<ar.size();i++){
      organizedNames[i]=p[i].name;
    }
    boolean done = false;
    while(done == false){
      done = true;
      for(int i=0;i<organizedNames.length-1;i++)
      {
        int num = 0;
        if(organizedNames[i] != null && organizedNames[i + 1] != null)
        {
          String name1=organizedNames[i]; 
          String name2=organizedNames[i+1];
          num=name1.compareTo(name2);
        }
        if(num>0)
        {
          String temp=organizedNames[i];
          organizedNames[i]=organizedNames[i+1];
          organizedNames[i+1]=temp;
          done=false;
        }
      }
    }
     for(int i=0 ;i<ar.size();i++){
      System.out.print(organizedNames[i]+ ", ");
    }
    System.out.println();
    
  } 
  
}