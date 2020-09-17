#include "Linker.h"

int main() {
    srand (time(NULL));
    Rogue* rogue = new Rogue("Rogue", 5000, 50);
    Soldier* soldier = new Soldier("Soldier", 1000, 100);
    Spellcaster* spellcaster = new Spellcaster("Spellcaster", 500, 25, 500);
    Necromancer* necromancer = new Necromancer("Necromancer", 500, 25, 500);
    Vampire* vampire = new Vampire("Vampire", 750, 150);
    Berserker* berserk = new Berserker("Berserker", 1000, 100);
    Werewolf* werewolf = new Werewolf("Werewolf", 1000, 100);
    Healer* healer = new Healer("Healer", 1000, 25, 500);
    Priest* priest = new Priest("Priest", 1000, 50, 500);
    Warlock* warlock = new Warlock("Warlock", 1000, 50, 500);
    Demon* demon = new Demon("Demon", 500, 50);
    Wizard* wizard = new Wizard("Wizard", 500, 25, 500);
    
    // std::cout << demon << std::endl;
    // std::cout << warlock << std::endl;
    // std::cout << healer << std::endl;
    
    
    // warlock->addDemon();
    // warlock->addDemon();
    // warlock->getDemonList();
    
    for ( ; werewolf->getHP() > 0 && wizard->getHP() > 0; ) {
        werewolf->attack(wizard);
        wizard->attack(werewolf);
    }
    
    std::cout << werewolf << std::endl;
    std::cout << wizard << std::endl;
    
    
    
    return 0;
}