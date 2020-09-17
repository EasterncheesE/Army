#ifndef SETUP_H
#define SETUP_H

enum class SetupHP {
    BERSERKER = 1250,
    DEMON = 500,
    HEALER = 700,
    NECROMANCER = 800,
    PRIEST = 800,
    ROGUE = 800,
    SOLDIER = 1000,
    VAMPIRE = 1000,
    WARLOCK = 800,
    WEREWOLF = 1000,
    WIZARD = 800
};

enum class SetupDMG {
    BERSERKER = 100,
    DEMON = 50,
    HEALER = 50,
    NECROMANCER = 50,
    PRIEST = 50,
    ROGUE = 150,
    SOLDIER = 100,
    VAMPIRE = 125,
    WARLOCK = 75,
    WEREWOLF = 125,
    WIZARD = 50,
};

enum class SetupMP {
    HEALER = 700,
    NECROMANCER = 700,
    PRIEST = 500,
    WARLOCK = 700,
    WIZARD = 1000
};

#endif // SETUP_H