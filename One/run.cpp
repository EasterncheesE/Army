#include "Linker.h"

int main() {
    srand (time(NULL));
    Rogue* rogue = new Rogue();
    Soldier* soldier = new Soldier();
    Necromancer* necromancer = new Necromancer();
    Vampire* vampire = new Vampire();
    Berserker* berserk = new Berserker();
    Werewolf* werewolf = new Werewolf();
    Healer* healer = new Healer();
    Priest* priest = new Priest();
    Warlock* warlock = new Warlock();
    Demon* demon = new Demon();
    Wizard* wizard = new Wizard();
    
    std::cout << rogue << std::endl;
    std::cout << soldier << std::endl;
    std::cout << warlock << std::endl;
    // std::cout << healer << std::endl;
    
    
    // warlock->addDemon();
    // warlock->addDemon();
    // warlock->getDemonList();
    
    // for ( ; werewolf->getHP() > 0 && wizard->getHP() > 0; ) {
    //     werewolf->attack(wizard);
    //     wizard->attack(werewolf);
    // }
    
    // std::cout << werewolf << std::endl;
    // std::cout << wizard << std::endl;
    
    
    
    return 0;
}