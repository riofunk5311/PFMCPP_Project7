#pragma once

#include "Character.h"

struct Dwarf : Character, Item
{
    Dwarf (std::string name, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;
    void use(Character* character) override;
private:
    const std::string name;
};

