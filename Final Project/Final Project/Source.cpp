#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Dialogue.h"


char menu(char choice);

int main()
{
	char choice;

	Welcome w;
	w.welcome();
	
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

	
	



	return 0;
}