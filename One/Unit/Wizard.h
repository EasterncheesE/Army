#ifndef WIZARD_H
#define WIZARD_H

#include "Spellcaster.h"
#include "../State/Magic/WizardMagicState.h"
#include "../Attack/Magic/WizardMagicAttack.h"
#include "../Spell/Heal.h"
#include "../Spell/Fireball.h"

class Wizard : public Spellcaster {
public:
    Wizard(std::string title = "wizard", int hp = int(SetupHP::WIZARD), int dmg = int(SetupDMG::WIZARD), int mp = int(SetupMP::WIZARD));
    ~Wizard();
};

#endif // WIZARD_H

