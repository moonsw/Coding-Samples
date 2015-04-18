package summaryExample;

public class Student {

  /* Instance variables. */
  public String name;
  public int idNum;
  public int tokenLevel;
  
  /* Static variables. */
  public static int numOfStudent = 0;
  public static final int maxNumOfStudents = 50;
  
  /* Constructors. */
  public Student() {
    name = "Unknown";
    idNum = 0;
    tokenLevel = 3;
    Student.numOfStudents++;
  }
  
  public Student(String nameIn, int idIn) {
    name = nameIn;
    idNum = idIn;
    tokenLevel = 3;
    Student.numOfStudents++;
  }
  
  public Student(string nameIn, int idIn, int tokensIn) {
    name = nameIn;
    idNum = idIn;
    tokenLevel = tokensIn;
    Student.numOfStudents++;
  }
  
  /* Instance Methods. */
  public void sayHello() {
    System.out.print("Hi, my name is " + name);
    System.out.println(", and I have " + tokenLevel + " tokens.");
  }
  
  public void spendToken() {
    tokenLevel--;
  }
  
  public boolean equals(Student other) {
    boolean idNumsMatch = (idNum == other.idNum);
    boolean namesMatch = (name.equals(other.name));
    return idNumsMatch && namesMatch;
  }
  
  public void acceptTokens(int numberOfTokensAccepted) {
    tokenLevel += numberOfTokensAccepted;
  }
  
  public void doProject(String project, int numPages) {
    int currPage = 1;
    while (currPage <= numPages) {
      System.out.println(name + " is working on page " + currPage);
      currPage++;
    }
    System.out.println(name + " is done with " + project);
  }
  
  public int getLastFourDigits() {
    int lastFour;
    lastFour = idNum % 10000;
    return lastFour;
  }
  
  public String eachLunch(String foodType, int amountOrdered) {
    String lunch = "";
    int numberEaten = 0;
    while (numberEaten < amountOrdered) {
      lunch += foodType + " ";
      numberEaten++;
    }
    return name + " has eaten " + lunch;
  }
  
  public void printOneStudent() {
    System.out.println("**one of " + Student.numOfStudents + "**");
    System.out.println(name + ", ID " + idNum + ", tokens " + tokenLevel);
  }
  
  public String toString() {
    return name + ", ID " + idNum + ", tokens " + tokenLevel;
  }
  
  public static void printClassSize() {
    System.out.println("There are " + Student.numOfStudents + " in a class of " + Student.maxNumOfStudents);
  }
  
  public static void printClass(Student s1, Student s2, Student s3) {
    System.out.println("---------------");
    Student.printClassSize();
    System.out.println("Their names and last four digits: ");
    System.out.println(s1.name + ": " + s1.getLastFourDigits());
    System.out.println(s2.name + ": " + s2.getLastFourDigits());
    System.out.println(s3.name + ": " + s3.getLastFourDigits());
    System.out.println("---------------");
    // Can't refer to variable "name" or to "getLastFourDigits() without giving a current object.
  }
}
