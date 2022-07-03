#include <iostream>
#include <thread>
#include <chrono>
#include "Cat.h"
#include "Monkey.h"
#include "Fish.h"
using namespace std;

class Test : public Pet {
public:
  
  void loadData(string);
  void saveData(string); 
  void draw(int);
};

void Test::loadData(string s) {}
void Test::saveData(string s) {}
void Test::draw(int) {}

void handle_Pet_Options(Test&, Cat&, Monkey&, Fish&);
void handle_Cat_Action_Menu(Test&, Cat&, Monkey&, Fish&);
void handle_Monkey_Action_Menu(Test&, Cat&, Monkey&, Fish&);
void handle_Fish_Action_Menu(Test&, Cat&, Monkey&, Fish&);

int option;
string name;

// Main menu of game
void display_Main_Menu_Options() {
  cout << endl << endl;
  cout << "\n::::    ::::  :::::::::: ::::    ::: :::    :::" << endl;
  cout << "+:+:+: :+:+:+ :+:        :+:+:   :+: :+:    :+:" << endl; 
  cout << "+:+ +:+:+ +:+ +:+        :+:+:+  +:+ +:+    +:+" << endl; 
  cout << "+#+  +:+  +#+ +#++:++#   +#+ +:+ +#+ +#+    +:+" << endl;
  cout << "+#+       +#+ +#+        +#+  +#+#+# +#+    +#+" << endl; 
  cout << "#+#       #+# #+#        #+#   #+#+# #+#    #+#" << endl;
  cout << "###       ### ########## ###    ####  ########" << endl << endl;
  cout << "`._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.'" << endl;
  cout << "( (_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.) )" << endl;
  cout << ") )   Enter a number to select an option   ) )" << endl;
  cout << "( (   1. Create a new pet                  ( ( " << endl;
  cout << ") )   2. Use loaded pet                    ) )" << endl;
  cout << "( (   3. Load a pet from a file            ( ( " << endl;
  cout << ") )   4. Save a pet to a file              ) )" << endl;
  cout << "( (   5. Exit game                         ( (" << endl;
  cout << "( (_.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.) )" << endl;
  cout << "`._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.'" << endl << endl << endl;
}

//Load a pet from its respective file
void load_from_file(Test& t, Cat& c, Monkey& m, Fish& f) {
  cout << "Enter the pet that you want to load" << endl;
  cin >> name;
  if (name == "Monkey") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    m.loadData(name);
    t.typeOfPet = "Monkey";
    t.setPetName(m.getPetName());
  } else if (name == "Fish") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    f.loadData(name);
    t.typeOfPet = "Fish";
    t.setPetName(f.getPetName());
  } else if (name == "Cat") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    c.loadData(name);
    t.typeOfPet = "Cat";
    t.setPetName(c.getPetName());
  }
  
}

//Save a pet to its respective file
void save_to_file(Test& t, Cat& c, Monkey& m, Fish& f) {
  cout << "Enter the pet that you want to save" << endl;
  cin >> name;
  if (name == "Monkey") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    m.saveData(name);
  } else if (name == "Fish") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    f.saveData(name);
  } else if (name == "Cat") {
    cout << "\nPlease enter the filename" << endl;
    cin >> name;
    c.saveData(name);
  }
}

//Menu displayed if user selects "Create a new pet"
void display_Pet_Options() {
 cout << endl;
 cout << ".----. .----..---.     .----. .----.  .---. .-. .----. .-. .-. .----." << endl;
 cout << "| {}  }| {_ {_   _}   /  {} \\| {}  }{_   _}| |/  {} \\|  `| |{ {__" << endl;  
 cout << "| .--' | {__  | |     \\     /| .--'   | |  | |\\     /| |\\ |.-._} }" << endl;
 cout << "`-'    `----' `-'      `----' `-'      `-'  `-' `----' `-' `-'`----'" << endl << endl;
  cout << "Enter a number to select an option" << endl;
  cout << "1. Monkey" << endl;
  cout << "2. Fish" << endl;
  cout << "3. Cat" << endl;
  cout << "4. Go back to main menu" << endl << endl;
}

//Code to handle main menu
void handle_Main_Menu (Test& t, Cat& c, Monkey& m, Fish& f) {
  do {
  display_Main_Menu_Options();
  cin >> option;
  cout << "\nYou selected option " << option << "\n" << endl;
    if (option == 1) {
      cout << "Lets create a new pet. Which pet would you like to create?" << endl;
      handle_Pet_Options(t, c, m, f);
    }
    if (option == 2) {
      cout << "Lets use your loaded pet, " << t.getPetName() << " the " << t.typeOfPet << endl;
      if (t.typeOfPet == "Monkey") {
        handle_Monkey_Action_Menu(t, c, m, f);
      } else if (t.typeOfPet == "Fish") {
        handle_Fish_Action_Menu(t, c, m, f);
      } else if (t.typeOfPet == "Cat") {
        handle_Cat_Action_Menu(t, c, m, f);
      }
    }
    else if (option == 3) {
      cout << "Lets load your pet" << endl;
      load_from_file(t, c, m, f);
    }
    else if (option == 4) {
      cout << "Lets save your pet's stats" << endl;
      save_to_file(t, c, m, f);
    }
    else if (option == 5) {
      cout << "_______  __   __  _______  __    _  ___   _  _______" << endl;                   
      cout << "|       ||  | |  ||   _   ||  |  | ||   | | ||       |" << endl;                   
      cout << "|_     _||  |_|  ||  |_|  ||   |_| ||   |_| ||  _____|" << endl;                   
      cout << "  |   |  |       ||       ||       ||      _|| |_____ " << endl;                   
      cout << "  |   |  |       ||       ||  _    ||     |_ |_____  |" << endl;                   
      cout << "  |   |  |   _   ||   _   || | |   ||    _  | _____| |" << endl;                  
      cout << "  |___|  |__| |__||__| |__||_|  |__||___| |_||_______|" << endl;                   
      cout << " _______  _______  ______                               " << endl;                 
      cout << "|       ||       ||    _ |                              " << endl;                 
      cout << "|    ___||   _   ||   | ||                              " << endl;                 
      cout << "|   |___ |  | |  ||   |_||_                             " << endl;                 
      cout << "|    ___||  |_|  ||    __  |                            " << endl;                 
      cout << "|   |    |       ||   |  | |                            " << endl;                 
      cout << "|___|    |_______||___|  |_|                            " << endl;                
      cout << " _______  ___      _______  __   __  ___   __    _  _______    __   __" << endl;   
      cout << "|       ||   |    |   _   ||  | |  ||   | |  |  | ||       |  |  | |  |" << endl;  
      cout << "|    _  ||   |    |  |_|  ||  |_|  ||   | |   |_| ||    ___|  |  | |  |" << endl;  
      cout << "|   |_| ||   |    |       ||       ||   | |       ||   | __   |  | |  |" << endl;  
      cout << "|    ___||   |___ |       ||_     _||   | |  _    ||   ||  |  |__| |__|" << endl;  
      cout << "|   |    |       ||   _   |  |   |  |   | | | |   ||   |_| |   __   __ " << endl;  
      cout << "|___|    |_______||__| |__|  |___|  |___| |_|  |__||_______|  |__| |__|" << endl;  
      exit(-1);
    }
  } while (true);
}

//Shows the Cat's current stats
void show_Cat_Stats (Cat& c) {
  cout << "\t\t\t\t\t\t" << c.getPetName() << "'s stats are: " << endl;
  c.showStats();
}

//Shows the Monkey's current stats
void show_Monkey_Stats (Monkey& m) {
  cout << "\t\t\t\t\t\t" << m.getPetName() << "'s stats are: " << endl;
  m.showStats();
}

//Shows the Fish's current stats
void show_Fish_Stats (Fish& f) {
  cout << "\t\t\t\t\t\t" << f.getPetName() << "'s stats are: " << endl;
  f.showStats();
}

//Prints the "Special Actions" font
void printSpecialActions () {
cout << endl << endl << endl;
cout << " _______  _______  _______  _______  ___   _______  ___        _______  _______  _______  ___   _______  __    _  _______ " << endl;
cout << "|       ||       ||       ||       ||   | |   _   ||   |      |   _   ||       ||       ||   | |       ||  |  | ||       |" << endl;
cout << "|  _____||    _  ||    ___||       ||   | |  |_|  ||   |      |  |_|  ||       ||_     _||   | |   _   ||   |_| ||  _____|" << endl;
cout << "| |_____ |   |_| ||   |___ |       ||   | |       ||   |      |       ||       |  |   |  |   | |  | |  ||       || |_____ " << endl;
cout << "|_____  ||    ___||    ___||      _||   | |       ||   |___   |       ||      _|  |   |  |   | |  |_|  ||  _    ||_____  |" << endl;
cout << " _____| ||   |    |   |___ |     |_ |   | |   _   ||       |  |   _   ||     |_   |   |  |   | |       || | |   | _____| |" << endl;
cout << "|_______||___|    |_______||_______||___| |__| |__||_______|  |__| |__||_______|  |___|  |___| |_______||_|  |__||_______|" << endl << endl;
}

//Prints the "Regualar Actions" font
void printRegularActions () {
  cout << "######                                                  #" << endl;                                        
  cout << "#     # ######  ####  #    # #        ##   #####       # #    ####  ##### #  ####  #    #  ####" << endl;  
  cout << "#     # #      #    # #    # #       #  #  #    #     #   #  #    #   #   # #    # ##   # #" << endl;      
  cout << "######  #####  #      #    # #      #    # #    #    #     # #        #   # #    # # #  #  ####" << endl;  
  cout << "#   #   #      #  ### #    # #      ###### #####     ####### #        #   # #    # #  # #      #" << endl; 
  cout << "#    #  #      #    # #    # #      #    # #   #     #     # #    #   #   # #    # #   ## #    #" << endl; 
  cout << "#     # ######  ####   ####  ###### #    # #    #    #     #  ####    #   #  ####  #    #  ####" << endl << endl; 
}

//Displays the actions for Cat
void show_Cat_Action_Menu (Cat& c) {
  printSpecialActions();
  cout << "Enter a number to select an option" << endl << endl;
  cout << "1. Play with ball" << endl;
    cout << "This action allows " << c.getPetName() << " to play with a ball. This will add 10 points to your cat's happy level, but will";
    cout << " add 10 points to tired and hunger levels. " << endl << endl;
  cout << "2. Eat computer" << endl;
    cout << "This action allows " << c.getPetName() << " to eat a computer. This will subtract 10 points from your cat's hunger level, but will";
    cout << " add 10 points to tired level and subtract 10 points from happy level. " << endl << endl;
  cout << "3. Relax on a rug" << endl;
    cout << "This action allows " << c.getPetName() << " lie on a rug. This will subtract 10 points from your cat's tired level, but will";
    cout << " add 10 points to hunger level and subtract 10 points from happy level. " << endl << endl;
  printRegularActions();
  cout << "4. Play" << endl;
    cout << "Adds 10 points to " << c.getPetName() << "'s happy level." << endl << endl;
  cout << "5. Eat" << endl;
    cout << "Subtracts 10 points from " << c.getPetName() << "'s hunger level." << endl << endl;
  cout << "6. Sleep" << endl;
    cout << "Subtracts 10 points from " << c.getPetName() << "'s tired level." << endl << endl;
  cout << "7. Go back to pet options" << endl << endl;
  cout << "8. Go back to main menu" << endl;
}

//Handles the Cat actions
void handle_Cat_Action_Menu (Test& t, Cat& c, Monkey& m, Fish& f) {
  do {
  this_thread::sleep_for(chrono::seconds(3));
  show_Cat_Action_Menu(c);
  cin >> option;
  cout << "\nYou selected option " << option << endl;
    if (option == 1) {
      cout << endl;
      c.play(); c.notRelax(); c.notEat();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 2) {
      cout << endl;
      c.eat(); c.notRelax(); c.notPlay();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 3) {
      cout << endl;
      c.relax(); c.notPlay(); c.notEat();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 4) {
      cout << endl;
      c.play();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 5) {
      cout << endl;
      c.eat();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 6) {
      cout << endl;
      c.relax();
      show_Cat_Stats(c);
      c.checkHappyThreshold(); c.checkHungerThreshold(); c.checkSleepyThreshold();
      c.draw(option);
    }
    else if (option == 7) {
      handle_Pet_Options(t, c, m, f);
    }
    else if (option == 8) {
      handle_Main_Menu(t, c, m, f);
    }
  } while (true);
}

//Displays the actions for Monkey
void show_Monkey_Action_Menu (Monkey& m) {
  printSpecialActions();
  cout << "Enter a number to select an option" << endl << endl;
  cout << "1. Dance" << endl;
    cout << "This action allows " << m.getPetName() << " to dance. This will add 20 points to your monkey's happy level, but will";
    cout << " add 10 points to tired and hunger levels. " << endl << endl;
  cout << "2. Banana time" << endl;
    cout << "This action allows " << m.getPetName() << " to eat a banana. This will subtract 10 points from your monkey's hunger level, but will";
    cout << " add 10 points to tired level and subtract 10 points from happy level. " << endl << endl;
  cout << "3. Chill out on a swing" << endl;
    cout << "This action allows " << m.getPetName() << " to rest on a swing. This will subtract 10 points from your monkey's tired level, but will";
    cout << " add 10 points to hunger level and subtract 20 points from happy level. " << endl << endl;
  printRegularActions();
  cout << "4. Play" << endl;
    cout << "Adds 10 points to " << m.getPetName() << "'s happy level." << endl << endl;
  cout << "5. Eat" << endl;
    cout << "Subtracts 10 points from " << m.getPetName() << "'s hunger level." << endl << endl;
  cout << "6. Sleep" << endl;
    cout << "Subtracts 10 points from " << m.getPetName() << "'s tired level." << endl << endl;
  cout << "7. Go back to pet options" << endl << endl;
  cout << "8. Go back to main menu" << endl;
}

//Handles the Monkey actions
void handle_Monkey_Action_Menu(Test& t, Cat& c, Monkey& m, Fish& f) {
  do {
  this_thread::sleep_for(chrono::seconds(3));
  show_Monkey_Action_Menu(m);
  cin >> option;
  cout << "\nYou selected option " << option << endl;
    if (option == 1) {
      cout << endl;
      m.play(); m.play(); m.notRelax(); m.notEat();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 2) {
      cout << endl;
      m.eat(); m.notRelax(); m.notPlay();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 3) {
      cout << endl;
      m.relax(); m.notPlay(); m.notEat(); m.notPlay();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 4) {
      cout << endl;
      m.play();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 5) {
      cout << endl;
      m.eat();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 6) {
      cout << endl;
      m.relax();
      show_Monkey_Stats(m);
      m.checkHappyThreshold(); m.checkHungerThreshold(); m.checkSleepyThreshold();
      m.draw(option);
    }
    else if (option == 7) {
      handle_Pet_Options(t, c, m, f);
    }
    else if (option == 8) {
      handle_Main_Menu(t, c, m, f);
    }
  } while (true);
}

//Displays the actions for Fish
void show_Fish_Action_Menu(Fish& f) { 
  printSpecialActions();
  cout << "Enter a number to select an option" << endl << endl;
  cout << "1. Avoid shark attack" << endl;
    cout << "This action allows " << f.getPetName() << " to swim fast. This will add 10 points to your fish's happy level, but will";
    cout << " add 20 points to tired and hunger levels. " << endl << endl;
  cout << "2. Hunt" << endl;
    cout << "This action allows " << f.getPetName() << " to hunt for smaller fish. This will subtract 20 points from your fish's hunger level, but will";
    cout << " add 10 points to tired level and subtract 10 points from happy level. " << endl << endl;
  cout << "3. Hide in underwater castle" << endl;
    cout << "This action allows " << f.getPetName() << " to hide in an underwater castle. This will subtract 10 points from your fish's tired level, but will";
    cout << " add 10 points to hunger level and subtract 10 points from happy level. " << endl << endl;
  printRegularActions();
  cout << "4. Play" << endl;
    cout << "Adds 10 points to " << f.getPetName() << "'s happy level." << endl << endl;
  cout << "5. Eat" << endl;
    cout << "Subtracts 10 points from " << f.getPetName() << "'s hunger level." << endl << endl;
  cout << "6. Sleep" << endl;
    cout << "Subtracts 10 points from " << f.getPetName() << "'s tired level." << endl << endl;
  cout << "7. Go back to pet options" << endl << endl;
  cout << "8. Go back to main menu" << endl;
}

//Handles the Fish actions
void handle_Fish_Action_Menu(Test& t, Cat& c, Monkey& m, Fish& f) {
  do {
  this_thread::sleep_for(chrono::seconds(3));
  show_Fish_Action_Menu(f);
  cin >> option;
  cout << "\nYou selected option " << option << endl;
    if (option == 1) {
      cout << endl;
      f.play(); f.notRelax(); f.notEat(); f.notRelax(); f.notEat();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 2) {
      cout << endl;
      f.eat(); f.eat(); f.notRelax(); f.notPlay();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 3) {
      cout << endl;
      f.relax(); f.notPlay(); f.notEat();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 4) {
      cout << endl;
      f.play();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 5) {
      cout << endl;
      f.eat();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 6) {
      cout << endl;
      f.relax();
      show_Fish_Stats(f);
      f.checkHappyThreshold(); f.checkHungerThreshold(); f.checkSleepyThreshold();
      f.draw(option);
    }
    else if (option == 7) {
      handle_Pet_Options(t, c, m, f);
    }
    else if (option == 8) {
      handle_Main_Menu(t, c, m, f);
    }
  } while (true);
}

//Code to handle secondary menu for creating a new pet
void handle_Pet_Options(Test& t, Cat& c, Monkey& m, Fish& f) {
  do {
    display_Pet_Options();
    cin >> option;
    cout << "\nYou selected option " << option << "\n" << endl;
      if (option == 1) {
        cout << "You created a Monkey, what would you like to name it?" << endl;
        cin >> name;
        m.setPetName(name);
        m.typeOfPet = "Monkey";
        cout << "You named it " << m.getPetName() << endl;
        handle_Monkey_Action_Menu(t, c, m, f);
      } else if (option == 2) {
        cout << "You created a Fish, what would you like to name it?" << endl;
        cin >> name;
        f.setPetName(name);
        f.typeOfPet = "Fish";
        cout << "You named it " << f.getPetName() << endl;
        handle_Fish_Action_Menu(t, c, m, f);
      } else if (option == 3) {
        cout << "You created a Cat, what would you like to name it?" << endl;
        cin >> name;
        c.setPetName(name);
        c.typeOfPet = "Cat";
        cout << "You named it " << c.getPetName() << endl;
        handle_Cat_Action_Menu(t, c, m, f);
      } else if (option == 4) {
        handle_Main_Menu(t, c, m, f);
      }
  } while (true);
}

int main () {
  Test test;
  Cat cat;
  Monkey monkey;
  Fish fish;
  handle_Main_Menu(test, cat, monkey, fish); 
  return 0;
}






