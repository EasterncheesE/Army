#ifndef HEALER_H
#define HEALER_H

#include "Spellcaster.h"
#include "../State/Magic/HealerMagicState.h"
#include "../Attack/Magic/HealerMagicAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Healer : public Spellcaster {
public:
    Healer(std::string title = "healer", int hp = int(SetupHP::HEALER), int dmg = int(SetupDMG::HEALER), int mp = int(SetupMP::HEALER));
    ~Healer();
};

#endif // HEALER_H

