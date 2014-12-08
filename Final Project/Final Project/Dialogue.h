#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <string>
#include <vector>
#include <iostream>
#include <Windows.h>

using namespace std;

class Welcome {
private:
	string name;

public:
	void welcome();
	


};

class Dialogue {
private:
	string name;
public:
	void firstChoiceRight();
	void doorOpens();
	void dontOpenDoor();
	void findBlaster();
	void yesBlaster();
	void noBlaster();
	void goRightPairedWithPowerLift();
	void powerLift();
	void explanation();
};

void Welcome::welcome() {
	string name; 
	cout << "Enter your rank and name" << endl << endl;
	getline(cin, name);
	cout << "Welcome " << name << " to Alien Vs. You. Let us begin!" << endl << endl;

	Sleep(1500);

	cout << "You wake up in an abandoned space station and you don't remember how or why you are there. Find the bridge to figure out what happened..." << endl;
}

void Dialogue::firstChoiceRight() {
	cout << "You follow the passageway and find a door. Do you enter?" << endl;
}

void Dialogue::doorOpens() {
	cout << "You chose to open the door and you have discovered the armory. There is a functioning battle suit. Suit up soldier." << endl;
}

void Dialogue::dontOpenDoor() {
	cout << "You turn around and head back to where you started." << endl;
}
void Dialogue::findBlaster() {
	cout << "As you wonder down the corridor, you find a fallen comrade and it appears the blaster is still in working condition." << endl;
	cout << "Do you pick it up?" << endl;
}
void Dialogue::yesBlaster() {
	cout << "You picked up the blaster and continue your search. Rounding the next corner you find yourself face to face with the alien!" << endl;
	cout << "What do you do?" << endl;
}
void Dialogue::noBlaster() {
	cout << "You paid your respects and continue your search, where you come to an intersection." << endl;
	cout << "There is a power lift to your left and another corridor further to your right. Where will you go?" << endl;
}
void Dialogue::goRightPairedWithPowerLift() {
	cout << "Further down this pathway is a door which you procede to open..." << endl;
}
void Dialogue::powerLift() {
	cout << "You enter the power lift and discover there is still power. You begin your ascent to the bridge and to answers..." << endl;
	Sleep(1500);

	cout << "The doors open to the bridge and you see a scene of a horrendous massacre but you must continue, to find out what happened..." << endl;
	cout << "Upon further investigation you see the control deck and the main computer for you procede to access..." << endl;

}
void Dialogue::explanation(){
	cout << "The final entry of the captain's log:" << endl << endl;
	cout << "...We have tried all we can, it seems our weapons do nothing more than make the beast angry." << endl;
	cout << "How did this happen? Our mission was discover resources for our planet, to accelarate it into the stars, yet I fear we found its downfall." << endl;
	cout << "I have one more idea before I do the unthinkable. I sent " << name << "down to the armory for Weapon 726, our last hope." << endl;
	cout << "If it fails I have set the station to destruct in 30 minutes, I will not be cause for the extinction of the human race..." << endl;
	cout << "Admiral Andrew Nosral of the 101st Federal Fleet." << endl << endl;
	Sleep(1200);
	cout << "You do some more searching and discover that the timer was started and you only 10 minutes to get off the ship." << endl;
	cout << "New Objective: Find the escape pods to get off the station before it explodes.." << endl;

}

#endif