#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../State/Phys/BerserkerPhysState.h"
#include "../Attack/Phys/BerserkerPhysAttack.h"


class Berserker : public Unit {
public:
        Berserker(std::string title = "berserker", int hp = int(SetupHP::BERSERKER), int dmg = int(SetupDMG::BERSERKER));
        ~Berserker();
        
        
};

#endif // BERSERKER_H