#ifndef WIZARD_ATTACK_H
#define WIZARD_ATTACK_H

#include "DefaultMagicAttack.h"

class WizardMagicAttack : public DefaultMagicAttack {
public:
    WizardMagicAttack(Spellcaster* owner, int dmg);
    ~WizardMagicAttack();
};

#endif // WIZARD_ATTACK_H