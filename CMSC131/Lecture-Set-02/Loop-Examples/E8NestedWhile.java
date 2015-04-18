package LoopExamples;

public class E8NestedWhile {
  public static void main(String[] args) {
    int row = 1;
    while (row <= 9) {
      int col = 1;
      while (col <= row) {
        System.out.print(row);
        col = col + 1;
      }
      System.out.println();
      row = row + 1;
    }
  }
}
