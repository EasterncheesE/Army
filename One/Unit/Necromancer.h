#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "Spellcaster.h"
#include "../State/Magic/NecromancerMagicState.h"
#include "../Attack/Magic/NecromancerMagicAttack.h"
#include "../Spell/Fireball.h"
#include "../Spell/Heal.h"



class NecromancerMagicState;
class NecromancerMagicAttack;

class Necromancer : public Spellcaster {
public:
    Necromancer(std::string title = "necromancer", int hp = int(SetupHP::NECROMANCER), int dmg = int(SetupDMG::NECROMANCER), int mp = int(SetupMP::NECROMANCER));
    ~Necromancer();

    void removeObservable(Observable* target);
};

#endif // NECROMANCER_H