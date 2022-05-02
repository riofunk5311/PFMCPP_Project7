#include "AttackItem.h"
#include "Utility.h"

AttackItem::~AttackItem() { }

void AttackItem::use(Character* character)
{
    useAttackItem(character, this);
}


