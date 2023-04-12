//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "sb-volume",    0,                  1               },
    {"",        "sb-blue",      0,                  2               },
    {"",        "sb-clock",     60,                 3               },
    {"",        "sb-system",    0,                  4               },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
