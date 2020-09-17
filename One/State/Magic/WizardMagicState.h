#ifndef WIZARD_STATE_H
#define WIZARD_STATE_H

#include "DefaultMagicState.h"

class WizardMagicState : public DefaultMagicState {
public:
    WizardMagicState(Spellcaster* owner, int mp);
    ~WizardMagicState();
};

#endif // WIZARD_STATE_H