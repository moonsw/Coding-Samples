package studentClassExample1;

public class Driver {
  public static void main(String[] args) {  
    Student x, y;
    x = new Student();
    y = new Student();
    x.name = "Fred";
    y.name = "Lawrence of Arabia";
    x.idNum = 123456789;
    y.idNum = 999999999;
    x.tokenLevel = 3;
    y.tokenLevel = 3;
    
    x.sayHello();
    y.sayHello();
    x.spendToken();
    x.spentToken();
    x.sayHello();
    x.acceptTokens(7);
    x.sayHello();
    int tokensForLawrence = 100;
    y.acceptTokens(tokensForLawrence);
    y.sayHello();
    x.doProject("Letter Maker", 6);
    y.doProject("Important People", 3);
    int lastFourReceived = x.getLastFourDigits();
    System.out.println("lastFourReceived is " + lastFourReceived);
    System.out.println("lastFourReceived is " + y.getLastFourDigits());
    System.out.println(x.eatLunch("Hamburger", 4));
  }
}
