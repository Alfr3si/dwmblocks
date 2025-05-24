#define SC(ruta) "$HOME/.local/share/dwm/dwmblocks/scripts/" #ruta
//
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/             /*Update Interval*/ /*Update Signal*/
    {"",	SC("memory"),	        3,	    0},
    {"",	SC("volume"),           0,	    10},
    {"",	SC("keymap"),	    	0,	    15},
    {"",	SC("battery"),	    	10,	    0},
    {"",	SC("clock2"),	        20,	     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
