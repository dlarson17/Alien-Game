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

class Menu {
private: 
	string a, b, c, d;

public:
	char menu(char choice);
};

void Welcome::welcome() {
	string name; 
	cout << "Enter your rank and name" << endl << endl;
	getline(cin, name);
	cout << "Welcome " << name << " to Alien Vs. You. Let us begin!" << endl << endl;

	Sleep(1500);

	cout << "You wake up in an abandoned space station and you don't remember how or why you are there. Find the bridge to figure out what happened..." << endl;
}

char Menu::char menu(char choice) {
	do {
		cout << "1) Go Straight." << endl;
		cout << "2) Go Left." << endl;
		cout << "3) Go Right." << endl;
		cout << "4) Stay Put." << endl;
		cin >> choice;
		cout << endl << endl;
		if (choice > '4' || choice < '1'){
			cout << "That's not an option soldier!" << endl << endl;
		}

	} while (choice > '4' || choice < '1');
	return choice;
}



#endif