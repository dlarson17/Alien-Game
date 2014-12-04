//
//  Item.h
//  Sears
//
//  Created by Drew Sears on 12/4/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Sears_Header_h
#define Sears_Header_h
#include <string>
#include <vector>
using namespace std;

class Item{
private:
    
    string name;
    string description;
    
    Item();
    
    Item(string name, string description);
};

#endif
