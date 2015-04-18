package summaryExample;

public class CallingOtherMethods {
  public static void main(String[] args) {
    Student a = new Student("Bob", 7777);
    Student a2 = new Student();
    Student a3 = new Student("Jan", 111, 99);
    
    Student.printClassSize();
    Student.printClass(a, a2, a3);
    a.printOneStudent();
    a2.printOneStudent();
    a3.printOneStudent();
  }
}
