/*
QMK Firmware Massdrop CTRL M-AS Keymap
Copyright (C) 2020 matthewrobo

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// These are just to make it neater to use builtin HSV values in the keymap
// clang-format off
#define WHITE__ {HSV_WHITE}
#define RED____ {HSV_RED}
#define CORAL__ {HSV_CORAL}
#define ORANGE_ {HSV_ORANGE}
#define GOLDEN_ {HSV_GOLDENROD}
#define GOLD___ {HSV_GOLD}
#define YELLOW_ {HSV_YELLOW}
#define CHART__ {HSV_CHARTREUSE}
#define GREEN__ {HSV_GREEN}
#define SPRING_ {HSV_SPRINGGREEN}
#define TURQ___ {HSV_TURQUOISE}
#define TEAL___ {HSV_TEAL}
#define CYAN___ {HSV_CYAN}
#define AZURE__ {HSV_AZURE}
#define BLUE___ {HSV_BLUE}
#define PURPLE_ {HSV_PURPLE}
#define MAGENT_ {HSV_MAGENTA}
#define PINK___ {HSV_PINK}
// 50% Illuminated
#define DIM____ {0, 0, 128}
// clang-format on

enum layout_names {
    _KL = 0,  // Keys Layout: The main keyboard layout that has all the characters
    _FL,      // Function Layout: The function key activated layout with default functions and some added ones
};
