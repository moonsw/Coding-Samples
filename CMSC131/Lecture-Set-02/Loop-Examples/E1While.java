package LoopExamples;

public class E1While {
  public static void main(String[] args) {
    int currValue = 1;
    while (currValue <= 10) {
      System.out.println(currValue);
      currValue = currValue + 1;
    }
    System.out.println("DONE at " + currValue);
  }
}
