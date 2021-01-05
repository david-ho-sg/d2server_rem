#pragma once

#ifndef _D2CONSTANTS_H
#define _D2CONSTANTS_H


/*
	Roster counters
*/
enum RosterCounter
{
	ROSTER_KILLS = 1,
	ROSTER_DEATHS = 2,
	ROSTER_ASSISTS = 3,
	ROSTER_GIVEUPS = 4,
};

/*
	Note: Only -1, -2, -3, -4 are the same as in vanilla
*/
enum CubeOutputTypes {
	CUBEOUTPUT_USETYPE = -1,
	CUBEOUTPUT_USEITEM = -2,
	CUBEOUTPUT_ITEMTYPE = -3,
	CUBEOUTPUT_ITEM = -4,
	CUBEOUTPUT_PORTAL = 1,
	CUBEOUTPUT_UBERQUEST,
	CUBEOUTPUT_UBERQUEST_FINAL,
	CUBEOUTPUT_COWPORTAL,
};

enum SMsgTypes
{
	SMSG_WM_MSG = 0,
	SMSG_WM_CMD = 1,
	SMSG_WM_KEY_UP = 2,
	SMSG_WM_KEY_DOWN = 3,
};

/*
http://d2mods.info/forum/viewtopic.php?f=8&t=61497, Thanks Necrolis!
*/
enum CollisionMasks
{
	COLLIDE_NONE = 0x0000,
	COLLIDE_BLOCK_PLAYER = 0x0001,      // 'black space' in arcane sanctuary, cliff walls etc
	COLLIDE_BLOCK_MISSILE = 0x0002,      // tile based obstacles you can't shoot over
	COLLIDE_WALL = 0x0004,
	COLLIDE_BLOCK_LEAP = 0x0008,
	COLLIDE_ALTERNATE_FLOOR = 0x0010,      // some floors have this set, others don't
	COLLIDE_BLANK = 0x0020,      // returned if the subtile is invalid
	COLLIDE_MISSILE = 0x0040,
	COLLIDE_PLAYER = 0x0080,
	COLLIDE_MONSTER = 0x0100,
	COLLIDE_ITEM = 0x0200,
	COLLIDE_OBJECT = 0x0400,
	COLLIDE_DOOR = 0x0800,
	COLLIDE_UNIT_RELATED = 0x1000,      // set for units sometimes, but not always
	COLLIDE_PET = 0x2000,
	COLLIDE_4000 = 0x4000,
	COLLIDE_CORPSE = 0x8000,      // also used by portals, but dead monsters are mask 0x8000

	COLLIDE_BLOCK_UNITS = COLLIDE_BLOCK_PLAYER,

	COLLISION_INVALID = (COLLIDE_BLANK | COLLIDE_WALL | COLLIDE_BLOCK_MISSILE | COLLIDE_BLOCK_PLAYER), //0x27
	COLLISION_LOS_THREAT = (COLLIDE_MONSTER | COLLIDE_MONSTER), //0x180
	COLLISION_ITEMS = (COLLIDE_BLOCK_UNITS | COLLIDE_DOOR), // 0x801
	COLLISION_LOS_WALL = (COLLIDE_WALL | COLLIDE_DOOR), // 0x804
	COLLISION_LOS = (COLLIDE_BLOCK_UNITS | COLLIDE_WALL | COLLIDE_DOOR), // 0x805
	COLLISION_VISDOOR = (COLLIDE_BLOCK_MISSILE | COLLIDE_WALL | COLLIDE_DOOR), // 0x806
	PLAYER_COLLISION_WW = (COLLIDE_OBJECT | COLLIDE_BLOCK_UNITS | COLLIDE_DOOR), // 0xC01
	PLAYER_COLLISION_DEFAULT = (COLLIDE_BLOCK_UNITS | COLLIDE_BLOCK_LEAP | COLLIDE_OBJECT | COLLIDE_DOOR | COLLIDE_UNIT_RELATED), // 0x1C09
	MONSTER_COLLISION_FLY = (COLLIDE_WALL | COLLIDE_DOOR | COLLIDE_UNIT_RELATED), // 0x1804
	MONSTER_COLLISION_DOORS = (COLLIDE_BLOCK_UNITS | COLLIDE_OBJECT | COLLIDE_UNIT_RELATED | COLLIDE_PET), // 0x3401
	MONSTER_COLLISION_DEFAULT = (COLLIDE_BLOCK_UNITS | COLLIDE_OBJECT | COLLIDE_DOOR | COLLIDE_UNIT_RELATED | COLLIDE_PET), // 0x3C01
	SPAWN_ITEM_COLLISION = (COLLIDE_BLOCK_UNITS | COLLIDE_ITEM | COLLIDE_OBJECT | COLLIDE_DOOR | COLLIDE_UNIT_RELATED | COLLIDE_PET), // 0x3E01
	SPAWN_UNIT_COLLISION = (COLLIDE_BLOCK_UNITS | COLLIDE_ALTERNATE_FLOOR | COLLIDE_MONSTER | COLLIDE_ITEM | COLLIDE_OBJECT | COLLIDE_DOOR | COLLIDE_UNIT_RELATED | COLLIDE_PET), // 0x3F11
	COLLISION_ALL_BUT_CORPSE = (COLLIDE_4000 | SPAWN_UNIT_COLLISION | COLLIDE_PLAYER | COLLIDE_MISSILE | COLLIDE_BLANK | COLLIDE_BLOCK_LEAP | COLLIDE_WALL | COLLIDE_BLOCK_MISSILE), //0x7FFF
	COLLISION_WARP = (COLLIDE_CORPSE | COLLIDE_PET | COLLIDE_UNIT_RELATED | COLLIDE_DOOR | COLLIDE_OBJECT | COLLIDE_ITEM | COLLIDE_ALTERNATE_FLOOR | COLLIDE_BLOCK_PLAYER), //0xBE11
	COLLISION_ALL = 0xFFFF,
};

/*
	Taken from http://d2mods.info/forum/viewtopic.php?p=412899#p412899, thx Necrolis
*/
enum QuestEvents
{
	QUESTEVENT_NPCACTIVATE = 0,
	QUESTEVENT_NPCDEACTIVATE = 2,
	QUESTEVENT_CHANGEDLEVEL = 3,
	QUESTEVENT_ITEMPICKEDUP = 4,
	QUESTEVENT_ITEMDROPPED = 5,
	QUESTEVENT_MONSTERKILLED = 8,
	QUESTEVENT_PLAYERDROPPEDWITHQUESTITEM = 9,
	QUESTEVENT_PLAYERLEAVESGAME = 10,
	QUESTEVENT_SCROLLMESSAGE = 11,
	QUESTEVENT_PLAYERSTARTEDGAME = 13,
	QUESTEVENT_PLAYERJOINEDGAME = 14
};

/*pUnit->0xC4*/
enum UnitFlags
{
	UNITFLAG_OPERATED = 0x1,
	UNITFLAG_SELECTABLE = 0x2,
	UNITFLAG_ATTACKABLE = 0x4,
	UNITFLAG_VALIDTARGET = 0x8,
	UNITFLAG_SEEDSET = 0x10,
	UNITFLAG_DEATHVANISH = 0x20,
	UNITFLAG_SKILLEND = 0x40,
	UNITFLAG_NEWMODE = 0x80,
	UNITFLAG_HOVERMSG = 0x100,
	UNITFLAG_HASHOVERBAR = 0x200,
	UNITFLAG_CLIENTSOUND = 0x400,
	UNITFLAG_SUMMONER = 0x800,
	UNITFLAG_REFRESH = 0x1000,
	UNITFLAG_NONEUTRAL = 0x2000,
	UNITFLAG_CLIENTUPDATE = 0x8000,
	UNITFLAG_DEAD = 0x10000,
	UNITFLAG_NOITEMS = 0x20000,
	UNITFLAG_AISTARTED = 0x80000,
	UNITFLAG_NEUTRAL = 0x200000,
	UNITFLAG_UNITINIT = 0x1000000,
	UNITFLAG_OTHERINIT = 0x2000000,
	UNITFLAG_NOEXP = 0x4000000,
	UNITFLAG_PETIGNORE = 0x40000000,
	UNITFLAG_ISREVIVE = 0x80000000,
};

enum D2DrawModes
{
	DRAW_MODE_ALPHA_25 = 0,
	DRAW_MODE_ALPHA_50 = 1,
	DRAW_MODE_ALPHA_75 = 2,
	DRAW_MODE_ALPHA_50_BRIGHT = 3,
	DRAW_MODE_INVERTED = 4,
	DRAW_MODE_NORMAL = 5,
	DRAW_MODE_ALPHA_25_BRIGHT = 6,
	DRAW_MODE_BRIGHT = 7
};

enum D2RenderModes
{
	VIDEO_MODE_GDI = 1,
	VIDEO_MODE_SOFTWARE = 2,
	VIDEO_MODE_DDRAW = 3,
	VIDEO_MODE_GLIDE = 4,
	VIDEO_MODE_OPENGL = 5, // UNUSED
	VIDEO_MODE_D3D = 6,
	VIDEO_MODE_RAVE = 7, // UNUSED
};


/*
	Game modes set by cmdline parameter -client, -server etc...
	Causes game loads specific dll instead of default D2Launch.dll
*/
enum D2GameModes
{
	GAME_MODE_MODSTATE0 = 0,	// "none.dll"
	GAME_MODE_CLIENT = 1,		// "D2Client.dll"
	GAME_MODE_SERVER = 2,		// "D2Server.dll"
	GAME_MODE_MULTIPLAYER = 3,	// "D2Multi.dll"
	GAME_MODE_LAUNCHER = 4,		// "D2Launch.dll"
	GAME_MODE_EXPAND = 5		// "D2EClient.dll"
};

enum UICover
{
	COVER_NONE = 0,
	COVER_LEFT = 1,
	COVER_RIGHT = 2,
	COVER_BOTH = 3
};

enum D2Locales
{
	LOCALE_ENG = 0,
	LOCALE_ESP = 1,
	LOCALE_DEU = 2,
	LOCALE_FRA = 3,
	LOCALE_POR = 4,
	LOCALE_ITA = 5,
	LOCALE_JPN = 6,
	LOCALE_KOR = 7,
	LOCALE_SIN = 8,
	LOCALE_CHI = 9,
	LOCALE_POL = 10,
	LOCALE_RUS = 11,
	LOCALE_ENU = 12,
};



enum D2Classes
{
	PLAYER_AMAZON = 0,
	PLAYER_SORCERESS = 1,
	PLAYER_NECROMANCER = 2,
	PLAYER_PALADIN = 3,
	PLAYER_BARBARIAN = 4,
	PLAYER_DRUID = 5,
	PLAYER_ASSASSIN = 6
};


enum ItemFlags
{
	ITEMFLAG_NEWITEM = 0x00000001,
	ITEMFLAG_TARGET = 0x00000002,
	ITEMFLAG_TARGETING = 0x00000004,
	ITEMFLAG_DELETED = 0x00000008,
	ITEMFLAG_IDENTIFIED = 0x00000010,
	ITEMFLAG_QUANTITY = 0x00000020,
	ITEMFLAG_WEAPONSET_IN = 0x00000040,
	ITEMFLAG_WEAPONSET_OUT = 0x00000080,
	ITEMFLAG_BROKEN = 0x00000100,
	ITEMFLAG_REPAIRED = 0x00000200,
	ITEMFLAG_UNKNOWN2 = 0x00000400,
	ITEMFLAG_SOCKETED = 0x00000800,
	ITEMFLAG_NON_SELLABLE = 0x00001000,
	ITEMFLAG_INSTORE = 0x00002000,
	ITEMFLAG_NOEQUIP = 0x00004000,
	ITEMFLAG_NAMED = 0x00008000,
	ITEMFLAG_ORGAN = 0x00010000,
	ITEMFLAG_SELLCHEAP = 0x00020000,
	ITEMFLAG_UNK5 = 0x00040000,
	ITEMFLAG_INIT = 0x00080000,
	ITEMFLAG_UNK6 = 0x00100000,
	ITEMFLAG_COMPACTSAVE = 0x00200000,
	ITEMFLAG_ETHEREAL = 0x00400000,
	ITEMFLAG_JUSTSAVED = 0x00800000,
	ITEMFLAG_PERSONALIZED = 0x01000000,
	ITEMFLAG_LOWQUALITY = 0x02000000,
	ITEMFLAG_RUNEWORD = 0x04000000,
	ITEMFLAG_ITEM = 0x08000000
};


enum UnitTypes
{
	UNIT_PLAYER = 0,
	UNIT_MONSTER = 1,
	UNIT_OBJECT = 2,
	UNIT_MISSILE = 3,
	UNIT_ITEM = 4,
	UNIT_TILE = 5
};

enum PvpFlags
{
	PVP_INVITED_YOU = 0x01, // Invited you, but you may not have accepted
	PVP_INVITED_BY_YOU = 0x02, // Invited by you, but he may not have accepted
	PVP_HOSTILED_YOU = 0x04, // Hostiled you, but you may not have hostiled him
	PVP_HOSTILED_BY_YOU = 0x08, // Hostiled by you, but he may not have hostiled you
	PVP_ALLIED = 0x10, // Allied
	PVP_ALLIED_WITH_YOU = 0x20 // Allied with you
};


enum ItemQuality
{
	ITEM_INVALID = 0,
	ITEM_LOW,
	ITEM_NORMAL,
	ITEM_SUPERIOR,
	ITEM_MAGIC,
	ITEM_SET,
	ITEM_RARE,
	ITEM_UNIQUE,
	ITEM_CRAFTED,
	ITEM_TEMPERED
};

enum ItemLocation
{
	ITEMLOC_NONE = 0,			// Not equipped
	ITEMLOC_HEAD,				// Head
	ITEMLOC_AMULET,			// Amulet
	ITEMLOC_BODY,				// Body armor
	ITEMLOC_RIGHT_PRIMARY,	// Right primary slot
	ITEMLOC_LEFT_PRIMARY,		// Left primary slot
	ITEMLOC_RIGHT_RING,		// Right ring
	ITEMLOC_LEFT_RING,		// Left ring
	ITEMLOC_BELT,				// Belt
	ITEMLOC_FEET,				// Feet
	ITEMLOC_GLOVES,			// Gloves
	ITEMLOC_RIGHT_SECONDARY,	// Right secondary slot
	ITEMLOC_LEFT_SECONDARY,	// Left secondary slot
};


/*
	Comments are Invetory.txt related records
*/
enum Storage
{
	STORAGE_INVENTORY = 0,
	STORAGE_EQUIP = 1,  // TRADE_PAGE_I
	STORAGE_TRADE = 2, // TRADE_PAGE_II
	STORAGE_CUBE = 3, // TRANSMORGIFY_BOX AKA CUBE
	STORAGE_STASH = 4, // BIG_BANK_PAGE | BANK_PAGE
	STORAGE_BELT = 5,
	STORAGE_SNULL = 255
};

/*
	Dump of Records from Inventory.Txt
*/
enum InventoryTxtRows
{
	INV_REC_AMAZON = 0,
	INV_REC_SORCERESS,
	INV_REC_NECROMANCER,
	INV_REC_PALADIN,
	INV_REC_BARB,
	INV_REC_MONSTER,
	INV_REC_TRADE_I,
	INV_REC_TRADE_II,
	INV_REC_BANK,
	INV_REC_CUBE,
	INV_REC_GUILD_VAULT,
	INV_REC_TROPY_CASE,
	INV_REC_BIG_BANK,
	INV_REC_HIRELING,
	INV_REC_DRUID,
	INV_REC_ASSASSIN,
	//--Expansion
	INV_REC_EXP_AMAZON = 16,
	INV_REC_EXP_SORCERESS,
	INV_REC_EXP_NECROMANCER,
	INV_REC_EXP_PALADIN,
	INV_REC_EXP_BARB,
	INV_REC_EXP_MONSTER,
	INV_REC_EXP_TRADE_I,
	INV_REC_EXP_TRADE_II,
	INV_REC_EXP_BANK,
	INV_REC_EXP_CUBE,
	INV_REC_EXP_GUILD_VAULT,
	INV_REC_EXP_TROPY_CASE,
	INV_REC_EXP_BIG_BANK,
	INV_REC_EXP_HIRELING,
	INV_REC_EXP_DRUID,
	INV_REC_EXP_ASSASSIN
};

enum
{
	NODE_STORAGE = 1,
	NODE_BELTSLOTS = 2,
	NODE_EQUIP = 3
};



enum ItemBuffers
{
	BUFFER_BODY = 1,
	BUFFER_BELT = 2,
	BUFFER_GROUND = 3,
	BUFFER_CURSOR = 4,
	BUFFER_WORLD = 5,
	BUFFER_SOCKET = 6
};


enum PlayerModes
{
	PLAYER_MODE_DEATH = 0,				// death
	PLAYER_MODE_STAND_OUTTOWN = 1,			// standing outside town
	PLAYER_MODE_WALK_OUTTOWN = 2,			// walking outside town
	PLAYER_MODE_RUN = 3,					// running
	PLAYER_MODE_BEING_HIT = 4,				// being hit
	PLAYER_MODE_STAND_INTOWN = 5,			// standing inside town
	PLAYER_MODE_WALK_INTOWN = 6,			// walking outside town
	PLAYER_MODE_ATTACK1 = 7,				// attacking 1
	PLAYER_MODE_ATTACK2 = 8,				// attacking 2
	PLAYER_MODE_BLOCK = 9,					// blocking
	PLAYER_MODE_CAST = 10,					// casting spell
	PLAYER_MODE_THROW = 11,					// throwing
	PLAYER_MODE_KICK = 12,					// kicking (assassin)
	PLAYER_MODE_USESKILL1 = 13,				// using skill 1
	PLAYER_MODE_USESKILL2 = 14,				// using skill 2
	PLAYER_MODE_USESKILL3 = 15,				// using skill 3
	PLAYER_MODE_USESKILL4 = 16,				// using skill 4
	PLAYER_MODE_DEAD = 17,					// dead
	PLAYER_MODE_SEQUENCE = 18,				// sequence
	PLAYER_MODE_BEING_KNOCKBACK = 19
};		// being knocked back



enum MonsterMode
{
	NPC_MODE_DEATH = 0,		// NPC death
	NPC_MODE_STAND = 1,			// NPC standing still
	NPC_MODE_WALK = 2,			// NPC walking
	NPC_MODE_BEING_HIT = 3,		// NPC getting hit
	NPC_MODE_ATTACK1 = 4,		// NPC attacking 1
	NPC_MODE_ATTACK2 = 5,		// NPC attacking 2
	NPC_MODE_BLOCK = 6,			// NPC blocking
	NPC_MODE_CAST = 7,			// NPC casting spell skill
	NPC_MODE_USESKILL1 = 8,		// NPC using skill 1
	NPC_MODE_USESKILL2 = 9,		// NPC using skill 2
	NPC_MODE_USESKILL3 = 10,		// NPC using skill 3
	NPC_MODE_USESKILL4 = 11,		// NPC using skill 4
	NPC_MODE_DEAD = 12,			// NPC dead
	NPC_MODE_BEING_KNOCKBACK = 13,// NPC being knocked back
	NPC_MODE_SEQUENCE = 14,		// NPC sequence
	NPC_MODE_RUN = 15			// NPC running
};


enum UICollision
{
	UICOLL_NONE = 0x0,
	UICOLL_CLOSEOTHER = 0x1,
	UICOLL_BLOCKOPEN = 0x2,
	UICOLL_ERROR = 0x3,
	UICOLL_STOPINTERACTION = 0x4
};

enum  UIModes
{
	UI_INVENTORY = 0x01
	, UI_CHARACTER = 0x02
	, UI_MINISKILL = 0x03
	, UI_SKILL = 0x04
	, UI_CHAT = 0x05
	, UI_NPCMENU = 0x08
	, UI_MAINMENU = 0x09
	, UI_AUTOMAP = 0x0a
	, UI_CONFIG = 0x0b
	, UI_NPCSHOP = 0x0c
	, UI_ALTDOWN = 0x0d
	, UI_ANVIL = 0x0e
	, UI_QUEST = 0x0f
	, UI_QUESTLOG = 0x11
	, UI_STATUSAREA = 0x12
	, UI_WPMENU = 0x14
	, UI_MINIPANEL = 0x15
	, UI_PARTY = 0x16
	, UI_TRADE = 0x17
	, UI_MSGS = 0x18
	, UI_STASH = 0x19
	, UI_CUBE = 0x1a
	, UI_BELT = 0x1f
	, UI_HELP = 0x21
	, UI_MERC = 0x24
	, UI_SCROLL = 0x25

};

enum D2Colors
{
	COL_WHITE = 0x0,
	COL_RED = 0x1,
	COL_LIGHTGREEN = 0x2,
	COL_BLUE = 0x3,
	COL_DARK_GOLD = 0x4,
	COL_GREY = 0x5,
	COL_BLACK = 0x6,
	COL_GOLD = 0x7,
	COL_ORANGE = 0x8,
	COL_YELLOW = 0x9,
	COL_DARKGREEN = 0xA,
	COL_PURPLE = 0xB,
	COL_GREEN = 0xC,
	COL_WHITE2 = 0xD,
	COL_BLACK2 = 0xE,
	COL_DARKWHITE = 0xF,
	COL_LIGHTGREY = 0x10,
};


enum UnitStats
{
	STAT_STRENGTH = 0x0,
	STAT_ENERGY = 0x1,
	STAT_DEXTERITY = 0x2,
	STAT_VITALITY = 0x3,
	STAT_STATPTS = 0x4,
	STAT_NEWSKILLS = 0x5,
	STAT_HITPOINTS = 0x6,
	STAT_MAXHP = 0x7,
	STAT_MANA = 0x8,
	STAT_MAXMANA = 0x9,
	STAT_STAMINA = 0xA,
	STAT_MAXSTAMINA = 0xB,
	STAT_LEVEL = 0xC,
	STAT_EXPERIENCE = 0xD,
	STAT_GOLD = 0xE,
	STAT_GOLDBANK = 0xF,
	STAT_ITEM_ARMOR_PERCENT = 0x10,
	STAT_ITEM_MAXDAMAGE_PERCENT = 0x11,
	STAT_ITEM_MINDAMAGE_PERCENT = 0x12,
	STAT_TOHIT = 0x13,
	STAT_TOBLOCK = 0x14,
	STAT_MINDAMAGE = 0x15,
	STAT_MAXDAMAGE = 0x16,
	STAT_SECONDARY_MINDAMAGE = 0x17,
	STAT_SECONDARY_MAXDAMAGE = 0x18,
	STAT_DAMAGEPERCENT = 0x19,
	STAT_MANARECOVERY = 0x1A,
	STAT_MANARECOVERYBONUS = 0x1B,
	STAT_STAMINARECOVERYBONUS = 0x1C,
	STAT_LASTEXP = 0x1D,
	STAT_NEXTEXP = 0x1E,
	STAT_ARMORCLASS = 0x1F,
	STAT_ARMORCLASS_VS_MISSILE = 0x20,
	STAT_ARMORCLASS_VS_HTH = 0x21,
	STAT_NORMAL_DAMAGE_REDUCTION = 0x22,
	STAT_MAGIC_DAMAGE_REDUCTION = 0x23,
	STAT_DAMAGERESIST = 0x24,
	STAT_MAGICRESIST = 0x25,
	STAT_MAXMAGICRESIST = 0x26,
	STAT_FIRERESIST = 0x27,
	STAT_MAXFIRERESIST = 0x28,
	STAT_LIGHTRESIST = 0x29,
	STAT_MAXLIGHTRESIST = 0x2A,
	STAT_COLDRESIST = 0x2B,
	STAT_MAXCOLDRESIST = 0x2C,
	STAT_POISONRESIST = 0x2D,
	STAT_MAXPOISONRESIST = 0x2E,
	STAT_DAMAGEAURA = 0x2F,
	STAT_FIREMINDAM = 0x30,
	STAT_FIREMAXDAM = 0x31,
	STAT_LIGHTMINDAM = 0x32,
	STAT_LIGHTMAXDAM = 0x33,
	STAT_MAGICMINDAM = 0x34,
	STAT_MAGICMAXDAM = 0x35,
	STAT_COLDMINDAM = 0x36,
	STAT_COLDMAXDAM = 0x37,
	STAT_COLDLENGTH = 0x38,
	STAT_POISONMINDAM = 0x39,
	STAT_POISONMAXDAM = 0x3A,
	STAT_POISONLENGTH = 0x3B,
	STAT_LIFEDRAINMINDAM = 0x3C,
	STAT_LIFEDRAINMAXDAM = 0x3D,
	STAT_MANADRAINMINDAM = 0x3E,
	STAT_MANADRAINMAXDAM = 0x3F,
	STAT_STAMDRAINMINDAM = 0x40,
	STAT_STAMDRAINMAXDAM = 0x41,
	STAT_STUNLENGTH = 0x42,
	STAT_VELOCITYPERCENT = 0x43,
	STAT_ATTACKRATE = 0x44,
	STAT_OTHER_ANIMRATE = 0x45,
	STAT_QUANTITY = 0x46,
	STAT_VALUE = 0x47,
	STAT_DURABILITY = 0x48,
	STAT_MAXDURABILITY = 0x49,
	STAT_HPREGEN = 0x4A,
	STAT_ITEM_MAXDURABILITY_PERCENT = 0x4B,
	STAT_ITEM_MAXHP_PERCENT = 0x4C,
	STAT_ITEM_MAXMANA_PERCENT = 0x4D,
	STAT_ITEM_ATTACKERTAKESDAMAGE = 0x4E,
	STAT_ITEM_GOLDBONUS = 0x4F,
	STAT_ITEM_MAGICBONUS = 0x50,
	STAT_ITEM_KNOCKBACK = 0x51,
	STAT_ITEM_TIMEDURATION = 0x52,
	STAT_ITEM_ADDCLASSSKILLS = 0x53,
	STAT_UNSENTPARAM1 = 0x54,
	STAT_ITEM_ADDEXPERIENCE = 0x55,
	STAT_ITEM_HEALAFTERKILL = 0x56,
	STAT_ITEM_REDUCEDPRICES = 0x57,
	STAT_ITEM_DOUBLEHERBDURATION = 0x58,
	STAT_ITEM_LIGHTRADIUS = 0x59,
	STAT_ITEM_LIGHTCOLOR = 0x5A,
	STAT_ITEM_REQ_PERCENT = 0x5B,
	STAT_ITEM_LEVELREQ = 0x5C,
	STAT_ITEM_FASTERATTACKRATE = 0x5D,
	STAT_ITEM_LEVELREQPCT = 0x5E,
	STAT_LASTBLOCKFRAME = 0x5F,
	STAT_ITEM_FASTERMOVEVELOCITY = 0x60,
	STAT_ITEM_NONCLASSSKILL = 0x61,
	STAT_STATE = 0x62,
	STAT_ITEM_FASTERGETHITRATE = 0x63,
	STAT_MONSTER_PLAYERCOUNT = 0x64,
	STAT_SKILL_POISON_OVERRIDE_LENGTH = 0x65,
	STAT_ITEM_FASTERBLOCKRATE = 0x66,
	STAT_SKILL_BYPASS_UNDEAD = 0x67,
	STAT_SKILL_BYPASS_DEMONS = 0x68,
	STAT_ITEM_FASTERCASTRATE = 0x69,
	STAT_SKILL_BYPASS_BEASTS = 0x6A,
	STAT_ITEM_SINGLESKILL = 0x6B,
	STAT_ITEM_RESTINPEACE = 0x6C,
	STAT_CURSE_RESISTANCE = 0x6D,
	STAT_ITEM_POISONLENGTHRESIST = 0x6E,
	STAT_ITEM_NORMALDAMAGE = 0x6F,
	STAT_ITEM_HOWL = 0x70,
	STAT_ITEM_STUPIDITY = 0x71,
	STAT_ITEM_DAMAGETOMANA = 0x72,
	STAT_ITEM_IGNORETARGETAC = 0x73,
	STAT_ITEM_FRACTIONALTARGETAC = 0x74,
	STAT_ITEM_PREVENTHEAL = 0x75,
	STAT_ITEM_HALFFREEZEDURATION = 0x76,
	STAT_ITEM_TOHIT_PERCENT = 0x77,
	STAT_ITEM_DAMAGETARGETAC = 0x78,
	STAT_ITEM_DEMONDAMAGE_PERCENT = 0x79,
	STAT_ITEM_UNDEADDAMAGE_PERCENT = 0x7A,
	STAT_ITEM_DEMON_TOHIT = 0x7B,
	STAT_ITEM_UNDEAD_TOHIT = 0x7C,
	STAT_ITEM_THROWABLE = 0x7D,
	STAT_ITEM_ELEMSKILL = 0x7E,
	STAT_ITEM_ALLSKILLS = 0x7F,
	STAT_ITEM_ATTACKERTAKESLIGHTDAMAGE = 0x80,
	STAT_IRONMAIDEN_LEVEL = 0x81,
	STAT_LIFETAP_LEVEL = 0x82,
	STAT_THORNS_PERCENT = 0x83,
	STAT_BONEARMOR = 0x84,
	STAT_BONEARMORMAX = 0x85,
	STAT_ITEM_FREEZE = 0x86,
	STAT_ITEM_OPENWOUNDS = 0x87,
	STAT_ITEM_CRUSHINGBLOW = 0x88,
	STAT_ITEM_KICKDAMAGE = 0x89,
	STAT_ITEM_MANAAFTERKILL = 0x8A,
	STAT_ITEM_HEALAFTERDEMONKILL = 0x8B,
	STAT_ITEM_EXTRABLOOD = 0x8C,
	STAT_ITEM_DEADLYSTRIKE = 0x8D,
	STAT_ITEM_ABSORBFIRE_PERCENT = 0x8E,
	STAT_ITEM_ABSORBFIRE = 0x8F,
	STAT_ITEM_ABSORBLIGHT_PERCENT = 0x90,
	STAT_ITEM_ABSORBLIGHT = 0x91,
	STAT_ITEM_ABSORBMAGIC_PERCENT = 0x92,
	STAT_ITEM_ABSORBMAGIC = 0x93,
	STAT_ITEM_ABSORBCOLD_PERCENT = 0x94,
	STAT_ITEM_ABSORBCOLD = 0x95,
	STAT_ITEM_SLOW = 0x96,
	STAT_ITEM_AURA = 0x97,
	STAT_ITEM_INDESCTRUCTIBLE = 0x98,
	STAT_ITEM_CANNOTBEFROZEN = 0x99,
	STAT_ITEM_STAMINADRAINPCT = 0x9A,
	STAT_ITEM_REANIMATE = 0x9B,
	STAT_ITEM_PIERCE = 0x9C,
	STAT_ITEM_MAGICARROW = 0x9D,
	STAT_ITEM_EXPLOSIVEARROW = 0x9E,
	STAT_ITEM_THROW_MINDAMAGE = 0x9F,
	STAT_ITEM_THROW_MAXDAMAGE = 0xA0,
	STAT_SKILL_HANDOFATHENA = 0xA1,
	STAT_SKILL_STAMINAPERCENT = 0xA2,
	STAT_SKILL_PASSIVE_STAMINAPERCENT = 0xA3,
	STAT_SKILL_CONCENTRATION = 0xA4,
	STAT_SKILL_ENCHANT = 0xA5,
	STAT_SKILL_PIERCE = 0xA6,
	STAT_SKILL_CONVICTION = 0xA7,
	STAT_SKILL_CHILLINGARMOR = 0xA8,
	STAT_SKILL_FRENZY = 0xA9,
	STAT_SKILL_DECREPIFY = 0xAA,
	STAT_SKILL_ARMOR_PERCENT = 0xAB,
	STAT_ALIGNMENT = 0xAC,
	STAT_TARGET0 = 0xAD,
	STAT_TARGET1 = 0xAE,
	STAT_GOLDLOST = 0xAF,
	STAT_CONVERSION_LEVEL = 0xB0,
	STAT_CONVERSION_MAXHP = 0xB1,
	STAT_UNIT_DOOVERLAY = 0xB2,
	STAT_ATTACK_VS_MONTYPE = 0xB3,
	STAT_DAMAGE_VS_MONTYPE = 0xB4,
	STAT_FADE = 0xB5,
	STAT_ARMOR_OVERRIDE_PERCENT = 0xB6,
	STAT_UNUSED183 = 0xB7,
	STAT_UNUSED184 = 0xB8,
	STAT_UNUSED185 = 0xB9,
	STAT_UNUSED186 = 0xBA,
	STAT_UNUSED187 = 0xBB,
	STAT_ITEM_ADDSKILL_TAB = 0xBC,
	STAT_UNUSED189 = 0xBD,
	STAT_UNUSED190 = 0xBE,
	STAT_UNUSED191 = 0xBF,
	STAT_UNUSED192 = 0xC0,
	STAT_UNUSED193 = 0xC1,
	STAT_ITEM_NUMSOCKETS = 0xC2,
	STAT_ITEM_SKILLONATTACK = 0xC3,
	STAT_ITEM_SKILLONKILL = 0xC4,
	STAT_ITEM_SKILLONDEATH = 0xC5,
	STAT_ITEM_SKILLONHIT = 0xC6,
	STAT_ITEM_SKILLONLEVELUP = 0xC7,
	STAT_UNUSED200 = 0xC8,
	STAT_ITEM_SKILLONGETHIT = 0xC9,
	STAT_UNUSED202 = 0xCA,
	STAT_UNUSED203 = 0xCB,
	STAT_ITEM_CHARGED_SKILL = 0xCC,
	STAT_UNUSED204 = 0xCD,
	STAT_UNUSED205 = 0xCE,
	STAT_UNUSED206 = 0xCF,
	STAT_UNUSED207 = 0xD0,
	STAT_UNUSED208 = 0xD1,
	STAT_UNUSED209 = 0xD2,
	STAT_UNUSED210 = 0xD3,
	STAT_UNUSED211 = 0xD4,
	STAT_UNUSED212 = 0xD5,
	STAT_ITEM_ARMOR_PERLEVEL = 0xD6,
	STAT_ITEM_ARMORPERCENT_PERLEVEL = 0xD7,
	STAT_ITEM_HP_PERLEVEL = 0xD8,
	STAT_ITEM_MANA_PERLEVEL = 0xD9,
	STAT_ITEM_MAXDAMAGE_PERLEVEL = 0xDA,
	STAT_ITEM_MAXDAMAGE_PERCENT_PERLEVEL = 0xDB,
	STAT_ITEM_STRENGTH_PERLEVEL = 0xDC,
	STAT_ITEM_DEXTERITY_PERLEVEL = 0xDD,
	STAT_ITEM_ENERGY_PERLEVEL = 0xDE,
	STAT_ITEM_VITALITY_PERLEVEL = 0xDF,
	STAT_ITEM_TOHIT_PERLEVEL = 0xE0,
	STAT_ITEM_TOHITPERCENT_PERLEVEL = 0xE1,
	STAT_ITEM_COLD_DAMAGEMAX_PERLEVEL = 0xE2,
	STAT_ITEM_FIRE_DAMAGEMAX_PERLEVEL = 0xE3,
	STAT_ITEM_LTNG_DAMAGEMAX_PERLEVEL = 0xE4,
	STAT_ITEM_POIS_DAMAGEMAX_PERLEVEL = 0xE5,
	STAT_ITEM_RESIST_COLD_PERLEVEL = 0xE6,
	STAT_ITEM_RESIST_FIRE_PERLEVEL = 0xE7,
	STAT_ITEM_RESIST_LTNG_PERLEVEL = 0xE8,
	STAT_ITEM_RESIST_POIS_PERLEVEL = 0xE9,
	STAT_ITEM_ABSORB_COLD_PERLEVEL = 0xEA,
	STAT_ITEM_ABSORB_FIRE_PERLEVEL = 0xEB,
	STAT_ITEM_ABSORB_LTNG_PERLEVEL = 0xEC,
	STAT_ITEM_ABSORB_POIS_PERLEVEL = 0xED,
	STAT_ITEM_THORNS_PERLEVEL = 0xEE,
	STAT_ITEM_FIND_GOLD_PERLEVEL = 0xEF,
	STAT_ITEM_FIND_MAGIC_PERLEVEL = 0xF0,
	STAT_ITEM_REGENSTAMINA_PERLEVEL = 0xF1,
	STAT_ITEM_STAMINA_PERLEVEL = 0xF2,
	STAT_ITEM_DAMAGE_DEMON_PERLEVEL = 0xF3,
	STAT_ITEM_DAMAGE_UNDEAD_PERLEVEL = 0xF4,
	STAT_ITEM_TOHIT_DEMON_PERLEVEL = 0xF5,
	STAT_ITEM_TOHIT_UNDEAD_PERLEVEL = 0xF6,
	STAT_ITEM_CRUSHINGBLOW_PERLEVEL = 0xF7,
	STAT_ITEM_OPENWOUNDS_PERLEVEL = 0xF8,
	STAT_ITEM_KICK_DAMAGE_PERLEVEL = 0xF9,
	STAT_ITEM_DEADLYSTRIKE_PERLEVEL = 0xFA,
	STAT_ITEM_FIND_GEMS_PERLEVEL = 0xFB,
	STAT_ITEM_REPLENISH_DURABILITY = 0xFC,
	STAT_ITEM_REPLENISH_QUANTITY = 0xFD,
	STAT_ITEM_EXTRA_STACK = 0xFE,
	STAT_ITEM_FIND_ITEM = 0xFF,
	STAT_ITEM_SLASH_DAMAGE = 0x100,
	STAT_ITEM_SLASH_DAMAGE_PERCENT = 0x101,
	STAT_ITEM_CRUSH_DAMAGE = 0x102,
	STAT_ITEM_CRUSH_DAMAGE_PERCENT = 0x103,
	STAT_ITEM_THRUST_DAMAGE = 0x104,
	STAT_ITEM_THRUST_DAMAGE_PERCENT = 0x105,
	STAT_ITEM_ABSORB_SLASH = 0x106,
	STAT_ITEM_ABSORB_CRUSH = 0x107,
	STAT_ITEM_ABSORB_THRUST = 0x108,
	STAT_ITEM_ABSORB_SLASH_PERCENT = 0x109,
	STAT_ITEM_ABSORB_CRUSH_PERCENT = 0x10A,
	STAT_ITEM_ABSORB_THRUST_PERCENT = 0x10B,
	STAT_ITEM_ARMOR_BYTIME = 0x10C,
	STAT_ITEM_ARMORPERCENT_BYTIME = 0x10D,
	STAT_ITEM_HP_BYTIME = 0x10E,
	STAT_ITEM_MANA_BYTIME = 0x10F,
	STAT_ITEM_MAXDAMAGE_BYTIME = 0x110,
	STAT_ITEM_MAXDAMAGE_PERCENT_BYTIME = 0x111,
	STAT_ITEM_STRENGTH_BYTIME = 0x112,
	STAT_ITEM_DEXTERITY_BYTIME = 0x113,
	STAT_ITEM_ENERGY_BYTIME = 0x114,
	STAT_ITEM_VITALITY_BYTIME = 0x115,
	STAT_ITEM_TOHIT_BYTIME = 0x116,
	STAT_ITEM_TOHITPERCENT_BYTIME = 0x117,
	STAT_ITEM_COLD_DAMAGEMAX_BYTIME = 0x118,
	STAT_ITEM_FIRE_DAMAGEMAX_BYTIME = 0x119,
	STAT_ITEM_LTNG_DAMAGEMAX_BYTIME = 0x11A,
	STAT_ITEM_POIS_DAMAGEMAX_BYTIME = 0x11B,
	STAT_ITEM_RESIST_COLD_BYTIME = 0x11C,
	STAT_ITEM_RESIST_FIRE_BYTIME = 0x11D,
	STAT_ITEM_RESIST_LTNG_BYTIME = 0x11E,
	STAT_ITEM_RESIST_POIS_BYTIME = 0x11F,
	STAT_ITEM_ABSORB_COLD_BYTIME = 0x120,
	STAT_ITEM_ABSORB_FIRE_BYTIME = 0x121,
	STAT_ITEM_ABSORB_LTNG_BYTIME = 0x122,
	STAT_ITEM_ABSORB_POIS_BYTIME = 0x123,
	STAT_ITEM_FIND_GOLD_BYTIME = 0x124,
	STAT_ITEM_FIND_MAGIC_BYTIME = 0x125,
	STAT_ITEM_REGENSTAMINA_BYTIME = 0x126,
	STAT_ITEM_STAMINA_BYTIME = 0x127,
	STAT_ITEM_DAMAGE_DEMON_BYTIME = 0x128,
	STAT_ITEM_DAMAGE_UNDEAD_BYTIME = 0x129,
	STAT_ITEM_TOHIT_DEMON_BYTIME = 0x12A,
	STAT_ITEM_TOHIT_UNDEAD_BYTIME = 0x12B,
	STAT_ITEM_CRUSHINGBLOW_BYTIME = 0x12C,
		STAT_ITEM_OPENWOUNDS_BYTIME = 0x12D,
		STAT_ITEM_KICK_DAMAGE_BYTIME = 0x12E,
		STAT_ITEM_DEADLYSTRIKE_BYTIME = 0x12F,
		STAT_ITEM_FIND_GEMS_BYTIME = 0x130,
		STAT_ITEM_PIERCE_COLD = 0x131,
		STAT_ITEM_PIERCE_FIRE = 0x132,
		STAT_ITEM_PIERCE_LTNG = 0x133,
		STAT_ITEM_PIERCE_POIS = 0x134,
		STAT_ITEM_DAMAGE_VS_MONSTER = 0x135,
		STAT_ITEM_DAMAGE_PERCENT_VS_MONSTER = 0x136,
		STAT_ITEM_TOHIT_VS_MONSTER = 0x137,
		STAT_ITEM_TOHIT_PERCENT_VS_MONSTER = 0x138,
		STAT_ITEM_AC_VS_MONSTER = 0x139,
		STAT_ITEM_AC_PERCENT_VS_MONSTER = 0x13A,
		STAT_FIRELENGTH = 0x13B,
		STAT_BURNINGMIN = 0x13C,
		STAT_BURNINGMAX = 0x13D,
		STAT_PROGRESSIVE_DAMAGE = 0x13E,
		STAT_PROGRESSIVE_STEAL = 0x13F,
		STAT_PROGRESSIVE_OTHER = 0x140,
		STAT_PROGRESSIVE_FIRE = 0x141,
		STAT_PROGRESSIVE_COLD = 0x142,
		STAT_PROGRESSIVE_LIGHTNING = 0x143,
		STAT_ITEM_EXTRA_CHARGES = 0x144,
		STAT_PROGRESSIVE_TOHIT = 0x145,
		STAT_POISON_COUNT = 0x146,
		STAT_DAMAGE_FRAMERATE = 0x147,
		STAT_PIERCE_IDX = 0x148,
		STAT_PASSIVE_FIRE_MASTERY = 0x149,
		STAT_PASSIVE_LTNG_MASTERY = 0x14A,
		STAT_PASSIVE_COLD_MASTERY = 0x14B,
		STAT_PASSIVE_POIS_MASTERY = 0x14C,
		STAT_PASSIVE_FIRE_PIERCE = 0x14D,
		STAT_PASSIVE_LTNG_PIERCE = 0x14E,
		STAT_PASSIVE_COLD_PIERCE = 0x14F,
		STAT_PASSIVE_POIS_PIERCE = 0x150,
		STAT_PASSIVE_CRITICAL_STRIKE = 0x151,
		STAT_PASSIVE_DODGE = 0x152,
		STAT_PASSIVE_AVOID = 0x153,
		STAT_PASSIVE_EVADE = 0x154,
		STAT_PASSIVE_WARMTH = 0x155,
		STAT_PASSIVE_MASTERY_MELEE_TH = 0x156,
		STAT_PASSIVE_MASTERY_MELEE_DMG = 0x157,
		STAT_PASSIVE_MASTERY_MELEE_CRIT = 0x158,
		STAT_PASSIVE_MASTERY_THROW_TH = 0x159,
		STAT_PASSIVE_MASTERY_THROW_DMG = 0x15A,
		STAT_PASSIVE_MASTERY_THROW_CRIT = 0x15B,
		STAT_PASSIVE_WEAPONBLOCK = 0x15C,
		STAT_PASSIVE_SUMMON_RESIST = 0x15D,
		STAT_MODIFIERLIST_SKILL = 0x15E,
		STAT_MODIFIERLIST_LEVEL = 0x15F,
		STAT_LAST_SENT_HP_PCT = 0x160,
		STAT_SOURCE_UNIT_TYPE = 0x161,
		STAT_SOURCE_UNIT_ID = 0x162,
		STAT_SHORTPARAM1 = 0x163,
		STAT_QUESTITEMDIFFICULTY = 0x164,
		STAT_PASSIVE_MAG_MASTERY = 0x165,
		STAT_PASSIVE_MAG_PIERCE = 0x166
};


namespace ExBuffs
{
	enum
	{
		BUFF_BC = 0,
		BUFF_BO = 1,
		BUFF_SHOUT = 2,
		BUFF_AMP = 3,
		BUFF_LR = 4,
		BUFF_CLEAN = 5,
		BUFF_CONC = 6,
		BUFF_CONV = 7,
		BUFF_FANA = 8,
		BUFF_HF = 9,
		BUFF_MEDI = 10,
		BUFF_MIGHT = 11,
		BUFF_SALV = 12,
		BUFF_VIGOR = 13,
		BUFF_HS = 14,
		BUFF_ENCH = 15,
		BUFF_SM = 16,
		BUFF_OAK = 17,
		BUFF_BOS = 18,
		BUFF_FADE = 19,
		BUFF_BARMOR = 20,
		BUFF_ES = 21,
		BUFF_TS = 22,
		BUFF_CYCLONE = 23,
		BUFF_HURRI = 24

	};
}

namespace ExSounds
{
	enum
	{
		STAND_SELECT = 2,
		STAND_CLICK = 4,
		STAND_WINOPEN = 5,
		STAND_LEVLEUP = 7,
		STAND_ARCANEPORTAL = 2556,
		D2EX_IMPRESSIVE = 4699,
		D2EX_DOUBLEKILL = 4700,
		D2EX_FIRSTBLOOD = 4701,
		D2EX_HEADSHOT = 4702,
		D2EX_HOLYSHIT = 4703,
		D2EX_HUMILATION = 4704,
		D2EX_KILLINGSPREE = 4705,
		D2EX_MONSTERKILL = 4706,
		D2EX_PERFECT = 4707,
		D2EX_PLAY = 4708,
		D2EX_PREPARE = 4709,
		D2EX_TRIPLEKILL = 4710,
		D2EX_UNSTOPPABLE = 4711
	};
}


namespace UICall
{
	enum
	{
		CHARACTER = 0,
		INVENTORY = 3,
		PARTYSCREEN = 6,
		HIRELINGS = 9,
		MSGS = 12,
		QUEST = 15,
		HELP = 18,
		AMAP_NAMES = 21,
		SKILLTREE = 24,
		MINISKILL = 27,
		POTIONS = 66,
		SHOWITEMS = 111,
		CLEARSCREEN = 114,
		CLEARMSGS = 123,
		HIRELING = 162,
		ESCMENU = 168
	};
}

enum D2MenuTypes
{
	D2MENU_NORMAL = 0,
	D2MENU_SWITCH = 1,
	D2MENU_BAR = 2,
	D2MENU_KEY = 3, //My addition
	D2MENU_SWITCHEX = 4, // My additions
	D2MENU_STATIC = -1
};

namespace CellFiles
{
	const char * PARTY = "data\\D2Ex\\partyboxes";
	const char * EDITBOX = "data\\GLOBAL\\UI\\FrontEnd\\textbox2";
	const char * CHECKBOX = "data\\D2Ex\\checkbox";
	const char * SELECTBOX = "data\\global\\ui\\FrontEnd\\clickbox";
	const char * SMALLBUTTON = "data\\global\\ui\\FrontEnd\\CancelButtonBlank";
	const char * MEDIUMBUTTON = "data\\global\\ui\\FrontEnd\\MediumButtonBlank2";
	const char * WIDEBUTTON = "data\\global\\ui\\FrontEnd\\3WideButtonBlank";
	const char * NARROWBUTTONUP = "data\\global\\ui\\FrontEnd\\WideButtonBlank02";
	const char * NARROWBUTTONDOWN = "data\\global\\ui\\FrontEnd\\NarrowButtonBlank02";
	const char * TALLBUTTON = "data\\global\\ui\\CharSelect\\TallButtonBlank";

	const char * PARTYBUTTON = "data\\global\\ui\\MENU\\partybuttons";
	const char * CHATBUTTON = "data\\global\\ui\\BIGMENU\\chatrightbuttons";
	const char * BUYSELLBUTTON = "data\\global\\ui\\PANEL\\buysellbtn";
	const char * SCROLLBAR = "data\\D2Ex\\ScrollBar";

	const char * BLOBS = "data\\D2Ex\\Blobs";
	const char * SKULLWIDGET = "data\\global\\ui\\WIDGETS\\optskull";
	const char * MINIMAPICONS = "data\\global\\ui\\MINIMAP\\mapicons";
	const char * MONINDICATOR = "data\\global\\ui\\FONT\\MonsterIndicators";

	const char * GUILDSCREEN = "data\\global\\ui\\PANEL\\steegstonebckg";
	const char * PATCHBALL = "data\\global\\ui\\FrontEnd\\DownloadPatchBall2";
	const char * PATCHBCKG = "data\\global\\ui\\FrontEnd\\DownloadPatchBckg";
	const char * POPUP = "data\\global\\ui\\FrontEnd\\PopUpOKCancel2";
	const char * MULTIRES = "data\\D2Ex\\ExMultiRes";
	const char * CONTROLPANEL = "data\\global\\ui\\PANEL\\CtrlPnl7";
	const char * CONTROLPANEL800 = "data\\global\\ui\\PANEL\\800CtrlPnl7";
	const char * BORDERFRAME800 = "data\\global\\ui\\PANEL\\800BorderFrame";
}

namespace ResImages
{
	const char *  D2MRChooseResolutionBack = "data\\D2MultiRes\\D2MRChooseResolutionBack";
	const char *  D2MRFancyBorderBottom = "data\\D2MultiRes\\D2MRFancyBorderBottom";
	const char *  D2MRFancyBorderCorner = "data\\D2MultiRes\\D2MRFancyBorderCorner";
	const char *  D2MRFancyBorderInterfaceLeft = "data\\D2MultiRes\\D2MRFancyBorderInterfaceLeft";
	const char *  D2MRFancyBorderInterfaceRight = "data\\D2MultiRes\\D2MRFancyBorderInterfaceRight";
	const char *  D2MRFancyBorderLeft = "data\\D2MultiRes\\D2MRFancyBorderLeft";
	const char *  D2MRFancyBorderRight = "data\\D2MultiRes\\D2MRFancyBorderRight";
	const char *  D2MRFancyBorderTop = "data\\D2MultiRes\\D2MRFancyBorderTop";
	const char *  D2MRFancyHorizontalBar = "data\\D2MultiRes\\D2MRFancyHorizontalBar";
	const char *  D2MRFancyPanelBar = "data\\D2MultiRes\\D2MRFancyPanelBar";
	const char *  D2MRFancyPanelLeft = "data\\D2MultiRes\\D2MRFancyPanelLeft";
	const char *  D2MRFancyPanelRight = "data\\D2MultiRes\\D2MRFancyPanelRight";
	const char *  D2MRFancyVerticalBar = "data\\D2MultiRes\\D2MRFancyVerticalBar";
	const char *  D2MRHorizontalBlackBar = "data\\D2MultiRes\\D2MRHorizontalBlackBar";
	const char *  D2MRHorizontalBorder = "data\\D2MultiRes\\D2MRHorizontalBorder";
	const char *  D2MRStoneBack = "data\\D2MultiRes\\D2MRStoneBack";
	const char *  D2MRVerticalBlackBar = "data\\D2MultiRes\\D2MRVerticalBlackBar";
	const char *  D2MRVerticalBorder = "data\\D2MultiRes\\D2MRVerticalBorder";
}

enum ControlTypes
{
	EDITBOX = 0x01,
	IMAGE = 0x02,
	ANIMIMAGE = 0x03, //game handles 0x03 as 0x02
	TEXTBOX = 0x04,
	SCROLLBAR = 0x05,
	BUTTON = 0x06,
	LIST = 0x07,
	TIMER = 0x08,
	SMACK = 0x09,
	PROGRESSBAR = 0x0a,
	POPUP = 0x0b,
	ACCOUNTLIST = 0x0c
};

enum UpdateClient
{
	UPDATE_ASK_TO_TRADE = 0x0,
	UPDATE_ASKED_TO_TRADE = 0x1,
	UPDATE_ACCEPT_TRADE = 0x5,
	UPDATE_OPENTRADE = 0x6,
	UPDATE_SELLER_NOROOM = 0x9,
	UPDATE_BUYER_NOROOM = 0xA,
	UPDATE_CLOSE_TRADE = 0xC,
	UPDATE_TRADE_DONE = 0xD,
	UPADTE_RED_CHECKBOX = 0xE,
	UPDATE_NORM_CHECKBOX = 0xF,
	UPADTE_OPEN_STASH = 0x10,
	UPDATE_OPEN_CUBE = 0x15,
};


enum PartyButtons
{
	PB_LOOT = 1,
	PB_MUTE = 2,
	PB_SQUELCH = 3,
	PB_HOSTILE = 4,
	PB_INVITE_PLAYER = 6,
	PB_INVITE_CANCEL = 7,
	PB_INVITE_ACCEPT = 8,
	PB_LEAVE_PARTY = 9,
	// -- my addtion below
	PB_SPECATE = 10,
};

enum D2StatesTxt
{
	STATE_FREEZE = 0x1,
	STATE_POISON = 0x2,
	STATE_RESISTFIRE = 0x3,
	STATE_RESISTCOLD = 0x4,
	STATE_RESISTLIGHT = 0x5,
	STATE_RESISTMAGIC = 0x6,
	STATE_PLAYERBODY = 0x7,
	STATE_RESISTALL = 0x8,
	STATE_AMPLIFYDAMAGE = 0x9,
	STATE_FROZENARMOR = 0xA,
	STATE_COLD = 0xB,
	STATE_INFERNO = 0xC,
	STATE_BLAZE = 0xD,
	STATE_BONEARMOR = 0xE,
	STATE_CONCENTRATE = 0xF,
	STATE_ENCHANT = 0x10,
	STATE_INNERSIGHT = 0x11,
	STATE_SKILL_MOVE = 0x12,
	STATE_WEAKEN = 0x13,
	STATE_CHILLINGARMOR = 0x14,
	STATE_STUNNED = 0x15,
	STATE_SPIDERLAY = 0x16,
	STATE_DIMVISION = 0x17,
	STATE_SLOWED = 0x18,
	STATE_FETISHAURA = 0x19,
	STATE_SHOUT = 0x1A,
	STATE_TAUNT = 0x1B,
	STATE_CONVICTION = 0x1C,
	STATE_CONVICTED = 0x1D,
	STATE_ENERGYSHIELD = 0x1E,
	STATE_VENOMCLAWS = 0x1F,
	STATE_BATTLEORDERS = 0x20,
	STATE_MIGHT = 0x21,
	STATE_PRAYER = 0x22,
	STATE_HOLYFIRE = 0x23,
	STATE_THORNS = 0x24,
	STATE_DEFIANCE = 0x25,
	STATE_THUNDERSTORM = 0x26,
	STATE_LIGHTNINGBOLT = 0x27,
	STATE_BLESSEDAIM = 0x28,
	STATE_STAMINA = 0x29,
	STATE_CONCENTRATION = 0x2A,
	STATE_HOLYWIND = 0x2B,
	STATE_HOLYWINDCOLD = 0x2C,
	STATE_CLEANSING = 0x2D,
	STATE_HOLYSHOCK = 0x2E,
	STATE_SANCTUARY = 0x2F,
	STATE_MEDITATION = 0x30,
	STATE_FANATICISM = 0x31,
	STATE_REDEMPTION = 0x32,
	STATE_BATTLECOMMAND = 0x33,
	STATE_PREVENTHEAL = 0x34,
	STATE_CONVERSION = 0x35,
	STATE_UNINTERRUPTABLE = 0x36,
	STATE_IRONMAIDEN = 0x37,
	STATE_TERROR = 0x38,
	STATE_ATTRACT = 0x39,
	STATE_LIFETAP = 0x3A,
	STATE_CONFUSE = 0x3B,
	STATE_DECREPIFY = 0x3C,
	STATE_LOWERRESIST = 0x3D,
	STATE_OPENWOUNDS = 0x3E,
	STATE_DOPPLEZON = 0x3F,
	STATE_CRITICALSTRIKE = 0x40,
	STATE_DODGE = 0x41,
	STATE_AVOID = 0x42,
	STATE_PENETRATE = 0x43,
	STATE_EVADE = 0x44,
	STATE_PIERCE = 0x45,
	STATE_WARMTH = 0x46,
	STATE_FIREMASTERY = 0x47,
	STATE_LIGHTNINGMASTERY = 0x48,
	STATE_COLDMASTERY = 0x49,
	STATE_SWORDMASTERY = 0x4A,
	STATE_AXEMASTERY = 0x4B,
	STATE_MACEMASTERY = 0x4C,
	STATE_POLEARMMASTERY = 0x4D,
	STATE_THROWINGMASTERY = 0x4E,
	STATE_SPEARMASTERY = 0x4F,
	STATE_INCREASEDSTAMINA = 0x50,
	STATE_IRONSKIN = 0x51,
	STATE_INCREASEDSPEED = 0x52,
	STATE_NATURALRESISTANCE = 0x53,
	STATE_FINGERMAGECURSE = 0x54,
	STATE_NOMANAREGEN = 0x55,
	STATE_JUSTHIT = 0x56,
	STATE_SLOWMISSILES = 0x57,
	STATE_SHIVERARMOR = 0x58,
	STATE_BATTLECRY = 0x59,
	STATE_BLUE = 0x5A,
	STATE_RED = 0x5B,
	STATE_DEATH_DELAY = 0x5C,
	STATE_VALKYRIE = 0x5D,
	STATE_FRENZY = 0x5E,
	STATE_BERSERK = 0x5F,
	STATE_REVIVE = 0x60,
	STATE_SKEL_MASTERY = 0x61,
	STATE_SOURCEUNIT = 0x62,
	STATE_REDEEMED = 0x63,
	STATE_HEALTHPOT = 0x64,
	STATE_HOLYSHIELD = 0x65,
	STATE_JUST_PORTALED = 0x66,
	STATE_MONFRENZY = 0x67,
	STATE_CORPSE_NODRAW = 0x68,
	STATE_ALIGNMENT = 0x69,
	STATE_MANAPOT = 0x6A,
	STATE_SHATTER = 0x6B,
	STATE_SYNC_WARPED = 0x6C,
	STATE_CONVERSION_SAVE = 0x6D,
	STATE_PREGNANT = 0x6E,
	STATE_GOLEM_MASTERY = 0x6F,
	STATE_RABIES = 0x70,
	STATE_DEFENSE_CURSE = 0x71,
	STATE_BLOOD_MANA = 0x72,
	STATE_BURNING = 0x73,
	STATE_DRAGONFLIGHT = 0x74,
	STATE_MAUL = 0x75,
	STATE_CORPSE_NOSELECT = 0x76,
	STATE_SHADOWWARRIOR = 0x77,
	STATE_FERALRAGE = 0x78,
	STATE_SKILLDELAY = 0x79,
	STATE_PROGRESSIVE_DAMAGE = 0x7A,
	STATE_PROGRESSIVE_STEAL = 0x7B,
	STATE_PROGRESSIVE_OTHER = 0x7C,
	STATE_PROGRESSIVE_FIRE = 0x7D,
	STATE_PROGRESSIVE_COLD = 0x7E,
	STATE_PROGRESSIVE_LIGHTNING = 0x7F,
	STATE_SHRINE_ARMOR = 0x80,
	STATE_SHRINE_COMBAT = 0x81,
	STATE_SHRINE_RESIST_LIGHTNING = 0x82,
	STATE_SHRINE_RESIST_FIRE = 0x83,
	STATE_SHRINE_RESIST_COLD = 0x84,
	STATE_SHRINE_RESIST_POISON = 0x85,
	STATE_SHRINE_SKILL = 0x86,
	STATE_SHRINE_MANA_REGEN = 0x87,
	STATE_SHRINE_STAMINA = 0x88,
	STATE_SHRINE_EXPERIENCE = 0x89,
	STATE_FENRIS_RAGE = 0x8A,
	STATE_WOLF = 0x8B,
	STATE_BEAR = 0x8C,
	STATE_BLOODLUST = 0x8D,
	STATE_CHANGECLASS = 0x8E,
	STATE_ATTACHED = 0x8F,
	STATE_HURRICANE = 0x90,
	STATE_ARMAGEDDON = 0x91,
	STATE_INVIS = 0x92,
	STATE_BARBS = 0x93,
	STATE_WOLVERINE = 0x94,
	STATE_OAKSAGE = 0x95,
	STATE_VINE_BEAST = 0x96,
	STATE_CYCLONEARMOR = 0x97,
	STATE_CLAWMASTERY = 0x98,
	STATE_CLOAK_OF_SHADOWS = 0x99,
	STATE_RECYCLED = 0x9A,
	STATE_WEAPONBLOCK = 0x9B,
	STATE_CLOAKED = 0x9C,
	STATE_QUICKNESS = 0x9D,
	STATE_BLADESHIELD = 0x9E,
	STATE_FADE = 0x9F,
	STATE_SUMMONRESIST = 0xA0,
	STATE_OAKSAGECONTROL = 0xA1,
	STATE_WOLVERINECONTROL = 0xA2,
	STATE_BARBSCONTROL = 0xA3,
	STATE_DEBUGCONTROL = 0xA4,
	STATE_ITEMSET1 = 0xA5,
	STATE_ITEMSET2 = 0xA6,
	STATE_ITEMSET3 = 0xA7,
	STATE_ITEMSET4 = 0xA8,
	STATE_ITEMSET5 = 0xA9,
	STATE_ITEMSET6 = 0xAA,
	STATE_RUNEWORD = 0xAB,
	STATE_RESTINPEACE = 0xAC,
	STATE_CORPSEEXP = 0xAD,
	STATE_WHIRLWIND = 0xAE,
	STATE_FULLSETGENERIC = 0xAF,
	STATE_MONSTERSET = 0xB0,
	STATE_DELERIUM = 0xB1,
	STATE_ANTIDOTE = 0xB2,
	STATE_THAWING = 0xB3,
	STATE_STAMINAPOT = 0xB4,
	STATE_PASSIVE_RESISTFIRE = 0xB5,
	STATE_PASSIVE_RESISTCOLD = 0xB6,
	STATE_PASSIVE_RESISTLTNG = 0xB7,
	STATE_UBERMINION = 0xB8,
};


#endif