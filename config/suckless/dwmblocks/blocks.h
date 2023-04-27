//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//a
#include "/home/falk/.config/suckless/color.h"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "sb-volume",    0,                  1               },
    {"",        "sb-net",       0,                  5               },
    {"",        "sb-blue",      0,                  2               },
    {"",        "sb-mail",      0,                  6,              },
    {"",        "sb-clock",     60,                 3               },
    {"",        "sb-battery",   300,                7,              },
    {"",        "sb-system",    0,                  4               },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
