package MoreIfExamples;

import java.util.Scanner;

public class E5Initialization {
  public static void main(String[] args) {
    int x;
    Scanner scanner = new Scanner(System.in);
    String s = scanner.next();
    
    if (s.equals("dog")) {
      x = 10;
    } else {
      x = 12;
    }
    
    System.out.println("x is " + x);
  }
}
