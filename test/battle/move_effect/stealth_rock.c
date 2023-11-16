#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_STEALTH_ROCK].effect == EFFECT_STEALTH_ROCK);
}

SINGLE_BATTLE_TEST("Stealth Rock damage on switch in based on typing")
{
    u32 species, divisor;

    PARAMETRIZE { species = SPECIES_NORMAL_MARISA; divisor = 2; } // Fire / Flying
    PARAMETRIZE { species = SPECIES_NORMAL_RUMIA; divisor = 4; } // Flying
    PARAMETRIZE { species = SPECIES_SPEED_RUMIA; divisor = 8; } // Normal dmg
    PARAMETRIZE { species = SPECIES_GOLEM; divisor = 16; } // Ground not very effective
    PARAMETRIZE { species = SPECIES_STEELIX; divisor = 32; } // Ground/Steel not very effective

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_STEALTH_ROCK); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, player);
        // MESSAGE("2 sent out species!");
        HP_BAR(opponent, damage: maxHP / divisor);
    }
}
