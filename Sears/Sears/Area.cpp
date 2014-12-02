//
//  Area.cpp
//  Sears
//
//  Created by Drew Sears on 12/2/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include "Area.h"

Area ::Area (Dialogue dialogue, Inventory items, vector<Creature*> creatures)
{
   this-> dialogue = dialogue;
   this-> items = items;
    this -> creatures= creatures;
    
}

Area::Area()
{
    
}

void Area::search(Creature &player)
{
    cout << "You find:" << std::endl;
    
    this->items.print();
    player.inventory.merge(&(this->items));
    this->items.clear();
    
    return;
    
}