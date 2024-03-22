#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTouhou8[] =
{
#endif

    [SPECIES_CHIBI_REISEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 60,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_BLAZER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_SNIPER },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("CReisen"),
        .cryId = CRY_REISEN,
        .natDexNum = NATIONAL_DEX_CHIBI_REISEN,
        .categoryName = _("Dragon"),
        .height = 12,
        .weight = 250,
        .description = COMPOUND_STRING(
            "The poisonous barbs all over its body are\n"
            "highly valued as ingredients for making\n"
            "traditional herbal medicine. It shows no\n"
            "mercy to anything approaching its nest."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CReisen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CReisen,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_CReisen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_CReisen,
        .shinyPalette = gMonShinyPalette_CReisen,
        .iconSprite = gMonIcon_CReisen,
        .iconPalIndex = 1,
        FOOTPRINT(CReisen)
        .levelUpLearnset = sCReisenLevelUpLearnset,
        .teachableLearnset = sCReisenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_NORMAL_REISEN},
                                {EVO_HEART, ITEM_GUARD_HEART, SPECIES_DEFENSE_REISEN},
                                {EVO_HEART, ITEM_TECH_HEART, SPECIES_TECH_REISEN}),
    },

    [SPECIES_NORMAL_REISEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_SNIPER },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("Reisen"),
        .cryId = CRY_REISEN,
        .natDexNum = NATIONAL_DEX_NORMAL_REISEN,
        .categoryName = _("Goldfish"),
        .height = 6,
        .weight = 150,
        .description = COMPOUND_STRING(
            "In the springtime, schools of Goldeen\n"
            "can be seen swimming up falls and rivers.\n"
            "It metes out staggering damage with its\n"
            "single horn."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Reisen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Reisen,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Reisen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Reisen,
        .shinyPalette = gMonShinyPalette_Reisen,
        .iconSprite = gMonIcon_Reisen,
        .iconPalIndex = 1,
        FOOTPRINT(Reisen)
        .levelUpLearnset = sReisenLevelUpLearnset,
        .teachableLearnset = sReisenTeachableLearnset,
    },

    [SPECIES_DEFENSE_REISEN] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_SNIPER },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("DReisen"),
        .cryId = CRY_REISEN,
        .natDexNum = NATIONAL_DEX_DEFENSE_REISEN,
        .categoryName = _("Goldfish"),
        .height = 13,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It punches holes in boulders on stream-\n"
            "beds. This is a clever innovation that\n"
            "prevents its eggs from being attacked or\n"
            "washed away by the current."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DReisen,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DReisen,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_DReisen,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_DReisen,
        .shinyPalette = gMonShinyPalette_DReisen,
        .iconSprite = gMonIcon_DReisen,
        .iconPalIndex = 1,
        FOOTPRINT(DReisen)
        .levelUpLearnset = sDReisenLevelUpLearnset,
        .teachableLearnset = sDReisenTeachableLearnset,
    },

    [SPECIES_TECH_REISEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = 212,
        .evYield_Defense = 1,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_MERCILESS },
        .sourceGame = SOURCE_IN,
        .noFlip = TRUE,
        .speciesName = _("TReisen"),
        .cryId = CRY_REISEN,
        .natDexNum = NATIONAL_DEX_TECH_REISEN,
        .categoryName = _("Star Shape"),
        .height = 8,
        .weight = 345,
        .description = COMPOUND_STRING(
            "It gathers with others in the night and\n"
            "makes its red core glow on and off with\n"
            "the twinkling stars. It can regenerate\n"
            "limbs if they are severed from its body."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TReisen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TReisen,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_TReisen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_TReisen,
        .shinyPalette = gMonShinyPalette_TReisen,
        .iconSprite = gMonIcon_TReisen,
        .iconPalIndex = 1,
        FOOTPRINT(TReisen)
        .levelUpLearnset = sTReisenLevelUpLearnset,
        .teachableLearnset = sTReisenTeachableLearnset,
    },


#ifdef __INTELLISENSE__
};
#endif
