public class E2PrePostCompare {

  /** 
   * Will compare the pre and post
   * incremenent operatrs.
   */
  public static void main(String[] args) {
    int x, y;
    
    x = 3;
    y = 5;
    System.out.println("x = " + x + "; y = " + y);
    System.out.println("x++ * y++ = " + (x++ * y++));
    System.out.println("x = " + x + "; y = " + y + "\n");
    
    x = 3;
    y = 5;
    System.out.println("x = " + x + "; y = " + y);
    System.out.println("++x * ++y = " + (++x * ++y));
    System.out.println("x = " + x + "; y = " + y + "\n");
    
    x = 3;
    y = 5;
    System.out.println("x = " + x + "; y = " + y);
    System.out.println("++x * y++ = " + (++x * y++));
    System.out.println("x = " + x + "; y = " + y + "\n");
    
    x = 3;
    y = 5;
    System.out.println("x = " + x + "; y = " + y);
    System.out.println("x++ * ++y = " + (x++ * ++y));
    System.out.println("x = " + x + "; y = " + y + "\n");
  }
}
