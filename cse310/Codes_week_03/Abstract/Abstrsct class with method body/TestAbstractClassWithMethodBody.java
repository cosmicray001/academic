 class TestAbstractClassWithMethodBody{  
 public static void main(String args[]){  
  AbstractClassWithMethodBody obj = new InheritAbstractClass();  
   //AbstractClassWithMethodBody obj = new AbstractClassWithMethodBody(); //If you uncomment this code it will generate an error because you cannot create an instance of an abstract class
  obj.run();  
  obj.methodwithbody();  
 }  
}  