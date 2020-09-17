#include "WizardMagicState.h"

WizardMagicState::WizardMagicState(Spellcaster* owner, int mp) : DefaultMagicState(owner, mp) {
    this->magicRole = wizard;
}
WizardMagicState::~WizardMagicState() {}