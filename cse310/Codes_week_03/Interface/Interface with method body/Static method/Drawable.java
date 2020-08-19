interface Drawable
{  
  void draw();  
  static int cube(int x){return x*x*x;}  
}  
class Rectangle implements Drawable
{  
  public void draw(){System.out.println("drawing rectangle");}  
}  