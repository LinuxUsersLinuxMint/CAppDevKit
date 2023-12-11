#ifndef _CPP_FAST_VAR_HPP_
#define _CPP_FAST_VAR_HPP_

#define MAX_NUMBERS_SIZE    11
#define MAX_EN_LETTERS_SIZE    26
#define MAX_TR_LETTERS_SIZE    29

#include <iostream>
#include "../ForCpp/cppdefined.hpp"

uns

_i numbers[MAX_NUMBERS_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
_cc tr_letters[MAX_TR_LETTERS_SIZE] = {'A', 'B', 'C', 'Ç', 'D', 'E', 'F', 'G', 'Ğ', 'H', 'I', 'İ', 'J', 'K', 'L', 'M', 'N', 'O', 'Ö', 'P', 'R', 'S', 'Ş', 'T', 'U', 'Ü', 'V', 'Y', 'Z'};
_cc en_letters[MAX_EN_LETTERS_SIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' , 'J', 'K', 'L' , 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

_cc lower_tr_letters[MAX_TR_LETTERS_SIZE] = {'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'ğ', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'p', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'y', 'z'};
_cc lower_en_letters[MAX_EN_LETTERS_SIZE] = {'a' , 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'ı', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// List of BIOS Color Attributes
// link: https://en.wikipedia.org/wiki/BIOS_color_attributes

#define VGA_COLOR_BLACK     0x0
#define VGA_COLOR_BLUE      0x1
#define VGA_COLOR_GREEN     0x2
#define VGA_COLOR_CYAN      0x3
#define VGA_COLOR_RED       0x4
#define VGA_COLOR_MAGENTA   0x5
#define VGA_COLOR_BROWN     0x6
#define VGA_COLOR_LIGHT_GRAY    0x7
#define VGA_COLOR_DARK_GRAY     0x8
#define VGA_COLOR_LIGHT_BLUE    0x9
#define VGA_COLOR_LIGHT_GREEN   0xA
#define VGA_COLOR_LIGHT_CYAN    0xB
#define VGA_COLOR_LIGHT_RED     0xC
#define VGA_COLOR_LIGHT_MAGENTA 0xD
#define VGA_COLOR_YELLOW        0xE
#define VGA_COLOR_WHITE         0xF

// structures

struct vcl // vga color list
{
    _i vcb; // black
    _i vcbl; // blue
    _i vcg; // green
    _i vcc; // cyan
    _i vcr; // red
    _i vcm; // magenta
    _i vcbrw; // brown
    _i vclg; // light gray
    _i vcdg; // dark gray
    _i vclbl; // light blue
    _i vclgre; // light green
    _i vclcy; // light cyan
    _i vclr; // light red
    _i vclmg; // light magenta
    _i vcy; // light yellow
    _i vcwh; // white
} vclist;

st vcl vclist;

// enum

en vgcl
{
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
} vgclist;

en vgcl vgclist;

// List Of 16-bit computer color palettes
// link: https://en.wikipedia.org/wiki/List_of_16-bit_computer_color_palettes

// 12-Bit/15-bit 4096-color palette

namespace vga_color_palette
{
    #define VGA_COLOR_PALETTE_0     0x00
    #define VGA_COLOR_PALETTE_1     0x01
    #define VGA_COLOR_PALETTE_2     0x02
    #define VGA_COLOR_PALETTE_3     0x03
    #define VGA_COLOR_PALETTE_4     0x04
    #define VGA_COLOR_PALETTE_5     0x05
    #define VGA_COLOR_PALETTE_6     0x06
    #define VGA_COLOR_PALETTE_7     0x07
    #define VGA_COLOR_PALETTE_8     0x08
    #define VGA_COLOR_PALETTE_9     0x09
    #define VGA_COLOR_PALETTE_A     0x0A
    #define VGA_COLOR_PALETTE_B     0x0B
    #define VGA_COLOR_PALETTE_C     0x0C
    #define VGA_COLOR_PALETTE_D     0x0D
    #define VGA_COLOR_PALETTE_E     0x0E
    #define VGA_COLOR_PALETTE_F     0x0F

    // 15-bit

    #define VGA_COLOR_PALETTE_10    0x10
    #define VGA_COLOR_PALETTE_11    0x11
    #define VGA_COLOR_PALETTE_12    0x12
    #define VGA_COLOR_PALETTE_13    0x13
    #define VGA_COLOR_PALETTE_14    0x14
    #define VGA_COLOR_PALETTE_15    0x15
    #define VGA_COLOR_PALETTE_16    0x16
    #define VGA_COLOR_PALETTE_17    0x17
    #define VGA_COLOR_PALETTE_18    0x18
    #define VGA_COLOR_PALETTE_19    0x19
    #define VGA_COLOR_PALETTE_1A    0x1A
    #define VGA_COLOR_PALETTE_1B    0x1B
    #define VGA_COLOR_PALETTE_1C    0x1C
    #define VGA_COLOR_PALETTE_1D    0x1D
    #define VGA_COLOR_PALETTE_1E    0x1E
    #define VGA_COLOR_PALETTE_1F    0x1F
}

#endif