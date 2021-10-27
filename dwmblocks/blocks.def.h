//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Vol:", "~/.local/share/scripts/dwmblocks/pulse-volume.sh output",	30,		10},
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "~/.local/share/scripts/dwmblocks/battery_level.sh",	30,		0},
	{"📅 ", "date '+%b %d (%a) %I:%M%p' | tr '[:lower:]' '[:upper:]'",		5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
