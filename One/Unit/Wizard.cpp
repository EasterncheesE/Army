#include "Wizard.h"

Wizard::Wizard(std::string title, int hp, int dmg, int mp) : Spellcaster(title, hp, dmg, mp) {
    this->_magicState = new WizardMagicState(this, mp);
    this->_magicAttack = new WizardMagicAttack(this, dmg);
    this->addSpell(new Fireball(100, 200));
    this->addSpell(new Heal(50, 100));
}

Wizard::~Wizard() {
    delete (this->_state);
    delete (this->_attack);
    delete (this->_magicState);
    delete (this->_magicAttack);
}