package LoopExamples;

public class E3DoWhile {
  public static void main(String[] args) {
    int i = 1;
    do {
      System.out.println(i);
      i = i + 1;
    } while (i <= 10);
    System.out.println("DONE at " + i);
  }
}
