#include "linker.h"

const char SECTION(".sdata") aGvdC[] = "gvd.c";
const char SECTION(".sdata") asc_800AB340[] = "#";
const char SECTION(".sdata") aNone[] = "none";	
const char* SECTION(".sdata") off_800AB34C = aNone;	

const char SECTION(".sdata") aVoided[] = "voided ";	
const char SECTION(".sdata") aFailed[] = "failed ";	
const char SECTION(".sdata") asc_800AB360[] = ")\n";	
const char SECTION(".sdata") aStatic[] = "static ";	

const char SECTION(".sdata") asc_800AB36C[] = "\n";

int SECTION(".sdata") dword_800AB370 =  0x80117000;
int SECTION(".sdata") dword_800AB374[] =  { 0, 0, 0 };

int SECTION(".sdata") dword_800AB380[] = { 0, 0xFFFFFFFF, 0 };
 
 

short SECTION(".sdata") word_800AB38C = 0;
short SECTION(".sdata") word_800AB38E = 0;
short SECTION(".sdata") word_800AB390 = 0;
int SECTION(".sdata") dword_800AB394 = 0x3C808080;
int SECTION(".sdata") dword_800AB398 =0x3E808080;

char SECTION(".sdata") byte_800AB39C[] = {0, 0, 0};
char SECTION(".sdata") byte_800AB39F = 0;
char SECTION(".sdata") byte_800AB3A0[] = { 0, 0, 0 };
char SECTION(".sdata") byte_800AB3A3 = 0;

int SECTION(".sdata") pad = 0xFFFFFFFF; // ??


int SECTION(".sdata") dword_800AB3A8[] = { 0xE20300, 0x1E0100 };
int SECTION(".sdata") dword_800AB3B0[] = { 0xC40300, 0x1E0100, 0 };
int SECTION(".sdata") dword_800AB3BC[] = { 0, 0 };
int SECTION(".sdata") dword_800AB3C4[] = { 0, 0 };
int SECTION(".sdata") word_800AB3CC = 0;
int SECTION(".sdata") dword_800AB3D0 = 0;
int SECTION(".sdata") dword_800AB3D4 = 0;

int SECTION(".sdata") dword_800AB3DC[] = {0, 0};

int SECTION(".sdata") dword_800AB3E0 = 0;




int SECTION(".sdata") word_800AB3E4 =  0xFFFF0000;

int SECTION(".sdata") dword_800AB3E8 = 0;
int SECTION(".sdata") dword_800AB3EC = 0;
int SECTION(".sdata") dword_800AB3F0 = 0;
int SECTION(".sdata") dword_800AB3F4 = 0;


char SECTION(".sdata") aInit[] = "init";


int SECTION(".sdata") dword_800AB400 = 0;


char SECTION(".sdata") aGamedC[] = "gamed.c";
char SECTION(".sdata") aGcawi[] = "gcawi";


int SECTION(".sdata") dword_800AB414 = 0xFFFFFFFF;
char SECTION(".sdata") aPrint[] = "print: ";
char SECTION(".sdata") aS_2[] = "%s ";
char SECTION(".sdata") aD_3[] = "%d ";


const char SECTION(".sdata") asc_800AB428[] = "\n";

int SECTION(".sdata") dword_800AB42C = 0x2710;

char SECTION(".sdata") byte_800AB430[] = { 0x80, 2, 0 };
char SECTION(".sdata") byte_800AB433 = 8;
char SECTION(".sdata") byte_800AB434 = 0;

char SECTION(".sdata") byte_800AB437 = 0;
int SECTION(".sdata") dword_800AB438[] = { 0x2710, 0, 0, 0, 0 };

const char SECTION(".sdata") aNoHzd[] = "no hzd\n";
const char SECTION(".sdata") aDelayC[] = "delay.c";

int SECTION(".sdata") dword_800AB45C = 0xFFFFFFFF;

const char SECTION(".sdata")  aInit_0[] = "init";

const char SECTION(".sdata") aTitle[] = "title";

const char SECTION(".sdata") aOverC[] = "over.c";

const char SECTION(".sdata") aItem[] = "item";

int SECTION(".sdata") dword_800AB480[] = { 0xD, 0x5555, 0x3FFF, 0 };

int SECTION(".sdata") dword_800AB490[] = {0x17E03E0, 0x20020};
int SECTION(".sdata") dword_800AB498[] = {0x5FBF5FBE, 0x5FFF5FFE};
int SECTION(".sdata") dword_800AB4A0[] = {0x8D118C91, 0x9A238C91};
int SECTION(".sdata") dword_800AB4A8[] = {0x80238023, 0x8023, 0, 0};

const char SECTION(".sdata") aSuppr[] = "SUPPR.";
const char SECTION(".sdata") aScarf[] = "SCARF";

const char SECTION(".sdata") aRope[] = "ROPE";
const char SECTION(".sdata") aDisc[] = "DISC";
const char SECTION(".sdata") aMineD[] = "MINE.D";
const char SECTION(".sdata") aTimerB[] = "TIMER.B";
const char SECTION(".sdata") aCard[] = "CARD";
const char SECTION(".sdata") aPalKey[] = "PAL KEY";
const char SECTION(".sdata") aRation[] = "RATION";
const char SECTION(".sdata") aCamera[] = "CAMERA";
const char SECTION(".sdata") aBandana[] = "BANDANA";
const char SECTION(".sdata") aStealth[] = "STEALTH";
const char SECTION(".sdata") aKetchup[] = "KETCHUP";
const char SECTION(".sdata") aBArmor[] = "B.ARMOR";
const char SECTION(".sdata") aGasmask[] = "GASMASK";

const char SECTION(".sdata") aThermG[] = "THERM.G";
const char SECTION(".sdata") aNVG[] = "N.V.G";
const char SECTION(".sdata") aCBoxC[] = "C.BOX C";
const char SECTION(".sdata") aCBoxB[] = "C.BOX B";
const char SECTION(".sdata") aCBoxA[] = "C.BOX A";

const char SECTION(".sdata") aScope[] = "SCOPE";

const char SECTION(".sdata") aCigs[] = "CIGS";

const char SECTION(".sdata") aLv[] = "LV.";
const char SECTION(".sdata") aNoItem[] = "NO ITEM";

int SECTION(".sdata") pada[2] = { 0, 0 };

const char SECTION(".sdata") aEquip[] = "EQUIP";

int SECTION(".sdata") pada2 = 0;


const char SECTION(".sdata") aPsg1[] = "PSG1";
const char SECTION(".sdata") aChaffG[] = "CHAFF.G";

const char SECTION(".sdata") aStunG[] = "STUN.G";

int SECTION(".sdata") dword_unknown[] = { 0x3443, 0x4E495453, 0x524547, 0x494B494E, 0x4154, 0x4E455247, 0x454441, 0x4D2D4146, 0x5341 };


const char SECTION(".sdata") aSocom[] = "SOCOM";

 
int SECTION(".sdata") dword_2 = 0x80011B04;

const char SECTION(".sdata") aMp5Sd[] = "MP 5 SD";
const char SECTION(".sdata") aNoItem_0[] = "NO ITEM";

int SECTION(".sdata") dword_3[] = { 0, 0 };
const char SECTION(".sdata") aWeapon[] ="WEAPON";
const char SECTION(".sdata") aLife[] = "LIFE";
const char SECTION(".sdata") aO2[] = "O2";
int SECTION(".sdata") dword_4 = 0;


