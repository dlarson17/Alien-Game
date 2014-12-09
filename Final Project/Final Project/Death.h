#ifndef DEATH_H
#define DEATH_H


#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

class Death {
public:
	void outerSpaceDeath();
	void liftBreaksDeath();
	void podExplodesDeath();
};

class AlienDeath {
public:
	void alienDeadEndDeath();//2
	void alienStayPutDeath();//1
	void alienTripDeath(); //1
	void alienFightDeath(); //2
	void alienPodDeath(); //1
	void alienForkLeftDeath(); //1
	void alienCeilingDeath();
	void alienRunNotFightDeath();
};

void Death::outerSpaceDeath() {
	cout << "This section of the ship has been blown to bits, you were sucked into the void of outerspace..." << endl;
	cout << "and you unfortunately perished." << endl;

}

void Death::liftBreaksDeath() {
	cout << "You reenter lift, hear a loud bang and the lift plunges down into the depths of the ship... " << endl;
	cout << "and you unfortunately perished." << endl;
}
void Death::podExplodesDeath() {
	cout << "You enter the pod and as soon as the primary engines ignite, the pod is engulfed in a ball of flame..." << endl;
	cout << "and you unfortunately perished." << endl;

		
}

void AlienDeath::alienRunNotFightDeath(){
	cout << "You attempt to run away firing shots as you go but alas the blaster overheats and explodes in your hand..." << endl;
	cout << "and you unfortunately perished." << endl;
}


void AlienDeath::alienCeilingDeath(){
	cout << "You go right and begin to head down the corridor and all of the sudden the ceiling crashes in as the alien crushes your spine..." << endl;
	cout << "and you unfortunately perished." << endl;
}


void AlienDeath::alienDeadEndDeath(){
	cout << "You venture down the corridor yet it leads to a dead end, so you turn around and... " << endl;
	cout << "you feel a searing pain as your entrails are ripped from your body and you unfortunately perished." << endl;
}
	
void AlienDeath::alienStayPutDeath(){
	cout << "You chose to stay put and out of no where, the alien drops from the ceiling snapping your spine..." << endl;
	cout << "and unfortunately you perished." << endl;
}

void AlienDeath::alienTripDeath(){
	cout << "You decided to not save your fallen comrade and run past. There is a broken grate on the ground..." << endl;
	cout << "the grate made you stumble, trip and fall, and the alien proceded to rip your head off... " << endl;
	cout << "and you unfortunately perished." << endl;
}

void AlienDeath::alienFightDeath(){
	cout << "A soldier does not go down without a fight, yet this was not the wisest choice. You chose to fight the alien..." << endl;
	cout << "you managed to get in a few good hits, but alas, your body was torn limb from limb and you unfortunately perished." << endl;
}

void AlienDeath::alienPodDeath(){
	cout << "You enter the pod and began primary ignition yet nothing happens. As you try to escape to another pod the alien lands on the hull..." << endl;
	cout << "the alien bursts through the front and procedes to tear off the lower half of your body and you unfortunately perished." << endl;
}

void AlienDeath::alienForkLeftDeath(){
	cout << "You chose to go right and just as you make it half way down the corridor, the alien bursts through the wall..." << endl;
	cout << "try as you might, the alien overwhelms you and every bone in your body was broken, and unfortunately you perished." << endl;
}
#endif
