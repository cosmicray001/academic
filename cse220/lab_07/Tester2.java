public class Tester2{
  public static void main(String [] args){
    WRM w=new WRM();
    w.registerPatient("SAMIUL",125,100);
    w.registerPatient("ARUP",32,120);
    w.registerPatient("MANIK",126,130);
    w.registerPatient("RIHAN",126,130);
    w.registerPatient("MUSA",156,140);
    w.registerPatient("SHIHAB",156,150);
    w.showAllPatient();
    Patient p=w.servePatient();
    System.out.println(p.name+ " "+p.id);
     p=w.servePatient();
    System.out.println(p.name+ " "+p.id);
    p=w.servePatient();
    System.out.println(p.name+ " "+p.id);
    p=w.servePatient();
    System.out.println(p.name+ " "+p.id);
    w.showAllPatient();
    System.out.println(w.CanDoctorGoHome());
    w.cancelAll();
    System.out.println(w.CanDoctorGoHome());

  }
}