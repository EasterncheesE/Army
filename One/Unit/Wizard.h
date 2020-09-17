#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"
#include "../State/Magic/WizardMagicState.h"
#include "../Attack/Magic/WizardMagicAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Wizard : public Spellcaster {
public:
    Wizard(std::string title, int hp, int dmg, int mp);
    ~Wizard();
};

#endif // WIZARD_H

