#ifndef MENUS_H
#define MENUS_H


#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

class Menus {
public:
	void YN();
	void leftRight();
	void fightRun();
	void doorLift();
	void liftRight();
	void pods();
};

void Menus::YN() {
	cout << "1. Yes " << endl;
	cout << "2. No " << endl;
}
void Menus::leftRight(){
	cout << "1. Left " << endl;
	cout << "2. Right" << endl;
}
void Menus::fightRun(){
	cout << "1. Fight" << endl;
	cout << "2. Run" << endl;
}
void Menus::doorLift(){
	cout << "1. The far side door" << endl;
	cout << "2. The lift" << endl;
}
void Menus::liftRight(){
	cout << "The lift" << endl;
	cout << "Head right" << endl;

}
void Menus::pods(){
	cout << "1. Pod 1" << endl;
	cout << "2. Pod 2" << endl;
	cout << "3. Pod 3" << endl;
}








#endif