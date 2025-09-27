#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 0

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)                                      \
    X("", "~/.dwm/dwmblocks/scripts/memory", 2, 0)     \
    X("", "~/.dwm/dwmblocks/scripts/cpu", 2, 0)        \
    X("", "~/.dwm/dwmblocks/scripts/cpuTemp", 10, 0)   \
    X("", "~/.dwm/dwmblocks/scripts/pacman", 7200, 5)  \
    X("", "~/.dwm/dwmblocks/scripts/volume", 0, 6)     \
    X("", "~/.dwm/dwmblocks/scripts/brightness", 0, 7) \
    X("", "~/.dwm/dwmblocks/scripts/keymap", 0, 8)     \
    X("", "~/.dwm/dwmblocks/scripts/battery", 30, 0)   \
    X("", "~/.dwm/dwmblocks/scripts/clock", 2, 0)

#endif  // CONFIG_H
