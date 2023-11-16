#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hyper Cutter prevents intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;

    GIVEN {
        PLAYER(SPECIES_DEFENSE_MEILING) { Ability(ABILITY_MAINTENANCE); }
        PLAYER(SPECIES_DEFENSE_MEILING) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HIGH_STRENGTH); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_TACKLE); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_HIGH_STRENGTH);
        MESSAGE("Foe Krabby's Hyper Cutter prevents Attack loss!");
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter prevents Attack stage reduction from moves")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
        MESSAGE("Foe Krabby's Hyper Cutter prevents Attack loss!");
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Attack reduction from burn")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
        MESSAGE("Foe Krabby was burned!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter is ignored by Mold Breaker")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_PINSIR) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MOLD_BREAKER);
        MESSAGE("Pinsir breaks the mold!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, player);
        MESSAGE("Foe Krabby's Attack fell!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
            MESSAGE("Foe Krabby's Hyper Cutter prevents Attack loss!");
        }
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Attack stage reduction from moves used by the user")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SUPERPOWER].effect == EFFECT_SUPERPOWER);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUPERPOWER); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUPERPOWER, opponent);
        MESSAGE("Foe Krabby's Attack fell!");
        MESSAGE("Foe Krabby's Defense fell!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Topsy-Turvy")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
        ASSUME(gBattleMoves[MOVE_TOPSY_TURVY].effect == EFFECT_TOPSY_TURVY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWORDS_DANCE); MOVE(player, MOVE_TOPSY_TURVY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, opponent);
        MESSAGE("Foe Krabby's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TOPSY_TURVY, player);
        MESSAGE("Foe Krabby's stat changes were all reversed!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 2);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent Spectral Thief from resetting positive Attack stage changes")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
        ASSUME(gBattleMoves[MOVE_SPECTRAL_THIEF].effect == EFFECT_SPECTRAL_THIEF);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWORDS_DANCE); MOVE(player, MOVE_SPECTRAL_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, opponent);
        MESSAGE("Foe Krabby's Attack sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, player);
        MESSAGE("Wobbuffet stole the target's boosted stats!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Hyper Cutter doesn't prevent receiving negative Attack stage changes from Baton Pass")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_GROWL].effect == EFFECT_ATTACK_DOWN);
        ASSUME(gBattleMoves[MOVE_BATON_PASS].effect == EFFECT_BATON_PASS);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_GROWL);
               MOVE(opponent, MOVE_BATON_PASS);
               SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GROWL, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, opponent);
        MESSAGE("2 sent out Krabby!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}
