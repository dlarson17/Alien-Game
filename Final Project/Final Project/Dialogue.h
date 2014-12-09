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
	void newObjective();
	void doorOnFarSide();
	void forkInPath();
	void soldier();
	void soldierTwo();
	void forkInPathTwo();
	void rightFork();

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
	string choice;
	cout << "You follow the passageway and find a door. Do you enter? Yes or No" << endl;
	getline(cin, choice);
}
void Dialogue::findBlaster() {
	string choice;
	cout << "As you wonder down the corridor, you find a fallen comrade and it appears the blaster is still in working condition." << endl;
	cout << "Do you pick it up?" << endl;
	getline(cin, choice);
}
void Dialogue::yesBlaster() {
	string choice;
	cout << "You picked up the blaster and continue your search. Rounding the next corner you find yourself face to face with the alien!" << endl;
	cout << "What do you do?" << endl;
	getline(cin, choice);
}
void Dialogue::noBlaster() {
	string choice;
	cout << "You paid your respects and continue your search, where you come to an intersection." << endl;
	cout << "There is a power lift to your left and another corridor further to your right. Where will you go?" << endl;
	getline(cin, choice);
}
void Dialogue::goRightPairedWithPowerLift() {
	string choice;
	cout << "Further down this pathway is a door which you procede to open..." << endl;
	getline(cin, choice);
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

void Dialogue::newObjective(){
	string choice;
	cout << "There are two ways to head to the hangar bay, the lift or the door on the far side. Which do you choose?" << endl; 
	getline(cin, choice);
}
void Dialogue::doorOnFarSide(){
	string choice;
	cout << "You walk to the door and open it to find the alien standing at the end of the hallway. What do you do?" << endl;
	getline(cin, choice);
}
void Dialogue::forkInPath(){
	string choice;
	cout << "You chose to retreat and try your luck at finding the escape pods before the alien gets you. You reach a fork in the path." << endl;
	cout << "Which way?" << endl;
	getline(cin, choice);
}
void Dialogue::soldier(){
	string choice;
	cout << "You are running down the corridor and spot movement. A fellow soldier, STILL ALIVE. He is badly injured, but alive. What do you do?" << endl;
	getline(cin, choice);
}
void Dialogue::soldierTwo(){
	cout << "You bring the soldier with you but your speed is greatly decreased. The alien approaches rapidly..." << endl;
	cout << "He gestures to his holster, Weapon 726, he never got it to you and in a last ditch effort you fire directly at the alien... " << endl;

	Sleep(1700);
	cout << "The alien gets blasted back and retreats! You stopped him for now..." << endl;

}
void Dialogue::forkInPathTwo(){
	string choice;
	cout << "You reach another fork in the pathway which way to you go?" << endl;
	getline(cin, choice);
}
void Dialogue::rightFork(){
	string choice;
	cout << "You went right and found the hangar bay! There are three escapes, which one do you take?" << endl;
	getline(cin, choice);
}
#endif