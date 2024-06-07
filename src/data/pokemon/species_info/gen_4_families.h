#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen4[] =
{
#endif

#if P_FAMILY_TURTWIG
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    [SPECIES_CHIBI_ORANGE] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 113,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Staravia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STARAVIA,
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Recognizing their own weakness, they\n"
            "maintain huge flocks. Fierce scuffles\n"
            "break out between various flocks.\n"
            "When alone, a Staravia cries noisily."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Staravia,
        .frontPicFemale = gMonFrontPic_StaraviaF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Staravia,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Staravia,
        .backPicFemale = gMonBackPic_StaraviaF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Staravia,
        .shinyPalette = gMonShinyPalette_Staravia,
        .iconSprite = gMonIcon_Staravia,
        .iconPalIndex = 0,
        FOOTPRINT(Staravia)
        FOLLOWER(
            sPicTable_Staravia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Staravia,
            gShinyFollowerPalette_Staravia
        )
        .levelUpLearnset = sStaraviaLevelUpLearnset,
        .teachableLearnset = sStaraviaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_NORMAL_ORANGE}),
    },

    [SPECIES_NORMAL_ORANGE] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 60 : 50,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 243,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 218,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 214,
    #else
        .expYield = 172,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Staraptor"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .description = COMPOUND_STRING(
            "When Staravia evolve into Staraptor,\n"
            "they leave the flock to live alone. It has\n"
            "a savage nature. It will courageously\n"
            "challenge foes that are much larger."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Staraptor,
        .frontPicFemale = gMonFrontPic_StaraptorF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Staraptor,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Staraptor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Staraptor,
        .shinyPalette = gMonShinyPalette_Staraptor,
        .iconSprite = gMonIcon_Staraptor,
        .iconPalIndex = 0,
        FOOTPRINT(Staraptor)
        FOLLOWER(
            sPicTable_Staraptor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Staraptor,
            gShinyFollowerPalette_Staraptor
        )
        .levelUpLearnset = sStaraptorLevelUpLearnset,
        .teachableLearnset = sStaraptorTeachableLearnset,
    },
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
    [SPECIES_PLACEHOLD_ORANGE] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 31,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Bidoof"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BIDOOF,
        .categoryName = _("Plump Mouse"),
        .height = 5,
        .weight = 200,
        .description = COMPOUND_STRING(
            "A comparison revealed that Bidoof's front\n"
            "teeth grow at the same rate as Rattata's.\n"
            "It constantly gnaws on logs and rocks to\n"
            "whittle down its front teeth."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bidoof,
        .frontPicFemale = gMonFrontPic_BidoofF,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bidoof,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bidoof,
        .backPicFemale = gMonBackPic_BidoofF,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bidoof,
        .shinyPalette = gMonShinyPalette_Bidoof,
        .iconSprite = gMonIcon_Bidoof,
        .iconPalIndex = 2,
        FOOTPRINT(Bidoof)
        FOLLOWER(
            sPicTable_Bidoof,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Bidoof,
            gShinyFollowerPalette_Bidoof
        )
        .levelUpLearnset = sBidoofLevelUpLearnset,
        .teachableLearnset = sBidoofTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_CHIBI_KURUMI}),
    },

    [SPECIES_CHIBI_KURUMI] =
    {
        .baseHP        = 79,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 71,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_WATER),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 116,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Bibarel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BIBAREL,
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It makes its nest by damming streams\n"
            "with bark and mud. A river dammed by\n"
            "Bibarel will never overflow its banks,\n"
            "which is appreciated by people nearby."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bibarel,
        .frontPicFemale = gMonFrontPic_BibarelF,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Bibarel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Bibarel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Bibarel,
        .shinyPalette = gMonShinyPalette_Bibarel,
        .iconSprite = gMonIcon_Bibarel,
        .iconPalIndex = 2,
        FOOTPRINT(Bibarel)
        FOLLOWER(
            sPicTable_Bibarel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Bibarel,
            gShinyFollowerPalette_Bibarel
        )
        .levelUpLearnset = sBibarelLevelUpLearnset,
        .teachableLearnset = sBibarelTeachableLearnset,
    },
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
    [SPECIES_NORMAL_KURUMI] =
    {
        .baseHP        = 37,
        .baseAttack    = 25,
        .baseDefense   = 41,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 39 : 54,
        .evYield_Defense = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_RUN_AWAY },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Kricketot"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KRICKETOT,
        .categoryName = _("Cricket"),
        .height = 3,
        .weight = 22,
        .description = COMPOUND_STRING(
            "It shakes its head back to front,\n"
            "causing its antennae to hit each other\n"
            "and sound like a xylophone.\n"
            "These sounds are fall hallmarks."),
        .pokemonScale = 530,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kricketot,
        .frontPicFemale = gMonFrontPic_KricketotF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kricketot,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kricketot,
        .backPicFemale = gMonBackPic_KricketotF,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kricketot,
        .shinyPalette = gMonShinyPalette_Kricketot,
        .iconSprite = gMonIcon_Kricketot,
        .iconPalIndex = 2,
        FOOTPRINT(Kricketot)
        FOLLOWER(
            sPicTable_Kricketot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Kricketot,
            gShinyFollowerPalette_Kricketot
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sKricketotLevelUpLearnset,
        .teachableLearnset = sKricketotTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_PLACEHOLD_KURUMI}),
    },

    [SPECIES_PLACEHOLD_KURUMI] =
    {
        .baseHP        = 77,
        .baseAttack    = 85,
        .baseDefense   = 51,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 134 : 159,
        .evYield_Attack = 2,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INNER_POWER, ABILITY_NONE, ABILITY_TECHNICIAN },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Kricketune"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_KRICKETUNE,
        .categoryName = _("Cricket"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It signals its emotions with its melodies.\n"
            "There is a village that hosts a contest\n"
            "based on the amazingly variable cries\n"
            "of this Pokémon."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kricketune,
        .frontPicFemale = gMonFrontPic_KricketuneF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Kricketune,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Kricketune,
        .backPicFemale = gMonBackPic_KricketuneF,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Kricketune,
        .shinyPalette = gMonShinyPalette_Kricketune,
        .iconSprite = gMonIcon_Kricketune,
        .iconPalIndex = 2,
        FOOTPRINT(Kricketune)
        FOLLOWER(
            sPicTable_Kricketune,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Kricketune,
            gShinyFollowerPalette_Kricketune
        )
        .levelUpLearnset = sKricketuneLevelUpLearnset,
        .teachableLearnset = sKricketuneTeachableLearnset,
    },
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
    [SPECIES_CHIBI_ELLY] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 34,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 34,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Shinx"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHINX,
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It rapidly contracts and relaxes its\n"
            "muscles to generate electricity. Its\n"
            "body shines if endangered. It flees\n"
            "while the foe is momentarily blinded."),
        .pokemonScale = 432,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shinx,
        .frontPicFemale = gMonFrontPic_ShinxF,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shinx,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shinx,
        .backPicFemale = gMonBackPic_ShinxF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Shinx,
        .shinyPalette = gMonShinyPalette_Shinx,
        .iconSprite = gMonIcon_Shinx,
        .iconPalIndex = 0,
        FOOTPRINT(Shinx)
        FOLLOWER(
            sPicTable_Shinx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Shinx,
            gShinyFollowerPalette_Shinx
        )
        .levelUpLearnset = sShinxLevelUpLearnset,
        .teachableLearnset = sShinxTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_NORMAL_ELLY}),
    },

    [SPECIES_NORMAL_ELLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 49,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 127 : 117,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Luxio"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUXIO,
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Strong electricity courses through the\n"
            "tips of its sharp claws. A light scratch\n"
            "has enough amperage to cause fainting\n"
            "in foes."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luxio,
        .frontPicFemale = gMonFrontPic_LuxioF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Luxio,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Luxio,
        .backPicFemale = gMonBackPic_LuxioF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Luxio,
        .shinyPalette = gMonShinyPalette_Luxio,
        .iconSprite = gMonIcon_Luxio,
        .iconPalIndex = 0,
        FOOTPRINT(Luxio)
        FOLLOWER(
            sPicTable_Luxio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Luxio,
            gShinyFollowerPalette_Luxio
        )
        .levelUpLearnset = sLuxioLevelUpLearnset,
        .teachableLearnset = sLuxioTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PLACEHOLD_ELLY}),
    },

    [SPECIES_PLACEHOLD_ELLY] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 79,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 79,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 262,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 235,
    #else
        .expYield = 194,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Luxray"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .description = COMPOUND_STRING(
            "It has eyes which can see through\n"
            "anything. Luxray's ability to see\n"
            "through objects comes in handy when\n"
            "it's scouting for danger."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luxray,
        .frontPicFemale = gMonFrontPic_LuxrayF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Luxray,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Luxray,
        .backPicFemale = gMonBackPic_LuxrayF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Luxray,
        .shinyPalette = gMonShinyPalette_Luxray,
        .iconSprite = gMonIcon_Luxray,
        .iconPalIndex = 0,
        FOOTPRINT(Luxray)
        FOLLOWER(
            sPicTable_Luxray,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Luxray,
            gShinyFollowerPalette_Luxray
        )
        .levelUpLearnset = sLuxrayLevelUpLearnset,
        .teachableLearnset = sLuxrayTeachableLearnset,
    },
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
    [SPECIES_ATTACK_KAZAMI] =
    {
        .baseHP        = 67,
        .baseAttack    = 125,
        .baseDefense   = 40,
        .baseSpeed     = 58,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BEAST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 99,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Cranidos"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CRANIDOS,
        .categoryName = _("Head Butt"),
        .height = 9,
        .weight = 315,
        .description = COMPOUND_STRING(
            "A lifelong jungle dweller from 100 million\n"
            "years ago, its skull is as hard as iron. \n"
            "It would snap obstructing trees with\n"
            "headbutts."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cranidos,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Cranidos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cranidos,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Cranidos,
        .shinyPalette = gMonShinyPalette_Cranidos,
        .iconSprite = gMonIcon_Cranidos,
        .iconPalIndex = 0,
        FOOTPRINT(Cranidos)
        FOLLOWER(
            sPicTable_Cranidos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Cranidos,
            gShinyFollowerPalette_Cranidos
        )
        .levelUpLearnset = sCranidosLevelUpLearnset,
        .teachableLearnset = sCranidosTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CHIBI_MUGETSU}),
    },

    [SPECIES_CHIBI_MUGETSU] =
    {
        .baseHP        = 97,
        .baseAttack    = 165,
        .baseDefense   = 60,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BEAST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Rampardos"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RAMPARDOS,
        .categoryName = _("Head Butt"),
        .height = 16,
        .weight = 1025,
        .description = COMPOUND_STRING(
            "The result of repeated headbutts\n"
            "is a skull grown thick and hard.\n"
            "However, its brain has shrunk in size\n"
            "compared with Cranidos's."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Rampardos,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rampardos,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rampardos,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Rampardos,
        .shinyPalette = gMonShinyPalette_Rampardos,
        .iconSprite = gMonIcon_Rampardos,
        .iconPalIndex = 0,
        FOOTPRINT(Rampardos)
        FOLLOWER(
            sPicTable_Rampardos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Rampardos,
            gShinyFollowerPalette_Rampardos
        )
        .levelUpLearnset = sRampardosLevelUpLearnset,
        .teachableLearnset = sRampardosTeachableLearnset,
    },
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
    [SPECIES_NORMAL_MUGETSU] =
    {
        .baseHP        = 30,
        .baseAttack    = 42,
        .baseDefense   = 118,
        .baseSpeed     = 30,
        .baseSpAttack  = 42,
        .baseSpDefense = 88,
        .types = MON_TYPES(TYPE_BEAST, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 99,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Shieldon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHIELDON,
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .description = COMPOUND_STRING(
            "This Pokémon lived in primeval jungles.\n"
            "Few enemies would have been willing to\n"
            "square off against its heavily armored\n"
            "face, so it's thought."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shieldon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Shieldon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Shieldon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Shieldon,
        .shinyPalette = gMonShinyPalette_Shieldon,
        .iconSprite = gMonIcon_Shieldon,
        .iconPalIndex = 1,
        FOOTPRINT(Shieldon)
        FOLLOWER(
            sPicTable_Shieldon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Shieldon,
            gShinyFollowerPalette_Shieldon
        )
        .levelUpLearnset = sShieldonLevelUpLearnset,
        .teachableLearnset = sShieldonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PLACEHOLD_MUGETSU}),
    },

    [SPECIES_PLACEHOLD_MUGETSU] =
    {
        .baseHP        = 60,
        .baseAttack    = 52,
        .baseDefense   = 168,
        .baseSpeed     = 30,
        .baseSpAttack  = 47,
        .baseSpDefense = 138,
        .types = MON_TYPES(TYPE_BEAST, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 199,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Bastiodon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BASTIODON,
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .description = COMPOUND_STRING(
            "Their rock-hard faces serve to protect\n"
            "them from any frontral attacks.\n"
            "When attacked, they form a wall.\n"
            "They shielded their young in that way."),
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bastiodon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Bastiodon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Bastiodon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bastiodon,
        .shinyPalette = gMonShinyPalette_Bastiodon,
        .iconSprite = gMonIcon_Bastiodon,
        .iconPalIndex = 1,
        FOOTPRINT(Bastiodon)
        FOLLOWER(
            sPicTable_Bastiodon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Bastiodon,
            gShinyFollowerPalette_Bastiodon
        )
        .levelUpLearnset = sBastiodonLevelUpLearnset,
        .teachableLearnset = sBastiodonTeachableLearnset,
    },
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
    [SPECIES_CHIBI_GENGETSU] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_OTHER,
        .speciesName = _("Burmy"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "If its cloak is even slightly damaged, it\n"
            "will immediately repair it with whatever is\n"
            "near at hand. The Pokémon within the cloak\n"
            "is scrawny and vulnerable to the cold."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmyPlantCloak,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyPlantCloak,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmyPlantCloak,
        .shinyPalette = gMonShinyPalette_BurmyPlantCloak,
        .iconSprite = gMonIcon_BurmyPlantCloak,
        .iconPalIndex = 1,
        FOOTPRINT(Burmy)
        FOLLOWER(
            sPicTable_BurmyPlantCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_BurmyPlantCloak,
            gShinyFollowerPalette_BurmyPlantCloak
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_NORMAL_GENGETSU},
                                {EVO_LEVEL_MALE, 20, SPECIES_PLACEHOLD_GENGETSU}),
    },

    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Burmy"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "It weaves a cloak together with sand, mud,\n"
            "and silk it spits out. This earthen cloak\n"
            "is ruined by wind and rain, so the Pokémon\n"
            "hides away in caves and other such places."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmySandyCloak,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmySandyCloak,
        .backPicSize = MON_COORDS_SIZE(32, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmySandyCloak,
        .shinyPalette = gMonShinyPalette_BurmySandyCloak,
        .iconSprite = gMonIcon_BurmySandyCloak,
        .iconPalIndex = 1,
        FOOTPRINT(Burmy)
        FOLLOWER(
            sPicTable_BurmySandyCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_BurmySandyCloak,
            gShinyFollowerPalette_BurmySandyCloak
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_SANDY_CLOAK},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM_SANDY_CLOAK}),
    },

    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 29,
        .baseDefense   = 45,
        .baseSpeed     = 36,
        .baseSpAttack  = 29,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_HEART),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 45 : 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_MAINTENANCE, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Burmy"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "When confronted by a lack of other\n"
            "materials, Burmy will create its cloak\n"
            "using dust and refuse. The cloak seems to\n"
            "be more comfortable than one would think."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BurmyTrashCloak,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyTrashCloak,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_BurmyTrashCloak,
        .shinyPalette = gMonShinyPalette_BurmyTrashCloak,
        .iconSprite = gMonIcon_BurmyTrashCloak,
        .iconPalIndex = 0,
        FOOTPRINT(Burmy)
        FOLLOWER(
            sPicTable_BurmyTrashCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_BurmyTrashCloak,
            gShinyFollowerPalette_BurmyTrashCloak
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sBurmyLevelUpLearnset,
        .teachableLearnset = sBurmyTeachableLearnset,
        .formSpeciesIdTable = sBurmyFormSpeciesIdTable,
        .formChangeTable = sBurmyFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM_TRASH_CLOAK},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM_TRASH_CLOAK}),
    },

    [SPECIES_NORMAL_GENGETSU] =
    {
        .baseHP        = 60,
        .baseAttack    = 59,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 79,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_HEART, TYPE_NATURE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BLAZER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_OTHER,
        .speciesName = _("Wormadam"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its appearance changes depending\n"
            "on where Burmy evolved. The materials\n"
            "on hand become a part of its body.\n"
            "The cloak is never shed."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamPlantCloak,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamPlantCloak,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamPlantCloak,
        .shinyPalette = gMonShinyPalette_WormadamPlantCloak,
        .iconSprite = gMonIcon_WormadamPlantCloak,
        .iconPalIndex = 1,
        FOOTPRINT(Wormadam)
        FOLLOWER(
            sPicTable_WormadamPlantCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_WormadamPlantCloak,
            gShinyFollowerPalette_WormadamPlantCloak
        )
        .levelUpLearnset = sWormadamPlantCloakLevelUpLearnset,
        .teachableLearnset = sWormadamPlantCloakTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 105,
        .baseSpeed     = 36,
        .baseSpAttack  = 59,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_HEART, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_Defense = 2,
        .itemRare = ITEM_BLAZER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Wormadam"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its earthen skin is reasonably hard, it has\n"
            "no problem repelling a Starly's pecking.\n"
            "It is said that a Wormadam that evolves\n"
            "on a cold day will have a thicker cloak."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamSandyCloak,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamSandyCloak,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamSandyCloak,
        .shinyPalette = gMonShinyPalette_WormadamSandyCloak,
        .iconSprite = gMonIcon_WormadamSandyCloak,
        .iconPalIndex = 1,
        FOOTPRINT(Wormadam)
        FOLLOWER(
            sPicTable_WormadamSandyCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_WormadamSandyCloak,
            gShinyFollowerPalette_WormadamSandyCloak
        )
        .levelUpLearnset = sWormadamSandyCloakLevelUpLearnset,
        .teachableLearnset = sWormadamSandyCloakTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 69,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_HEART, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BLAZER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Wormadam"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its body, composed of refuse, blends in to\n"
            "the scenery enough to be inconspicuous.\n"
            "This seems to be the perfect way for it to\n"
            "evade the detection of predators."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WormadamTrashCloak,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamTrashCloak,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_WormadamTrashCloak,
        .shinyPalette = gMonShinyPalette_WormadamTrashCloak,
        .iconSprite = gMonIcon_WormadamTrashCloak,
        .iconPalIndex = 0,
        FOOTPRINT(Wormadam)
        FOLLOWER(
            sPicTable_WormadamTrashCloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_WormadamTrashCloak,
            gShinyFollowerPalette_WormadamTrashCloak
        )
        .levelUpLearnset = sWormadamTrashCloakLevelUpLearnset,
        .teachableLearnset = sWormadamTrashCloakTeachableLearnset,
        .formSpeciesIdTable = sWormadamFormSpeciesIdTable,
    },

#define MOTHIM_SPECIES_INFO                                                 \
    {                                                                       \
        .baseHP        = 70,                                                \
        .baseAttack    = 94,                                                \
        .baseDefense   = 50,                                                \
        .baseSpeed     = 66,                                                \
        .baseSpAttack  = 94,                                                \
        .baseSpDefense = 50,                                                \
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),                          \
        .catchRate = 45,                                                    \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 148 : 159,            \
        .evYield_Attack = 1,                                                \
        .evYield_SpAttack = 1,                                              \
        .itemRare = ITEM_BLAZER,                                     \
        .genderRatio = MON_MALE,                                            \
        .eggCycles = 15,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = MON_EGG_GROUPS(CRY_PORYGON),                         \
        .abilities = { ABILITY_INNER_POWER, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .sourceGame = SOURCE_PODD,                                     \
        .speciesName = _("Mothim"),                                         \
        .cryId = CRY_PORYGON,                                                \
        .natDexNum = NATIONAL_DEX_MOTHIM,                                   \
        .categoryName = _("Moth"),                                          \
        .height = 9,                                                        \
        .weight = 233,                                                      \
        .description = gMothimPokedexText,                                  \
        .pokemonScale = 338,                                                \
        .pokemonOffset = 8,                                                 \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
        .frontPic = gMonFrontPic_Mothim,                                    \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                            \
        .frontPicYOffset = 12,                                              \
        .frontAnimFrames = sAnims_Mothim,                                   \
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,                                 \
        .enemyMonElevation = 10,                                            \
        .backPic = gMonBackPic_Mothim,                                      \
        .backPicSize = MON_COORDS_SIZE(64, 56),                             \
        .backPicYOffset = 8,                                                \
        .backAnimId = BACK_ANIM_H_SHAKE,                                    \
        .palette = gMonPalette_Mothim,                                      \
        .shinyPalette = gMonShinyPalette_Mothim,                            \
        .iconSprite = gMonIcon_Mothim,                                      \
        .iconPalIndex = 0,                                                  \
        FOOTPRINT(Mothim)                                                   \
        FOLLOWER(                                                           \
            sPicTable_Mothim,                                               \
            SIZE_32x32,                                                     \
            SHADOW_SIZE_M,                                                  \
            TRACKS_FOOT,                                                    \
            gFollowerPalette_Mothim,                                        \
            gShinyFollowerPalette_Mothim                                    \
        )                                                                   \
        .levelUpLearnset = sMothimLevelUpLearnset,                          \
        .teachableLearnset = sMothimTeachableLearnset,                      \
        .formSpeciesIdTable = sMothimFormSpeciesIdTable,                    \
    }

    [SPECIES_PLACEHOLD_GENGETSU] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_SANDY_CLOAK] = MOTHIM_SPECIES_INFO,
    [SPECIES_MOTHIM_TRASH_CLOAK] = MOTHIM_SPECIES_INFO,
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
    [SPECIES_CHIBI_SARA] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 42,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HONEY_GATHER, ABILITY_NONE, ABILITY_HUSTLE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Combee"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_COMBEE,
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .description = COMPOUND_STRING(
            "A Pokémon formed by three others.\n"
            "It constantly gathers honey from flowers\n"
            "to please Vespiquen. At night, they\n"
            "cluster to form a beehive and sleep."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Combee,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Combee,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Combee,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 22,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Combee,
        .paletteFemale = gMonPalette_CombeeF,
        .shinyPalette = gMonShinyPalette_Combee,
        .shinyPaletteFemale = gMonShinyPalette_CombeeF,
        .iconSprite = gMonIcon_Combee,
        .iconPalIndex = 0,
        FOOTPRINT(Combee)
        FOLLOWER(
            sPicTable_Combee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Combee,
            gShinyFollowerPalette_Combee
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCombeeLevelUpLearnset,
        .teachableLearnset = sCombeeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_FEMALE, 21, SPECIES_NORMAL_SARA}),
    },

    [SPECIES_NORMAL_SARA] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 102,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 102,
        .types = MON_TYPES(TYPE_HEART, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 188,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Vespiquen"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_VESPIQUEN,
        .categoryName = _("Beehive"),
        .height = 12,
        .weight = 385,
        .description = COMPOUND_STRING(
            "It houses its colony in cells in its body\n"
            "and releases various pheromones to\n"
            "make those grubs do its bidding.\n"
            "There is only one in a colony."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vespiquen,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Vespiquen,
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Vespiquen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Vespiquen,
        .shinyPalette = gMonShinyPalette_Vespiquen,
        .iconSprite = gMonIcon_Vespiquen,
        .iconPalIndex = 0,
        FOOTPRINT(Vespiquen)
        FOLLOWER(
            sPicTable_Vespiquen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Vespiquen,
            gShinyFollowerPalette_Vespiquen
        )
        .levelUpLearnset = sVespiquenLevelUpLearnset,
        .teachableLearnset = sVespiquenTeachableLearnset,
    },
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
    [SPECIES_PLACEHOLD_SARA] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_WIND),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 120,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_VOLT_ABSORB },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Pachirisu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PACHIRISU,
        .categoryName = _("EleSquirrel"),
        .height = 4,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A pair may be seen rubbing their cheek\n"
            "pouches together in an effort to share\n"
            "stored electricity. It stores them with\n"
            "berries in tree holes."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pachirisu,
        .frontPicFemale = gMonFrontPic_PachirisuF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pachirisu,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pachirisu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pachirisu,
        .shinyPalette = gMonShinyPalette_Pachirisu,
        .iconSprite = gMonIcon_Pachirisu,
        .iconPalIndex = 0,
        FOOTPRINT(Pachirisu)
        FOLLOWER(
            sPicTable_Pachirisu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Pachirisu,
            gShinyFollowerPalette_Pachirisu
        )
        .levelUpLearnset = sPachirisuLevelUpLearnset,
        .teachableLearnset = sPachirisuTeachableLearnset,
    },
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
    [SPECIES_CHIBI_LOUISE] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 75,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Buizel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BUIZEL,
        .categoryName = _("Sea Weasel"),
        .height = 7,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It inflates its flotation sac, keeping its\n"
            "face above water in order to watch for\n"
            "prey movement. It swims by rotating its\n"
            "two tails like a screw."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Buizel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Buizel,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Buizel,
        .backPicFemale = gMonBackPic_BuizelF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Buizel,
        .shinyPalette = gMonShinyPalette_Buizel,
        .iconSprite = gMonIcon_Buizel,
        .iconPalIndex = 0,
        FOOTPRINT(Buizel)
        FOLLOWER(
            sPicTable_Buizel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Buizel,
            gShinyFollowerPalette_Buizel
        )
        .levelUpLearnset = sBuizelLevelUpLearnset,
        .teachableLearnset = sBuizelTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_NORMAL_LOUISE}),
    },

    [SPECIES_NORMAL_LOUISE] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Floatzel"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FLOATZEL,
        .categoryName = _("Sea Weasel"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Its flotation sac developed as a result\n"
            "of pursuing aquatic prey. It can double\n"
            "as a rubber raft. It assists in the rescues\n"
            "of drowning people."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Floatzel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Floatzel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Floatzel,
        .backPicFemale = gMonBackPic_FloatzelF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Floatzel,
        .shinyPalette = gMonShinyPalette_Floatzel,
        .iconSprite = gMonIcon_Floatzel,
        .iconPalIndex = 0,
        FOOTPRINT(Floatzel)
        FOLLOWER(
            sPicTable_Floatzel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Floatzel,
            gShinyFollowerPalette_Floatzel
        )
        .levelUpLearnset = sFloatzelLevelUpLearnset,
        .teachableLearnset = sFloatzelTeachableLearnset,
    },
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
    [SPECIES_PLACEHOLD_LOUISE] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 35,
        .baseSpAttack  = 62,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 55 : 68,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_CAMOUFLAGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Cherubi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHERUBI,
        .categoryName = _("Cherry"),
        .height = 4,
        .weight = 33,
        .description = COMPOUND_STRING(
            "The small ball holds the nutrients needed\n"
            "for evolution. Apparently, it is also very\n"
            "sweet and tasty. Pokémon like Starly and\n"
            "Taillow try to peck it off."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cherubi,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Cherubi,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cherubi,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Cherubi,
        .shinyPalette = gMonShinyPalette_Cherubi,
        .iconSprite = gMonIcon_Cherubi,
        .iconPalIndex = 1,
        FOOTPRINT(Cherubi)
        FOLLOWER(
            sPicTable_Cherubi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Cherubi,
            gShinyFollowerPalette_Cherubi
        )
        .levelUpLearnset = sCherubiLevelUpLearnset,
        .teachableLearnset = sCherubiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_CHIBI_MARGATROID}),
    },

    [SPECIES_CHIBI_MARGATROID] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 85,
        .baseSpAttack  = 87,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 133,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_CAMOUFLAGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLOWER_GIFT, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Cherrim"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "It's motionless, save for the occasional\n"
            "quiver. A rich array of Pokémon can be\n"
            "found gathered around it, drawn by the\n"
            "scent exuded from Cherrim's folded petals."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CherrimOvercast,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_CherrimOvercast,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CherrimOvercast,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_CherrimOvercast,
        .shinyPalette = gMonShinyPalette_CherrimOvercast,
        .iconSprite = gMonIcon_CherrimOvercast,
        .iconPalIndex = 0,
        FOOTPRINT(Cherrim)
        FOLLOWER(
            sPicTable_CherrimOvercast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_CherrimOvercast,
            gShinyFollowerPalette_CherrimOvercast
        )
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },

    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 85,
        .baseSpAttack  = 87,
        .baseSpDefense = 78,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 133,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_CAMOUFLAGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_FLOWER_GIFT, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Cherrim"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "Cherrim takes this form on sunny days.\n"
            "Its faint scent entices bug Pokémon to it.\n"
            "It immediately closes its petals and\n"
            "becomes immobile once the sun hides."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CherrimSunshine,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_CherrimSunshine,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_CherrimSunshine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CherrimSunshine,
        .shinyPalette = gMonShinyPalette_CherrimSunshine,
        .iconSprite = gMonIcon_CherrimSunshine,
        .iconPalIndex = 1,
        FOOTPRINT(Cherrim)
        .levelUpLearnset = sCherrimLevelUpLearnset,
        .teachableLearnset = sCherrimTeachableLearnset,
        .formSpeciesIdTable = sCherrimFormSpeciesIdTable,
        .formChangeTable = sCherrimFormChangeTable,
    },
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
    [SPECIES_NORMAL_MARGATROID] =
    {
        .baseHP        = 76,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 34,
        .baseSpAttack  = 57,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 73,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_COLLECTOR, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Shellos"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It oozes a purple fluid to deter enemies.\n"
            "While harmless, the fluid is awfully sticky.\n"
            "Apparently, there are more West Sea\n"
            "Shellos now than there were in the past."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosWestSea,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosWestSea,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosWestSea,
        .shinyPalette = gMonShinyPalette_ShellosWestSea,
        .iconSprite = gMonIcon_ShellosWestSea,
        .iconPalIndex = 0,
        FOOTPRINT(Shellos)
        FOLLOWER(
            sPicTable_ShellosWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_ShellosWestSea,
            gShinyFollowerPalette_ShellosWestSea
        )
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PLACEHOLD_MARGATROID}),
    },

    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .baseHP        = 76,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 34,
        .baseSpAttack  = 57,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 73,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_COLLECTOR, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Shellos"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It's capable of spending a limited amount\n"
            "of time on land until their skin dries out.\n"
            "One theory suggests that living in cold\n"
            "seas causes Shellos to take on this form."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShellosEastSea,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosEastSea,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
        .palette = gMonPalette_ShellosEastSea,
        .shinyPalette = gMonShinyPalette_ShellosEastSea,
        .iconSprite = gMonIcon_ShellosEastSea,
        .iconPalIndex = 0,
        FOOTPRINT(Shellos)
        FOLLOWER(
            sPicTable_ShellosEastSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_ShellosEastSea,
            gShinyFollowerPalette_ShellosEastSea
        )
        .levelUpLearnset = sShellosLevelUpLearnset,
        .teachableLearnset = sShellosTeachableLearnset,
        .formSpeciesIdTable = sShellosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_GASTRODON_EAST_SEA}),
    },

    [SPECIES_PLACEHOLD_MARGATROID] =
    {
        .baseHP        = 111,
        .baseAttack    = 83,
        .baseDefense   = 68,
        .baseSpeed     = 39,
        .baseSpAttack  = 92,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_COLLECTOR, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "It appears on shallow-water beaches to\n"
            "eat sand for nourishment. Should one\n"
            "Gastrodon encounter another of a\n"
            "different color, a fierce battle will ensue."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonWestSea,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonWestSea,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonWestSea,
        .shinyPalette = gMonShinyPalette_GastrodonWestSea,
        .iconSprite = gMonIcon_GastrodonWestSea,
        .iconPalIndex = 0,
        FOOTPRINT(Gastrodon)
        FOLLOWER(
            sPicTable_GastrodonWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_GastrodonWestSea,
            gShinyFollowerPalette_GastrodonWestSea
        )
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },

    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .baseHP        = 111,
        .baseAttack    = 83,
        .baseDefense   = 68,
        .baseSpeed     = 39,
        .baseSpAttack  = 92,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_WATER, TYPE_EARTH),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 176,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_COLLECTOR, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Found more often on land than in the sea.\n"
            "They normally live in rocky seashores, but\n"
            "when cloudy or rainy, they can sometimes\n"
            "be found on mountains, far from the sea."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_GastrodonEastSea,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonEastSea,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GastrodonEastSea,
        .shinyPalette = gMonShinyPalette_GastrodonEastSea,
        .iconSprite = gMonIcon_GastrodonEastSea,
        .iconPalIndex = 0,
        FOOTPRINT(Gastrodon)
        FOLLOWER(
            sPicTable_GastrodonEastSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_GastrodonEastSea,
            gShinyFollowerPalette_GastrodonEastSea
        )
        .levelUpLearnset = sGastrodonLevelUpLearnset,
        .teachableLearnset = sGastrodonTeachableLearnset,
        .formSpeciesIdTable = sGastrodonFormSpeciesIdTable,
    },
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
    [SPECIES_NORMAL_YUKI] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 34,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 127,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Drifloon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRIFLOON,
        .categoryName = _("Balloon"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Because of the way it floats aimlessly,\n"
            "an old folktale calls it a “Signpost for\n"
            "Wandering Spirits.” Children holding\n"
            "them sometimes vanish."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drifloon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drifloon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Drifloon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Drifloon,
        .shinyPalette = gMonShinyPalette_Drifloon,
        .iconSprite = gMonIcon_Drifloon,
        .iconPalIndex = 2,
        FOOTPRINT(Drifloon)
        FOLLOWER(
            sPicTable_Drifloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Drifloon,
            gShinyFollowerPalette_Drifloon
        )
        .levelUpLearnset = sDrifloonLevelUpLearnset,
        .teachableLearnset = sDrifloonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PLACEHOLD_YUKI}),
    },

    [SPECIES_PLACEHOLD_YUKI] =
    {
        .baseHP        = 150,
        .baseAttack    = 80,
        .baseDefense   = 44,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FLYING),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 174 : 204,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Drifblim"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRIFBLIM,
        .categoryName = _("Blimp"),
        .height = 12,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Even while under careful observation,\n"
            "large flocks of Drifblim flying at dusk\n"
            "will inexplicably disappear from view.\n"
            "No one knows where they go."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drifblim,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drifblim,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Drifblim,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Drifblim,
        .shinyPalette = gMonShinyPalette_Drifblim,
        .iconSprite = gMonIcon_Drifblim,
        .iconPalIndex = 2,
        FOOTPRINT(Drifblim)
        FOLLOWER(
            sPicTable_Drifblim,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Drifblim,
            gShinyFollowerPalette_Drifblim
        )
        .levelUpLearnset = sDrifblimLevelUpLearnset,
        .teachableLearnset = sDrifblimTeachableLearnset,
    },
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
    [SPECIES_CHIBI_MAI] =
    {
        .baseHP        = 55,
        .baseAttack    = 66,
        .baseDefense   = 44,
        .baseSpeed     = 85,
        .baseSpAttack  = 44,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 84,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KLUTZ, ABILITY_LIMBER },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Buneary"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BUNEARY,
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "You can tell how it feels by the way\n"
            "it rolls its ears. When it's scared,\n"
            "both ears are rolled up. When it senses\n"
            "danger, it perks them up."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Buneary,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Buneary,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Buneary,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Buneary,
        .shinyPalette = gMonShinyPalette_Buneary,
        .iconSprite = gMonIcon_Buneary,
        .iconPalIndex = 2,
        FOOTPRINT(Buneary)
        FOLLOWER(
            sPicTable_Buneary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Buneary,
            gShinyFollowerPalette_Buneary
        )
        .levelUpLearnset = sBunearyLevelUpLearnset,
        .teachableLearnset = sBunearyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_NORMAL_MAI}),
    },

    [SPECIES_NORMAL_MAI] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 84,
        .baseSpeed     = 105,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_KLUTZ, ABILITY_LIMBER },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Lopunny"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = COMPOUND_STRING(
            "An extremely cautious Pokémon.\n"
            "It is very conscious of its looks and\n"
            "never fails to groom its ears.\n"
            "It runs with sprightly jumps."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lopunny,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Lopunny,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Lopunny,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Lopunny,
        .shinyPalette = gMonShinyPalette_Lopunny,
        .iconSprite = gMonIcon_Lopunny,
        .iconPalIndex = 2,
        FOOTPRINT(Lopunny)
        FOLLOWER(
            sPicTable_Lopunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Lopunny,
            gShinyFollowerPalette_Lopunny
        )
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyFormSpeciesIdTable,
        .formChangeTable = sLopunnyFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LOPUNNY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_DREAM),
        .catchRate = 60,
        .expYield = 203,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Lopunny"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 13,
        .weight = 283,
        .description = COMPOUND_STRING(
            "Mega Evolution awakens its combative\n"
            "instincts. It has shed any fur that got in\n"
            "the way of its attacks.\n"
            "crescent."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LopunnyMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_LopunnyMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LopunnyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LopunnyMega,
        .shinyPalette = gMonShinyPalette_LopunnyMega,
        .iconSprite = gMonIcon_LopunnyMega,
        .iconPalIndex = 2,
        FOOTPRINT(Lopunny)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLopunnyLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyFormSpeciesIdTable,
        .formChangeTable = sLopunnyFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
    [SPECIES_NORMAL_YUMEKO] =
    {
        .baseHP        = 49,
        .baseAttack    = 55,
        .baseDefense   = 42,
        .baseSpeed     = 85,
        .baseSpAttack  = 42,
        .baseSpDefense = 37,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 71,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIMBER, ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Glameow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GLAMEOW,
        .categoryName = _("Catty"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "It is a very fickle Pokémon, which is \n"
            "very popular among some. It claws its\n"
            "Trainer's nose if it isn't fed and\n"
            "purrs when affectionate."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glameow,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Glameow,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Glameow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Glameow,
        .shinyPalette = gMonShinyPalette_Glameow,
        .iconSprite = gMonIcon_Glameow,
        .iconPalIndex = 0,
        FOOTPRINT(Glameow)
        FOLLOWER(
            sPicTable_Glameow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Glameow,
            gShinyFollowerPalette_Glameow
        )
        .levelUpLearnset = sGlameowLevelUpLearnset,
        .teachableLearnset = sGlameowTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_PLACEHOLD_YUMEKO}),
    },

    [SPECIES_PLACEHOLD_YUMEKO] =
    {
        .baseHP        = 71,
        .baseAttack    = 82,
        .baseDefense   = 64,
        .baseSpeed     = 112,
        .baseSpAttack  = 64,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_ILLUSION),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 183,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WALL_OF_ICE, ABILITY_OWN_TEMPO, ABILITY_DEFIANT },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Purugly"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PURUGLY,
        .categoryName = _("Tiger Cat"),
        .height = 10,
        .weight = 438,
        .description = COMPOUND_STRING(
            "It is a brazen brute that barges its way\n"
            "into another Pokémon's nest and claims\n"
            "it as its own. It binds its body with its\n"
            "tails to make itself look bigger."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Purugly,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Purugly,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Purugly,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Purugly,
        .shinyPalette = gMonShinyPalette_Purugly,
        .iconSprite = gMonIcon_Purugly,
        .iconPalIndex = 0,
        FOOTPRINT(Purugly)
        FOLLOWER(
            sPicTable_Purugly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Purugly,
            gShinyFollowerPalette_Purugly
        )
        .levelUpLearnset = sPuruglyLevelUpLearnset,
        .teachableLearnset = sPuruglyTeachableLearnset,
    },
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
    [SPECIES_NORMAL_SHINKI] =
    {
        .baseHP        = 63,
        .baseAttack    = 63,
        .baseDefense   = 47,
        .baseSpeed     = 74,
        .baseSpAttack  = 41,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DARK),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 79,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_JEALOUSY, ABILITY_AFTERMATH, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Stunky"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_STUNKY,
        .categoryName = _("Skunk"),
        .height = 4,
        .weight = 192,
        .description = COMPOUND_STRING(
            "It protects itself by spraying a\n"
            "nose-curling, stinky fluid from its rear\n"
            "to repel attackers. The stench lingers\n"
            "for 24 hours."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stunky,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Stunky,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Stunky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Stunky,
        .shinyPalette = gMonShinyPalette_Stunky,
        .iconSprite = gMonIcon_Stunky,
        .iconPalIndex = 2,
        FOOTPRINT(Stunky)
        FOLLOWER(
            sPicTable_Stunky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Stunky,
            gShinyFollowerPalette_Stunky
        )
        .levelUpLearnset = sStunkyLevelUpLearnset,
        .teachableLearnset = sStunkyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_PLACEHOLD_SHINKI}),
    },

    [SPECIES_PLACEHOLD_SHINKI] =
    {
        .baseHP        = 103,
        .baseAttack    = 93,
        .baseDefense   = 67,
        .baseSpeed     = 84,
        .baseSpAttack  = 71,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DARK),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 209,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_JEALOUSY, ABILITY_AFTERMATH, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Skuntank"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SKUNTANK,
        .categoryName = _("Skunk"),
        .height = 10,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It attacks by spraying a horribly smelly\n"
            "fluid from the tip of its tail. The fluid\n"
            "smells worse the longer it is allowed\n"
            "to fester."),
        .pokemonScale = 305,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skuntank,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Skuntank,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Skuntank,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Skuntank,
        .shinyPalette = gMonShinyPalette_Skuntank,
        .iconSprite = gMonIcon_Skuntank,
        .iconPalIndex = 2,
        FOOTPRINT(Skuntank)
        FOLLOWER(
            sPicTable_Skuntank,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Skuntank,
            gShinyFollowerPalette_Skuntank
        )
        .levelUpLearnset = sSkuntankLevelUpLearnset,
        .teachableLearnset = sSkuntankTeachableLearnset,
    },
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
    [SPECIES_BRONZOR] =
    {
        .baseHP        = 57,
        .baseAttack    = 24,
        .baseDefense   = 86,
        .baseSpeed     = 23,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 72,
        .evYield_Defense = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Bronzor"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BRONZOR,
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Implements shaped like it were discovered\n"
            "in ancient tombs. There are researchers\n"
            "who believe this Pokémon reflected like a\n"
            "mirror in the distant past."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bronzor,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Bronzor,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Bronzor,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Bronzor,
        .shinyPalette = gMonShinyPalette_Bronzor,
        .iconSprite = gMonIcon_Bronzor,
        .iconPalIndex = 0,
        FOOTPRINT(Bronzor)
        FOLLOWER(
            sPicTable_Bronzor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Bronzor,
            gShinyFollowerPalette_Bronzor
        )
        .levelUpLearnset = sBronzorLevelUpLearnset,
        .teachableLearnset = sBronzorTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_BRONZONG}),
    },

    [SPECIES_BRONZONG] =
    {
        .baseHP        = 67,
        .baseAttack    = 89,
        .baseDefense   = 116,
        .baseSpeed     = 33,
        .baseSpAttack  = 79,
        .baseSpDefense = 116,
        .types = MON_TYPES(TYPE_STEEL, TYPE_REASON),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 188,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MAID_UNIFORM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Bronzong"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_BRONZONG,
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .description = COMPOUND_STRING(
            "In ages past, this Pokémon was revered as\n"
            "a bringer of rain. One caused a news stir\n"
            "when it was dug up at a construction site\n"
            "after a 2000-year sleep."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bronzong,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Bronzong,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Bronzong,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bronzong,
        .shinyPalette = gMonShinyPalette_Bronzong,
        .iconSprite = gMonIcon_Bronzong,
        .iconPalIndex = 0,
        FOOTPRINT(Bronzong)
        FOLLOWER(
            sPicTable_Bronzong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Bronzong,
            gShinyFollowerPalette_Bronzong
        )
        .levelUpLearnset = sBronzongLevelUpLearnset,
        .teachableLearnset = sBronzongTeachableLearnset,
    },
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
    [SPECIES_CHATOT] =
    {
        .baseHP        = 76,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 91,
        .baseSpAttack  = 92,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_ILLUSION, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 107,
        .evYield_Attack = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Chatot"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CHATOT,
        .categoryName = _("Music Note"),
        .height = 5,
        .weight = 19,
        .description = COMPOUND_STRING(
            "It mimics the cries of other Pokémon to\n"
            "trick them into thinking it's one of them.\n"
            "This way they won't attack it. It can\n"
            "also learn and speak human words."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chatot,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Chatot,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Chatot,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Chatot,
        .shinyPalette = gMonShinyPalette_Chatot,
        .iconSprite = gMonIcon_Chatot,
        .iconPalIndex = 0,
        FOOTPRINT(Chatot)
        FOLLOWER(
            sPicTable_Chatot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Chatot,
            gShinyFollowerPalette_Chatot
        )
        .levelUpLearnset = sChatotLevelUpLearnset,
        .teachableLearnset = sChatotTeachableLearnset,
    },
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
    [SPECIES_SPIRITOMB] =
    {
        .baseHP        = 50,
        .baseAttack    = 92,
        .baseDefense   = 108,
        .baseSpeed     = 35,
        .baseSpAttack  = 92,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_GHOST, TYPE_DARK),
        .catchRate = 100,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 170 : 168,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INFILTRATOR },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Spiritomb"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SPIRITOMB,
        .categoryName = _("Forbidden"),
        .height = 10,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A Pokémon that was formed by 108 spirits.\n"
            "Its constant mischief and misdeeds\n"
            "resulted in it being bound to an\n"
            "Odd Keystone by a mysterious spell."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spiritomb,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Spiritomb,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Spiritomb,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Spiritomb,
        .shinyPalette = gMonShinyPalette_Spiritomb,
        .iconSprite = gMonIcon_Spiritomb,
        .iconPalIndex = 5,
        FOOTPRINT(Spiritomb)
        FOLLOWER(
            sPicTable_Spiritomb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Spiritomb,
            gShinyFollowerPalette_Spiritomb
        )
        .levelUpLearnset = sSpiritombLevelUpLearnset,
        .teachableLearnset = sSpiritombTeachableLearnset,
    },
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
    [SPECIES_GIBLE] =
    {
        .baseHP        = 58,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_FAITH, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_DOLL_WALL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Gible"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GIBLE,
        .categoryName = _("Land Shark"),
        .height = 7,
        .weight = 205,
        .description = COMPOUND_STRING(
            "It nests in horizontal holes warmed by\n"
            "geothermal heat. Foes who stray too\n"
            "close can expect to be pounced on\n"
            "and bitten."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gible,
        .frontPicFemale = gMonFrontPic_GibleF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Gible,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gible,
        .backPicFemale = gMonBackPic_GibleF,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Gible,
        .shinyPalette = gMonShinyPalette_Gible,
        .iconSprite = gMonIcon_Gible,
        .iconPalIndex = 0,
        FOOTPRINT(Gible)
        FOLLOWER(
            sPicTable_Gible,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Gible,
            gShinyFollowerPalette_Gible
        )
        .levelUpLearnset = sGibleLevelUpLearnset,
        .teachableLearnset = sGibleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GABITE}),
    },

    [SPECIES_GABITE] =
    {
        .baseHP        = 68,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 82,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FAITH, TYPE_EARTH),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_DOLL_WALL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Gabite"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GABITE,
        .categoryName = _("Cave"),
        .height = 14,
        .weight = 560,
        .description = COMPOUND_STRING(
            "Shiny objects are its passion. It can be\n"
            "found in its cave, scarcely moving,\n"
            "its gaze fixed on the jewels it's amassed\n"
            "or Carbink it has caught."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gabite,
        .frontPicFemale = gMonFrontPic_GabiteF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gabite,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gabite,
        .backPicFemale = gMonBackPic_GabiteF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gabite,
        .shinyPalette = gMonShinyPalette_Gabite,
        .iconSprite = gMonIcon_Gabite,
        .iconPalIndex = 0,
        FOOTPRINT(Gabite)
        FOLLOWER(
            sPicTable_Gabite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Gabite,
            gShinyFollowerPalette_Gabite
        )
        .levelUpLearnset = sGabiteLevelUpLearnset,
        .teachableLearnset = sGabiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_GARCHOMP}),
    },

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 108,
        .baseAttack    = 130,
        .baseDefense   = 95,
        .baseSpeed     = 102,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FAITH, TYPE_EARTH),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_DOLL_WALL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Garchomp"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "When it folds up its body and extends its\n"
            "wings, it looks like a jet plane. It is\n"
            "covered in fine scales that reduce drag,\n"
            "enabling it to fly at high speeds."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Garchomp,
        .frontPicFemale = gMonFrontPic_GarchompF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Garchomp,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Garchomp,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Garchomp,
        .shinyPalette = gMonShinyPalette_Garchomp,
        .iconSprite = gMonIcon_Garchomp,
        .iconPalIndex = 0,
        FOOTPRINT(Garchomp)
        FOLLOWER(
            sPicTable_Garchomp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Garchomp,
            gShinyFollowerPalette_Garchomp
        )
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
        .formSpeciesIdTable = sGarchompFormSpeciesIdTable,
        .formChangeTable = sGarchompFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FAITH, TYPE_EARTH),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Garchomp"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "Excess energy melted its arms and wings\n"
            "into giant scythes, sending it mad with\n"
            "rage. It swings its scythes wildly and\n"
            "slices the ground to pieces."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GarchompMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GarchompMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GarchompMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_GarchompMega,
        .shinyPalette = gMonShinyPalette_GarchompMega,
        .iconSprite = gMonIcon_GarchompMega,
        .iconPalIndex = 0,
        FOOTPRINT(Garchomp)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGarchompLevelUpLearnset,
        .teachableLearnset = sGarchompTeachableLearnset,
        .formSpeciesIdTable = sGarchompFormSpeciesIdTable,
        .formChangeTable = sGarchompFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
    [SPECIES_RIOLU] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DREAM),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 57 : 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_PRANKSTER },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Riolu"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_RIOLU,
        .categoryName = _("Emanation"),
        .height = 7,
        .weight = 202,
        .description = COMPOUND_STRING(
            "It can discern the physical and emotional\n"
            "states of people, Pokémon, and other\n"
            "natural things from the shape of their\n"
            "aura waves."),
        .pokemonScale = 365,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Riolu,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Riolu,
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Riolu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Riolu,
        .shinyPalette = gMonShinyPalette_Riolu,
        .iconSprite = gMonIcon_Riolu,
        .iconPalIndex = 2,
        FOOTPRINT(Riolu)
        FOLLOWER(
            sPicTable_Riolu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Riolu,
            gShinyFollowerPalette_Riolu
        )
        .levelUpLearnset = sRioluLevelUpLearnset,
        .teachableLearnset = sRioluTeachableLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_DAY, 0, SPECIES_LUCARIO}),
    },

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DREAM, TYPE_STEEL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 204,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Lucario"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .description = COMPOUND_STRING(
            "It understands human speech.\n"
            "It is said that no foe can remain invisible\n"
            "to Lucario, since it can detect Auras.\n"
            "Even foes it could not otherwise see."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lucario,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lucario,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lucario,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Lucario,
        .shinyPalette = gMonShinyPalette_Lucario,
        .iconSprite = gMonIcon_Lucario,
        .iconPalIndex = 2,
        FOOTPRINT(Lucario)
        FOLLOWER(
            sPicTable_Lucario,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Lucario,
            gShinyFollowerPalette_Lucario
        )
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioFormSpeciesIdTable,
        .formChangeTable = sLucarioFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DREAM, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 219,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Lucario"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "It readies itself to face its enemies by\n"
            "focusing its mental energies. Its fighting\n"
            "style can be summed up in a single word:\n"
            "heartless."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LucarioMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_LucarioMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LucarioMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LucarioMega,
        .shinyPalette = gMonShinyPalette_LucarioMega,
        .iconSprite = gMonIcon_LucarioMega,
        .iconPalIndex = 2,
        FOOTPRINT(Lucario)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioFormSpeciesIdTable,
        .formChangeTable = sLucarioFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
    [SPECIES_HIPPOPOTAS] =
    {
        .baseHP        = 68,
        .baseAttack    = 72,
        .baseDefense   = 78,
        .baseSpeed     = 32,
        .baseSpAttack  = 38,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_EARTH),
        .catchRate = 140,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 95,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hippopotas"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HIPPOPOTAS,
        .categoryName = _("Hippo"),
        .height = 8,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Hippopotas shuts its nostrils tight when\n"
            "travelling through sand. Instead of\n"
            "perspiration, it expels grains of sand\n"
            "from its body."),
        .pokemonScale = 366,
        .pokemonOffset = 11,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hippopotas,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hippopotas,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Hippopotas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Hippopotas,
        .paletteFemale = gMonPalette_HippopotasF,
        .shinyPalette = gMonShinyPalette_Hippopotas,
        .shinyPaletteFemale = gMonShinyPalette_HippopotasF,
        .iconSprite = gMonIcon_Hippopotas,
        .iconPalIndex = 1,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippopotasF,
        .iconPalIndexFemale = 1,
    #endif
        FOOTPRINT(Hippopotas)
        FOLLOWER(
            sPicTable_Hippopotas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Hippopotas,
            gShinyFollowerPalette_Hippopotas
        )
        .levelUpLearnset = sHippopotasLevelUpLearnset,
        .teachableLearnset = sHippopotasTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_HIPPOWDON}),
    },

    [SPECIES_HIPPOWDON] =
    {
        .baseHP        = 108,
        .baseAttack    = 112,
        .baseDefense   = 118,
        .baseSpeed     = 47,
        .baseSpAttack  = 68,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_EARTH),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 198,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE },
        .sourceGame = SOURCE_EOSD,
        .speciesName = _("Hippowdon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_HIPPOWDON,
        .categoryName = _("Heavyweight"),
        .height = 20,
        .weight = 3000,
        .description = COMPOUND_STRING(
            "It is surprisingly quick to anger.\n"
            "It brandishes its gaping mouth in a\n"
            "display of fearsome strength and raises\n"
            "vast quantities of sand while attacking."),
        .pokemonScale = 261,
        .pokemonOffset = 2,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Hippowdon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Hippowdon,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Hippowdon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hippowdon,
        .paletteFemale = gMonPalette_HippowdonF,
        .shinyPalette = gMonShinyPalette_Hippowdon,
        .shinyPaletteFemale = gMonShinyPalette_HippowdonF,
        .iconSprite = gMonIcon_Hippowdon,
        .iconPalIndex = 1,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippowdonF,
        .iconPalIndexFemale = 1,
    #endif
        FOOTPRINT(Hippowdon)
        FOLLOWER(
            sPicTable_Hippowdon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Hippowdon,
            gShinyFollowerPalette_Hippowdon
        )
        .levelUpLearnset = sHippowdonLevelUpLearnset,
        .teachableLearnset = sHippowdonTeachableLearnset,
    },
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
    [SPECIES_SKORUPI] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_HEART),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 114,
        .evYield_Defense = 1,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Skorupi"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SKORUPI,
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "It grips prey with its tail claws and\n"
            "injects poison. It tenaciously hangs\n"
            "on until the poison takes.\n"
            "It can survive a year without food."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skorupi,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Skorupi,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Skorupi,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Skorupi,
        .shinyPalette = gMonShinyPalette_Skorupi,
        .iconSprite = gMonIcon_Skorupi,
        .iconPalIndex = 0,
        FOOTPRINT(Skorupi)
        FOLLOWER(
            sPicTable_Skorupi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Skorupi,
            gShinyFollowerPalette_Skorupi
        )
        .levelUpLearnset = sSkorupiLevelUpLearnset,
        .teachableLearnset = sSkorupiTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DRAPION}),
    },

    [SPECIES_DRAPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 204,
        .evYield_Defense = 2,
        .itemRare = ITEM_NURSE_OUTFIT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_GUARD_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE },
        .sourceGame = SOURCE_PCB,
        .speciesName = _("Drapion"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_DRAPION,
        .categoryName = _("Ogre Scorp"),
        .height = 13,
        .weight = 615,
        .description = COMPOUND_STRING(
            "Possessing a sturdy build, it takes\n"
            "pride in its strength. It has the power\n"
            "in its clawed arms to make scrap\n"
            "out of a car."),
        .pokemonScale = 272,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Drapion,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Drapion,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Drapion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Drapion,
        .shinyPalette = gMonShinyPalette_Drapion,
        .iconSprite = gMonIcon_Drapion,
        .iconPalIndex = 2,
        FOOTPRINT(Drapion)
        FOLLOWER(
            sPicTable_Drapion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Drapion,
            gShinyFollowerPalette_Drapion
        )
        .levelUpLearnset = sDrapionLevelUpLearnset,
        .teachableLearnset = sDrapionTeachableLearnset,
    },
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
    [SPECIES_CROAGUNK] =
    {
        .baseHP        = 48,
        .baseAttack    = 61,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 61,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DREAM),
        .catchRate = 140,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 83,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Croagunk"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CROAGUNK,
        .categoryName = _("Toxic Mouth"),
        .height = 7,
        .weight = 230,
        .description = COMPOUND_STRING(
            "Croagunk rarely fights fairly. Inflating\n"
            "its poison sacs, it fills the area with\n"
            "an odd sound and hits flinching\n"
            "opponents with a poison jab."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Croagunk,
        .frontPicFemale = gMonFrontPic_CroagunkF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Croagunk,
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Croagunk,
        .backPicFemale = gMonBackPic_CroagunkF,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Croagunk,
        .shinyPalette = gMonShinyPalette_Croagunk,
        .iconSprite = gMonIcon_Croagunk,
        .iconPalIndex = 0,
        FOOTPRINT(Croagunk)
        FOLLOWER(
            sPicTable_Croagunk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Croagunk,
            gShinyFollowerPalette_Croagunk
        )
        .levelUpLearnset = sCroagunkLevelUpLearnset,
        .teachableLearnset = sCroagunkTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_TOXICROAK}),
    },

    [SPECIES_TOXICROAK] =
    {
        .baseHP        = 83,
        .baseAttack    = 106,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 86,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_MIASMA, TYPE_DREAM),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 181,
        .evYield_Attack = 2,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Toxicroak"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_TOXICROAK,
        .categoryName = _("Toxic Mouth"),
        .height = 13,
        .weight = 444,
        .description = COMPOUND_STRING(
            "Swaying and dodging the attacks\n"
            "of its foes, it weaves its flexible body\n"
            "in close, then lunges out with its\n"
            "poisonous claws."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Toxicroak,
        .frontPicFemale = gMonFrontPic_ToxicroakF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Toxicroak,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toxicroak,
        .backPicFemale = gMonBackPic_ToxicroakF,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Toxicroak,
        .shinyPalette = gMonShinyPalette_Toxicroak,
        .iconSprite = gMonIcon_Toxicroak,
        .iconPalIndex = 0,
        FOOTPRINT(Toxicroak)
        FOLLOWER(
            sPicTable_Toxicroak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Toxicroak,
            gShinyFollowerPalette_Toxicroak
        )
        .levelUpLearnset = sToxicroakLevelUpLearnset,
        .teachableLearnset = sToxicroakTeachableLearnset,
    },
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
    [SPECIES_CARNIVINE] =
    {
        .baseHP        = 74,
        .baseAttack    = 100,
        .baseDefense   = 72,
        .baseSpeed     = 46,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .types = MON_TYPES(TYPE_NATURE),
        .catchRate = 200,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 164,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .speciesName = _("Carnivine"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_CARNIVINE,
        .categoryName = _("Bug Catcher"),
        .height = 14,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Hanging from branches using its\n"
            "tentacles, it looks like a plant.\n"
            "It attracts prey with its sweet-smelling\n"
            "saliva, then chomps down."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Carnivine,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Carnivine,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Carnivine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Carnivine,
        .shinyPalette = gMonShinyPalette_Carnivine,
        .iconSprite = gMonIcon_Carnivine,
        .iconPalIndex = 1,
        FOOTPRINT(Carnivine)
        FOLLOWER(
            sPicTable_Carnivine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Carnivine,
            gShinyFollowerPalette_Carnivine
        )
        .levelUpLearnset = sCarnivineLevelUpLearnset,
        .teachableLearnset = sCarnivineTeachableLearnset,
    },
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
    [SPECIES_FINNEON] =
    {
        .baseHP        = 49,
        .baseAttack    = 49,
        .baseDefense   = 56,
        .baseSpeed     = 66,
        .baseSpAttack  = 49,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 90,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Finneon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_FINNEON,
        .categoryName = _("Wing Fish"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Its double tail fins propel its energetic\n"
            "jumps. When it breaks the surface of the\n"
            "sea, Wingull swoop down to grab it on\n"
            "the fly."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Finneon,
        .frontPicFemale = gMonFrontPic_FinneonF,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Finneon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Finneon,
        .backPicFemale = gMonBackPic_FinneonF,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Finneon,
        .shinyPalette = gMonShinyPalette_Finneon,
        .iconSprite = gMonIcon_Finneon,
        .iconPalIndex = 0,
        FOOTPRINT(Finneon)
        FOLLOWER(
            sPicTable_Finneon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Finneon,
            gShinyFollowerPalette_Finneon
        )
        .levelUpLearnset = sFinneonLevelUpLearnset,
        .teachableLearnset = sFinneonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_LUMINEON}),
    },

    [SPECIES_LUMINEON] =
    {
        .baseHP        = 69,
        .baseAttack    = 69,
        .baseDefense   = 76,
        .baseSpeed     = 91,
        .baseSpAttack  = 69,
        .baseSpDefense = 86,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 156,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Lumineon"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_LUMINEON,
        .categoryName = _("Neon"),
        .height = 12,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Lumineon swimming in the darkness\n"
            "of the deep sea look like stars shining\n"
            "in the night sky. It competes for food\n"
            "with Lanturn."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lumineon,
        .frontPicFemale = gMonFrontPic_LumineonF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Lumineon,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Lumineon,
        .backPicFemale = gMonBackPic_LumineonF,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Lumineon,
        .shinyPalette = gMonShinyPalette_Lumineon,
        .iconSprite = gMonIcon_Lumineon,
        .iconPalIndex = 0,
        FOOTPRINT(Lumineon)
        FOLLOWER(
            sPicTable_Lumineon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Lumineon,
            gShinyFollowerPalette_Lumineon
        )
        .levelUpLearnset = sLumineonLevelUpLearnset,
        .teachableLearnset = sLumineonTeachableLearnset,
    },
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
    [SPECIES_SNOVER] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_NATURE, TYPE_ICE),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 67 : 131,
        .evYield_Attack = 1,
        .itemRare = ITEM_THICK_FUR,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Snover"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_SNOVER,
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .description = COMPOUND_STRING(
            "During cold seasons, it migrates to the\n"
            "mountain's lower reaches. Seemingly\n"
            "curious about people, they gather around\n"
            "footsteps they find on snowy mountains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snover,
        .frontPicFemale = gMonFrontPic_SnoverF,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Snover,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snover,
        .backPicFemale = gMonBackPic_SnoverF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Snover,
        .shinyPalette = gMonShinyPalette_Snover,
        .iconSprite = gMonIcon_Snover,
        .iconPalIndex = 1,
        FOOTPRINT(Snover)
        FOLLOWER(
            sPicTable_Snover,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Snover,
            gShinyFollowerPalette_Snover
        )
        .levelUpLearnset = sSnoverLevelUpLearnset,
        .teachableLearnset = sSnoverTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_ABOMASNOW}),
    },

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 92,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NATURE, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 214,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_THICK_FUR,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Abomasnow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .description = COMPOUND_STRING(
            "It lives a quiet life on mountains that\n"
            "are perpetually covered in snow. It hides\n"
            "itself by whipping up blizzards.\n"
            "It is also known as “The Ice Monster.”"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Abomasnow,
        .frontPicFemale = gMonFrontPic_AbomasnowF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Abomasnow,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Abomasnow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Abomasnow,
        .shinyPalette = gMonShinyPalette_Abomasnow,
        .iconSprite = gMonIcon_Abomasnow,
        .iconPalIndex = 1,
        FOOTPRINT(Abomasnow)
        FOLLOWER(
            sPicTable_Abomasnow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Abomasnow,
            gShinyFollowerPalette_Abomasnow
        )
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
        .formSpeciesIdTable = sAbomasnowFormSpeciesIdTable,
        .formChangeTable = sAbomasnowFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_NATURE, TYPE_ICE),
        .catchRate = 60,
        .expYield = 208,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_THICK_FUR,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Abomasnow"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 27,
        .weight = 1850,
        .description = COMPOUND_STRING(
            "The sprouts on Abomasnow's back grow into\n"
            "great shafts of ice when it Mega Evolves.\n"
            "Dislikes associating with others and\n"
            "chooses to live quietly deep in mountains."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_AbomasnowMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_AbomasnowMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AbomasnowMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_AbomasnowMega,
        .shinyPalette = gMonShinyPalette_AbomasnowMega,
        .iconSprite = gMonIcon_AbomasnowMega,
        .iconPalIndex = 1,
        FOOTPRINT(Abomasnow)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAbomasnowLevelUpLearnset,
        .teachableLearnset = sAbomasnowTeachableLearnset,
        .formSpeciesIdTable = sAbomasnowFormSpeciesIdTable,
        .formChangeTable = sAbomasnowFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        .types = MON_TYPES(TYPE_WIND, TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 132,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Its body is composed of plasma and loves\n"
            "to surprise others. One boy's invention led\n"
            "to the development of many machines that\n"
            "can use of Rotom's unique capabilities."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rotom,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rotom,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Rotom,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Rotom,
        .shinyPalette = gMonShinyPalette_Rotom,
        .iconSprite = gMonIcon_Rotom,
        .iconPalIndex = 0,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_Rotom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Rotom,
            gShinyFollowerPalette_Rotom
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define ROTOM_APPLIANCE_EXP_YIELD 182
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ROTOM_APPLIANCE_EXP_YIELD 154
#else
    #define ROTOM_APPLIANCE_EXP_YIELD 132
#endif

    [SPECIES_ROTOM_HEAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_WIND, TYPE_FIRE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "If the convection microwave oven is not\n"
            "working properly, then the Rotom inhabiting\n"
            "it will become lethargic. It will gleefully\n"
            "burn your favorite outfit in mischief."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomHeat,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_RotomHeat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomHeat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_RotomHeat,
        .shinyPalette = gMonShinyPalette_RotomHeat,
        .iconSprite = gMonIcon_RotomHeat,
        .iconPalIndex = 0,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_RotomHeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_RotomHeat,
            gShinyFollowerPalette_RotomHeat
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_WASH] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_WIND, TYPE_WATER),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .noFlip = TRUE,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It enjoys coming up with water-based\n"
            "pranks. The model of washing machine that\n"
            "Rotom can inspirit has been discontinued,\n"
            "so they are now traded at high prices."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomWash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_RotomWash,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomWash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_RotomWash,
        .shinyPalette = gMonShinyPalette_RotomWash,
        .iconSprite = gMonIcon_RotomWash,
        .iconPalIndex = 0,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_RotomWash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_RotomWash,
            gShinyFollowerPalette_RotomWash
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FROST] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_WIND, TYPE_ICE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "In this form, Rotom likes to play freezing\n"
            "cold pranks. You may find it's turned the\n"
            "bath you just filled to solid ice!\n"
            "It battles by spewing cold air."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFrost,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_RotomFrost,
        .frontAnimId = ANIM_H_STRETCH,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFrost,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_RotomFrost,
        .shinyPalette = gMonShinyPalette_RotomFrost,
        .iconSprite = gMonIcon_RotomFrost,
        .iconPalIndex = 5,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_RotomFrost,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_RotomFrost,
            gShinyFollowerPalette_RotomFrost
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_FAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_WIND, TYPE_FLYING),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The first appliance developed that Rotom\n"
            "coud inspirit was the electric fan. It uses\n"
            "its power over wind in its pranks, happily\n"
            "blowing any important documents it finds."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomFan,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RotomFan,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .frontAnimDelay = 7,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_RotomFan,
        .shinyPalette = gMonShinyPalette_RotomFan,
        .iconSprite = gMonIcon_RotomFan,
        .iconPalIndex = 0,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_RotomFan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_RotomFan,
            gShinyFollowerPalette_RotomFan
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },

    [SPECIES_ROTOM_MOW] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 107,
        .baseSpeed     = 86,
        .baseSpAttack  = 105,
        .baseSpDefense = 107,
        .types = MON_TYPES(TYPE_WIND, TYPE_NATURE),
        .catchRate = 45,
        .expYield = ROTOM_APPLIANCE_EXP_YIELD,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Rotom"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The lawn mower is an appliance that led to\n"
            "the development of the Rotom Dex. It will\n"
            "mow down grass and flowers, then swagger\n"
            "around with pride at its accomplishments."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RotomMow,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_RotomMow,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomMow,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_RotomMow,
        .shinyPalette = gMonShinyPalette_RotomMow,
        .iconSprite = gMonIcon_RotomMow,
        .iconPalIndex = 0,
        FOOTPRINT(Rotom)
        FOLLOWER(
            sPicTable_RotomMow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_RotomMow,
            gShinyFollowerPalette_RotomMow
        )
        .levelUpLearnset = sRotomLevelUpLearnset,
        .teachableLearnset = sRotomTeachableLearnset,
        .formSpeciesIdTable = sRotomFormSpeciesIdTable,
        .formChangeTable = sRotomFormChangeTable,
    },
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Defense = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_PODD,
        .speciesName = _("Uxie"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_UXIE,
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Known as ”The Being of Knowledge,”\n"
            "according to some sources, this Pokémon\n"
            "provided people with the intelligence\n"
            "necessary to solve various problems."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Uxie,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Uxie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Uxie,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Uxie,
        .shinyPalette = gMonShinyPalette_Uxie,
        .iconSprite = gMonIcon_Uxie,
        .iconPalIndex = 0,
        FOOTPRINT(Uxie)
        FOLLOWER(
            sPicTable_Uxie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Uxie,
            gShinyFollowerPalette_Uxie
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sUxieLevelUpLearnset,
        .teachableLearnset = sUxieTeachableLearnset,
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_HRTP,
        .speciesName = _("Mesprit"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_MESPRIT,
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Although it slumbers at the bottom of a\n"
            "lake, its spirit is said to leave its body\n"
            "and flitter on the water surface. It\n"
            "taught humans of sorrow, pain, and joy."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mesprit,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Mesprit,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Mesprit,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mesprit,
        .shinyPalette = gMonShinyPalette_Mesprit,
        .iconSprite = gMonIcon_Mesprit,
        .iconPalIndex = 0,
        FOOTPRINT(Mesprit)
        FOLLOWER(
            sPicTable_Mesprit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Mesprit,
            gShinyFollowerPalette_Mesprit
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sMespritLevelUpLearnset,
        .teachableLearnset = sMespritTeachableLearnset,
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 125,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_REASON),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_SOEW,
        .speciesName = _("Azelf"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_AZELF,
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "This Pokémon is said to have endowed\n"
            "humans with the determination needed to\n"
            "do things. It is thought that Uxie, Mesprit\n"
            "and Azelf all came from the same egg."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Azelf,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Azelf,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Azelf,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Azelf,
        .shinyPalette = gMonShinyPalette_Azelf,
        .iconSprite = gMonIcon_Azelf,
        .iconPalIndex = 0,
        FOOTPRINT(Azelf)
        FOLLOWER(
            sPicTable_Azelf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_Azelf,
            gShinyFollowerPalette_Azelf
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sAzelfLevelUpLearnset,
        .teachableLearnset = sAzelfTeachableLearnset,
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DIALGA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DIALGA_EXP_YIELD  306
#else
    #define DIALGA_EXP_YIELD  220
#endif

    [SPECIES_DIALGA_ORIGIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FAITH),
        .catchRate = 3,
        .expYield = DIALGA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .sourceGame = SOURCE_POFV,
        .speciesName = _("Dialga"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ADVENT_CIRNO,
        .categoryName = _("Temporal"),
        .height = 70,
        .weight = 8500,
        .description = COMPOUND_STRING(
            "Radiant light caused Dialga to take on a\n"
            "form bearing a striking resemblance to the\n"
            "creator Pokémon. It wields such a colossal\n"
            "strength that this might be its true form."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_DialgaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DialgaOrigin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DialgaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DialgaOrigin,
        .shinyPalette = gMonShinyPalette_DialgaOrigin,
        .iconSprite = gMonIcon_DialgaOrigin,
        .iconPalIndex = 0,
        FOOTPRINT(Dialga)
        FOLLOWER(
            sPicTable_DialgaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gFollowerPalette_DialgaOrigin
            //, gShinyFollowerPalette_DialgaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sDialgaLevelUpLearnset,
        .teachableLearnset = sDialgaTeachableLearnset,
        .formSpeciesIdTable = sDialgaFormSpeciesIdTable,
        .formChangeTable = sDialgaFormChangeTable,
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define PALKIA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PALKIA_EXP_YIELD  306
#else
    #define PALKIA_EXP_YIELD  220
#endif

    [SPECIES_PALKIA_ORIGIN] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAITH),
        .catchRate = 3,
        .expYield = PALKIA_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY },
        .sourceGame = SOURCE_IN,
        .speciesName = _("Palkia"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ADVENT_REISEN,
        .categoryName = _("Spatial"),
        .height = 63,
        .weight = 6600,
        .description = COMPOUND_STRING(
            "It soars across the sky in a form that\n"
            "resembles the creator of all things.\n"
            "Perhaps this imitation of appearance is a\n"
            "strategy for gaining Arceus's powers."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
        .frontPic = gMonFrontPic_PalkiaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PalkiaOrigin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PalkiaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PalkiaOrigin,
        .shinyPalette = gMonShinyPalette_PalkiaOrigin,
        .iconSprite = gMonIcon_PalkiaOrigin,
        .iconPalIndex = 2,
        FOOTPRINT(Palkia)
        FOLLOWER(
            sPicTable_PalkiaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gFollowerPalette_PalkiaOrigin
            //, gShinyFollowerPalette_PalkiaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sPalkiaLevelUpLearnset,
        .teachableLearnset = sPalkiaTeachableLearnset,
        .formSpeciesIdTable = sPalkiaFormSpeciesIdTable,
        .formChangeTable = sPalkiaFormChangeTable,
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GIRATINA_EXP_YIELD 340
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GIRATINA_EXP_YIELD 306
#else
    #define GIRATINA_EXP_YIELD 220
#endif

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST, TYPE_FAITH),
        .catchRate = 3,
        .expYield = GIRATINA_EXP_YIELD,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_MS,
        .speciesName = _("Giratina"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ADVENT_LETTY,
        .categoryName = _("Renegade"),
        .height = 69,
        .weight = 6500,
        .description = COMPOUND_STRING(
            "Giratina loses its legs upon changing into\n"
            "this form. It's believed it hails from a\n"
            "world where the heavens and the earth\n"
            "are as one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_GiratinaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GiratinaOrigin,
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_GiratinaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_GiratinaOrigin,
        .shinyPalette = gMonShinyPalette_GiratinaOrigin,
        .iconSprite = gMonIcon_GiratinaOrigin,
        .iconPalIndex = 0,
        FOOTPRINT(GiratinaOrigin)
        FOLLOWER(
            sPicTable_GiratinaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gFollowerPalette_GiratinaOrigin
            //, gShinyFollowerPalette_GiratinaOrigin
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sGiratinaLevelUpLearnset,
        .teachableLearnset = sGiratinaTeachableLearnset,
        .formSpeciesIdTable = sGiratinaFormSpeciesIdTable,
        .formChangeTable = sGiratinaFormChangeTable,
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define SHAYMIN_EXP_YIELD 300
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define SHAYMIN_EXP_YIELD 270
#else
    #define SHAYMIN_EXP_YIELD 64
#endif

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NATURE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = SHAYMIN_EXP_YIELD,
    #if P_UPDATED_EVS >= GEN_5
        .evYield_Speed = 3,
    #else
        .evYield_HP = 3,
    #endif
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .sourceGame = SOURCE_LLS,
        .noFlip = TRUE,
        .speciesName = _("Shaymin"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_ADVENT_YUKARI,
        .categoryName = _("Gratitude"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "Upon taking in the scent of a particular\n"
            "rare flower, Shaymin is enveloped in light\n"
            "and its tiny body transforms, confering\n"
            "the power of flight upon it."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ShayminSky,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ShayminSky,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShayminSky,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_ShayminSky,
        .shinyPalette = gMonShinyPalette_ShayminSky,
        .iconSprite = gMonIcon_ShayminSky,
        .iconPalIndex = 1,
        FOOTPRINT(Shaymin)
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sShayminSkyLevelUpLearnset,
        .teachableLearnset = sShayminSkyTeachableLearnset,
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define ARCEUS_EXP_YIELD 360
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define ARCEUS_EXP_YIELD 324
#else
    #define ARCEUS_EXP_YIELD 255
#endif
#if P_ARCEUS_UNIQUE_FORM_ICONS >= GEN_9
    #define ARCEUS_ICON(typeName, iconPal)        \
        .iconSprite = gMonIcon_Arceus ##typeName, \
        .iconPalIndex = iconPal,
#else
    #define ARCEUS_ICON(typeName, iconPal)   \
        .iconSprite = gMonIcon_ArceusNormal, \
        .iconPalIndex = 1,
#endif

#define ARCEUS_SPECIES_INFO(type, typeName, iconPal)                        \
    {                                                                       \
        .baseHP        = 120,                                               \
        .baseAttack    = 120,                                               \
        .baseDefense   = 120,                                               \
        .baseSpeed     = 120,                                               \
        .baseSpAttack  = 120,                                               \
        .baseSpDefense = 120,                                               \
        .types = MON_TYPES(type),                                           \
        .catchRate = 3,                                                     \
        .expYield = ARCEUS_EXP_YIELD,                                       \
        .evYield_HP = 3,                                                    \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 120,                                                   \
        .friendship = 0,                                                    \
        .growthRate = GROWTH_SLOW,                                          \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),          \
        .abilities = { ABILITY_MULTITYPE, ABILITY_NONE, ABILITY_NONE },     \
        .sourceGame = SOURCE_POFV,                                          \
        .speciesName = _("Arceus"),                                         \
        .cryId = CRY_PORYGON,                                               \
        .natDexNum = NATIONAL_DEX_ADVENT_RAN,                                   \
        .categoryName = _("Alpha"),                                         \
        .height = 32,                                                       \
        .weight = 3200,                                                     \
        .description = gArceusPokedexText,                                  \
        .pokemonScale = 256,                                                \
        .pokemonOffset = 0,                                                 \
        .trainerScale = 495,                                                \
        .trainerOffset = 10,                                                \
        .frontPic = gMonFrontPic_Arceus,                                    \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                            \
        .frontPicYOffset = 0,                                               \
        .frontAnimFrames = sAnims_Arceus,                                   \
        .frontAnimId = ANIM_GROW_VIBRATE,                                   \
        .backPic = gMonBackPic_Arceus,                                      \
        .backPicSize = MON_COORDS_SIZE(64, 64),                             \
        .backPicYOffset = 3,                                                \
        .backAnimId = BACK_ANIM_GROW_STUTTER,                               \
        .palette = gMonPalette_Arceus ##typeName,                           \
        .shinyPalette = gMonShinyPalette_Arceus ##typeName,                 \
        ARCEUS_ICON(typeName, iconPal)                                      \
        FOOTPRINT(Arceus)                                                   \
        FOLLOWER(                                                           \
            sPicTable_Arceus ##typeName,                                    \
            SIZE_64x64,                                                     \
            SHADOW_SIZE_M,                                                  \
            TRACKS_FOOT,                                                    \
            gFollowerPalette_Arceus ##typeName,                             \
            gShinyFollowerPalette_Arceus ##typeName                         \
        )                                                                   \
        .levelUpLearnset = sArceusLevelUpLearnset,                          \
        .teachableLearnset = sArceusTeachableLearnset,                      \
        .formSpeciesIdTable = sArceusFormSpeciesIdTable,                    \
        .formChangeTable = sArceusFormChangeTable,                          \
        .isMythical = TRUE,                                                 \
        .isFrontierBanned = TRUE,                                           \
    }

    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO(TYPE_DREAM, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO(TYPE_MIASMA,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO(TYPE_EARTH,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO(TYPE_BEAST,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO(TYPE_HEART,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO(TYPE_NATURE,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO(TYPE_WIND, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO(TYPE_REASON,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO(TYPE_FAITH,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO(TYPE_COSMIC,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
