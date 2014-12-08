//
//  main.cpp
//  Sears
//
//  Created by Drew Sears on 12/2/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//
// 

#include <iostream>
using namespace std;
void death();
void stay();
void forward();
int main() {
    
    int user;
    cout << "Welcome to Alien vs You" << endl;
    cout << "Press 1: to stay put, 2 to move";
    if (user == '1') {
        death();
    }
    if (user== '2')
        forward();
   
}

void death()
{
    cout << "You die" << endl;
}

void stay()
{
    cout << "You stay" << endl;
    death();
}

void forward()
{
    cout << "You move forward";
}
