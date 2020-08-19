//Multiple inheritance using a class implementing multiple interface
class MultipleInheritanceByImplementingMultipleInterfaces implements Printable,Showable{  
public void print(){System.out.println("Hello");}  
public void show(){System.out.println("Welcome");}  
  
public static void main(String args[]){  
MultipleInheritanceByImplementingMultipleInterfaces obj = new MultipleInheritanceByImplementingMultipleInterfaces();  
obj.print();  
obj.show();  
 }  
}  