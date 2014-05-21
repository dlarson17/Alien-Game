//
//  main.cpp
//  PointersAndClasses
//
//  Created by Drew Sears on 5/20/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Address {
public:
    string hotel;
    string city;
    string country;
    
    void* operator new(size_t);
    
    
};


int main()
{
    Address * first;
    Address * second;
    Address * third;
    Address * last;
    
    
    
    Address *visit= first;
    
    for (int i=0; i<4; i++) {
        
    
    while (visit !=NULL) {
        cout << "Hotel" <<visit ->hotel << endl;
        cout << "City" << visit ->city << endl;
        cout << "Country" << visit ->country << endl;
        
    }

    }
    return 0;
}

