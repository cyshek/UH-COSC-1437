#ifndef PET_H
#define PET_H

#include <iostream>
#include <fstream>
using namespace std;

class Pet {
public:
Pet();
virtual void draw(int) = 0;
void loadData(string);
void saveData(string);
void setPetName(string);
void setHappyLvl(int);
void setTiredLvl(int);
void setHungerLvl(int);
string getPetName();
int getTiredLvl();
int getHappyLvl();
int getHungerLvl();
void play();
void relax();
void eat();
void showStats();
void notPlay();
void notRelax();
void notEat();
void checkHungerThreshold();
void checkHappyThreshold();
void checkSleepyThreshold();
string typeOfPet;
protected:
int tiredLvl;
int happyLvl;
int hungerLvl;
ifstream input;
ofstream output;
string petName;

};

Pet::Pet() {
 tiredLvl = 50;
 happyLvl = 50;
 hungerLvl = 50;
 petName = "None";
 typeOfPet = "Undefined";
}

void Pet::setPetName(string newName) {
 petName = newName;
}

void Pet::setHappyLvl(int lvl) {
 happyLvl = lvl;
}

void Pet::setTiredLvl(int lvl) {
 tiredLvl = lvl;
}

void Pet::setHungerLvl(int lvl) {
 hungerLvl = lvl;
}

int Pet::getTiredLvl() {
 return tiredLvl;
}

int Pet::getHappyLvl() {
 return happyLvl;
}

int Pet::getHungerLvl() {
 return hungerLvl;
}

string Pet::getPetName() {
 return petName;
}

void Pet::play() {
 happyLvl += 10;
}

void Pet::relax() {
 tiredLvl -= 10;
}

void Pet::eat() {
 hungerLvl -= 10;
}

void Pet::notPlay() {
 happyLvl -= 10;
}

void Pet::notRelax() {
 tiredLvl += 10;
}

void Pet::notEat() {
 hungerLvl += 10;
}

void Pet::showStats() {
 cout << "\t\t\t\t\t\thappy level: " << happyLvl << endl;
 cout << "\t\t\t\t\t\ttired level: " << tiredLvl << endl;
 cout << "\t\t\t\t\t\thunger level: " << hungerLvl << endl << endl;
}

void Pet::checkHungerThreshold() {
 if (hungerLvl >= 80) {
  cout << petName << " is HUNGRY! More food please!" << endl;
 } else if (hungerLvl <= 40) {
  cout << petName << " is too FULL! Cut back on the food please!" << endl;
 }
}

void Pet::checkHappyThreshold() {
  if (happyLvl <= 40) {
  cout << petName << " is bored! Do some more activities to make me HAPPY." << endl;
  }
}

void Pet::checkSleepyThreshold() {
 if (tiredLvl >= 80) {
  cout << petName << " is tired! Time to RELAX..." << endl;
 } else if (tiredLvl <= 40) {
  cout << endl;
  cout << petName << " has too much energy! Time to make me MORE TIRED" << endl;
 }
}

void Pet::loadData(string filename) {
 input.open(filename);
 cout << "Loaded from input file: " << filename << endl;
 input >> typeOfPet >> petName >> tiredLvl >> happyLvl >> hungerLvl;
 cout << "Type of Pet: " << typeOfPet << "\nPet name: " << petName << "\nHappy level: "  << happyLvl << "\nTired level: " << tiredLvl << "\nHunger level: " << hungerLvl << endl;
 input.close();
}

void Pet::saveData(string filename) {
 cout << "Type of Pet: " << typeOfPet << "\nPet name: " << petName << "\nHappy level: "  << happyLvl << "\nTired level: " << tiredLvl << "\nHunger level: " << hungerLvl << endl;
 output.open(filename);
 cout << "Saved to output file: " << filename <<  endl;
 output << typeOfPet << " " << petName << " " << tiredLvl << " " << happyLvl << " " << hungerLvl;
 output.close();
}
#endif