package BasicIfExamples;

public class E6Nesting {
  public static void main(String[] args) {
    int x = 4;    // Replace with 2 and 1.
    
    if (x < 3) {
      if (x == 2)
        System.out.println("X");
      else
        System.out.println("Y");
      System.out.println("Z");
    }
  }
}
