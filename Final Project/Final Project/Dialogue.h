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
	char menu(char menu);

};

void Welcome::welcome() {
	string name; 
	cout << "Enter your rank and name" << endl << endl;
	getline(cin, name);
	cout << "Welcome " << name << " to Alien Vs. You. Let us begin!" << endl;

	Sleep(1500);

	cout << "You wake up in an abandoned space station and you don't remember how or why you are there. Find the bridge to figure out what happened..." << endl;
}

#endif
