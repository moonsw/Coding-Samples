package LoopExamples;

import java.util.Scanner;

public class E5WhileTypes {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    final int START = 0;
    final int END = 20;
    
    // Counted loop examples.
    int curr = START;
    while (curr <= END) {
      System.out.println("Counting at: " + curr);
      curr = curr + 2;
    }
    System.out.println("I'm done and curr = " + curr);
    
    // Indefinite iteration loop examples.
    int inVal;
    System.out.println("Enter a number between 1 and 10: ");
    inVal = sc.nextInt();
    while (inVal < 1 || inVal > 10) {
      System.out.println("You typed " + inVal);
      System.out.println("That is not what I asked for.");
      System.out.println("Enter a number between 1 and 10: ");
      inVal = sc.nextInt();
    }
    
    System.out.println("We are done and inVal = " + inVal);
  }
}
