#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Swarm boosts Bug-type moves in a pinch", s16 damage)
{
    u16 hp;
    PARAMETRIZE { hp = 99; }
    PARAMETRIZE { hp = 33; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUG_BITE].type == TYPE_HEART);
        ASSUME(gMovesInfo[MOVE_BUG_BITE].power == 60);
        ASSUME(gMovesInfo[MOVE_BUG_BITE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gSpeciesInfo[SPECIES_DEFENSE_MINORIKO].types[0] == TYPE_HEART);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_YUUGI].types[0] == TYPE_REASON);
        ASSUME(gSpeciesInfo[SPECIES_CHIBI_YUUGI].types[1] == TYPE_REASON);
        PLAYER(SPECIES_DEFENSE_MINORIKO) { Ability(ABILITY_INNER_POWER); MaxHP(99); HP(hp); Attack(45); }
        OPPONENT(SPECIES_CHIBI_YUUGI) { Defense(121); }
    } WHEN {
        TURN { MOVE(player, MOVE_BUG_BITE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // Due to numerics related to rounding on each applied multiplier,
        // the 50% move power increase doesn't manifest as a 50% damage increase, but as a 44% damage increase in this case.
        // Values obtained from https://calc.pokemonshowdown.com (Neutral nature and 0 IVs on both sides)
        EXPECT_EQ(results[0].damage, 50);
        EXPECT_EQ(results[1].damage, 72);
    }
}
