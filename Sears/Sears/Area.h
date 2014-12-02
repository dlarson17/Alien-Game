//
//  Area.h
//  Sears
//
//  Created by Drew Sears on 12/2/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Sears_Area_h
#define Sears_Area_h
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Area{
public:
    Dialogue dialogue;//dialogue class
    
    Inventory items;//inventory class
    
    vector<Creature*> creatures;//vector for creatures
    
    Area (Dialogue dialogue, Inventory items, vector<Creature*> creatures);//constructor of all classes in the class
    
    Area();//empty constructor for Area
    
    void search (Creature& player);
    
    
};


#endif
