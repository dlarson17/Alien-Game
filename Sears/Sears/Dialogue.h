//
//  Dialogue.h
//  Sears
//
//  Created by Drew Sears on 12/2/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Sears_Dialogue_h
#define Sears_Dialogue_h
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Dialogue{
private:
    
    string description;
    
    vector <string> choices;
    
public:
    
    int activate();
    
    Dialogue(string description, vector<string>choices);
    
    Dialogue();
    
    
    
};
#endif
