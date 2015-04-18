package MoreIfExamples;

import java.util.Scanner;

public class E3Initialization {
  public static void main(String[] args) {
    int x;
    Scanner scanner = new Scanner(System.in);
    String s = scanner.next();
    
    if (s.equals("dog")) {
      x = 10;
    } else if (!s.equals("dog")) {
      x = 12;
    }
    
    // Uncomment the next line to see the error.
    // System.out.println("x is " + x);
  }
}
