#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "../State/Phys/DemonPhysState.h"
#include "../Attack/Phys/DemonPhysAttack.h"


class Demon : public Soldier {
public:
    Demon(std::string title = "demon", int hp = int(SetupHP::DEMON), int dmg = int(SetupDMG::DEMON));
    ~Demon();
};
 
#endif // DEMON_H