#ifndef FISH_H
#define FISH_H

#include "Pet.h"

class Fish : public Pet {
public:
void draw (int);
};

void Fish::draw (int code) {
 if (code == 2) {
 cout << "\nTime to go hunting!!" << endl;
 cout << "                                                                                      ,///////.           ./" << endl;
 cout << "                  __                    ___////,,,.._        ,//                __,---//////////,        .///" << endl;
 cout << "                 /o \\/       __       /O            ``--.._///              ,-'  ) ) ) ) ) )''////_    /////" << endl;
 cout << "        <><     \\__/\\__    /o \\/    \\__  \\             ,'          _,-' ))`. ) ) ) ) ) ) ) ) )`-.//////" << endl;
 cout << "         <><          /o \\/ \\\\__/\\   __)  \\         ___`.         / ()_)))))\\) ) ) ) ) ) ) ) )////////" << endl;
 cout << "           <><     __ \\__/\\_          \\____/__,,,---''''  \\\\       \\____)))))) ) ) ) ) ) ) ) )\\\\\\\\|" << endl;
 cout << "         <><      /o \\/  /o \\/                               `\\        `````.)))/ ) ) ) ) ) ) ) ),-\\\\\\||" << endl;
 cout << "        <><      \\__/\\ \\__/\\                                           ___,')),') ) ) ) )_),,--'   \\\\\\|" << endl;
 cout << "        <><        __     __                  ___////,,,.._        ,//   (_______.\\)_),--\"            ` \\\\|" << endl;
 cout << "       <>< <><    /o \\/  /o \\/     __       /  /O            ``--.._///             -\\\\                    `" << endl;
 cout << "       <><  <><  \\__/\\\\__/\\  /o \\/         \\__ \\              ,'                \\                     `\\" << endl;
 cout << "          <><                    \\__/\\      __)  \\          ___`." << endl;
 cout << "        <><                                  \\____/_,,,---''''  \\\\" << endl;
 cout << "                                                         `         \\" << endl;
         
 }
 else if (code == 3) {
  cout << "\nLets go hide in this castle and enjoy our prey." << endl;
  cout << "                              -|             |-" << endl;
  cout << "          -|                  [-_-_-_-_-_-_-_-]                  |-" << endl;
  cout << "          [-_-_-_-_-]          |             |          [-_-_-_-_-]" << endl;
  cout << "           | o   o |           [  0   0   0  ]           | o   o |" << endl;
  cout << "            |     |    -|       |           |       |-    |     |" << endl;
  cout << "            |     |_-___-___-___-|         |-___-___-___-_|     |" << endl;
  cout << "            |  o  ]              [    0    ]              [  o  |" << endl;
  cout << "            |     ]   o   o   o  [ _______ ]  o   o   o   [     | ----__________" << endl;
  cout << " _____----- |     ]              [ ||||||| ]              [     |" << endl;
  cout << "            |     ]              [ ||||||| ]              [     |" << endl;
  cout << "        _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_" << endl;
  cout << "       ( (__________------------_____________-------------_________) )" << endl;
 }
 else if (code == 1) {
  cout << "\n AAAHHHH!!!! A SHARK IS ATTACKING US! WE NEED TO SWIM FASTER!" << endl;
  cout << "                    ,-," << endl;
  cout << "                  ,' /" << endl;
  cout << "                ,'   (          _" << endl;
  cout << "         __...--'     `-....__,'(      _,-'/" << endl;
 cout << " _,---''''                     ````-._,'  ,'" << endl;
cout << ",'  o                                  `  <" << endl;
cout << "`.____  )))                       ...'  ' \'" << endl;
   cout << "`--..._        .   .__....----''''   `-. \'" << endl;
   cout << "       ```7--i-`. \\                    `-`" << endl;
   cout << "          `.(    `-.`." << endl;
   cout << "            `'      `'" << endl;
 }
 else if (code == 4) {
  cout << "\nLets play basketball!" << endl;
  cout << " ____________________" << endl;       
  cout << "|____________________|" << endl;         
  cout << " \\____|___|___|____ /" << endl;      
  cout << "  \\___|___|___|___ /" << endl;      
  cout << "   \\__|___|___|__ /" << endl;           
  cout << "    \\_|___|___|_ /" << endl;             
  cout << "    |_|___|___|_|" << endl;             
  cout << "    |_|___|___|_|" << endl;           
  cout << "    |_|___|___|_|" << endl;                                                                     

 }
 else if (code == 5) {
  cout << "\nThis burger is delicious!!" << endl;
  cout << "         _..----.._" << endl;       
  cout << "      .'     o    '." << endl;      
  cout << "     /   o       o  \\" << endl;     
  cout << "    |o        o     o|" << endl;     
  cout << "    /'-.._o     __.-'\\" << endl;     
  cout << "   \\      `````     /" << endl;     
  cout << "    |``--........--'|" << endl;      
  cout << "    \\              /" << endl;  
  cout << "      `'----------'`" << endl;  
 }
 else if (code == 6) {
  cout << "\nTime for bed..." << endl;
  cout << "        o           __...__     *" << endl;               
  cout << "            *   .--'    __.=-.             o" << endl;
  cout << "   |          ./     .-'" << endl;     
  cout << "  -O-        /      /" << endl;   
  cout << "   |        /    ''/               *" << endl;
  cout << "           |     (@)" << endl;     
  cout << "          |        \\                         ." << endl;
  cout << "          |         \\" << endl;
  cout << "      *   |       ___\\                  |" << endl;
  cout << "           |  .   /  `                 -O-" << endl;
  cout << "            \\ `~~\\                      |" << endl;
  cout << "       o     \\    \\            *" << endl;         
  cout << "              `\\   `-.__           ." << endl;  
  cout << "      .          `--._    `--'" << endl;
  cout << "                     `---~~`                *" << endl;
  cout << "          *                   o" << endl;
 }
}

#endif
