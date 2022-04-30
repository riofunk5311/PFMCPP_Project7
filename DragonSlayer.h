#pragma once

#include "Character.h"

struct DragonSlayer : public Character
{
    DragonSlayer (std::string name, int hp, int armor);

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};

