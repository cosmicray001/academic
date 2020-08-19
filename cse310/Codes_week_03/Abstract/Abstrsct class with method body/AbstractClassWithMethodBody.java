abstract class AbstractClassWithMethodBody{  
   AbstractClassWithMethodBody(){System.out.println("Object is created");}  
   abstract void run();  
   void methodwithbody(){System.out.println("This is a method with body in abstract class");}  
 }  

 class InheritAbstractClass extends AbstractClassWithMethodBody{  
 void run(){System.out.println("running safely..");}  
 }  
