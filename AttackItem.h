#pragma once

#include "Item.h"

struct AttackItem : Item
{
    ~AttackItem() override;
    AttackItem() : Item("attackItem", 10) { }
    
    void use(Character* character) override;
};


