//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwmmemory",    10,		0},
    {"", "dwmcpu",       5,         0},
    {"", "dwmnetwork",   5,         0},
    {"", "dwmnetspeed",  5,         0},
    {"", "dwmdisk",     600,        0},
    /* Battery not needed on desktop system   */
    {"", "dwmbattery",  30,         0},
	{" ", "date '+%b %d %H:%M'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
