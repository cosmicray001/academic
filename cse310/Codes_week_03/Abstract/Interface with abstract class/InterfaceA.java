interface InterfaceA{  
void a();  
void b();  
void c();  
void d();  
}  
  
abstract class AbstractClassImplementingInterface implements InterfaceA{  
public void c(){System.out.println("I am c");}  
}  
 
//This class does not implement c() method of InterfaceA because AbstractClassImplementingInterface has already implemented it
class InheritAbstractClassThatImplementsInterface extends AbstractClassImplementingInterface
{  
  public void a(){System.out.println("I am a");}  
  public void b(){System.out.println("I am b");}  
  public void d(){System.out.println("I am d");}  
} 
 
  
 