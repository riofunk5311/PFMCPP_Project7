#pragma once

#include "Character.h"
#include "Item.h"

struct DragonSlayer : Character, Item
{
    DragonSlayer (std::string name, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    void use(Character* character) override;
private:
    const std::string name;
};

