package encapsulationExamples;

public class Cat {
  private String name;
  private int lives;
  public final static int MAX_LIVES = 9;
  
  public Cat(String name, int lives) {
    this.name = new String(name);
    this.lives = lives;
  }
  
  public Cat(String nameProvided) { 
    name = nameProvided;
    lives = Cat.MAX_LIVES;
  }
  
  public Cat(Cat otherGuy) {  // Copy constructor.
    name = new String(otherGuy.name);
    lives = otherGuy.lives;
  }

  public void setName(String newName) {
    if (newName.length() <= 10) {
      name = newName;
    } else {
      name = "Jan";
    }
  }

  public void beEatenByDog() {
    lives--;
    System.out.println(name + " has been eated!");
    System.out.println(name + " has " + lives + " more lives...");
  }  
    
  public boolean isAlive() {
    return lives > 0;
  }
  
  public static void healIt(Cat a) {
    a.lives = MAX_LIVES;
  }
  
  public void petTheCat() {
    System.out.println("Petting the cat: " + thisname);
    healIt(this);
  }
  
  public String toString() {
    return name + " ( " + lives + " lives.)";
  }
  
  public static String tellUsAboutCats() {
    String output = "Cats are furry little creatures.\n";
    output += "Some people believe that cares are magical ";
    output += "and possess universal wisdom.\nI think cats ";
    output += "are more like domestic squirrels.";
    return output;
  }
}
