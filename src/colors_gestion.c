/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** colors_gestion.c
*/

#include "../include/my.h"

void init_color(PAINT_T *ALL)
{
    ALL->colors->colors_blue = 0;
    ALL->colors->colors_black = 0;
    ALL->colors->colors_green = 0;
    ALL->colors->colors_red = 0;
    ALL->colors->colors_white = 0;
    ALL->colors->colors_yellow = 0;
}

sfColor short_function(PAINT_T *ALL, sfColor color)
{
    if (ALL->colors->colors_red == 1) {
        color = sfRed;
        return color;
    }
    if (ALL->colors->colors_black == 1) {
        color = sfBlack;
        return color;
    }
    return color;
}

sfColor recup_colors(PAINT_T *ALL)
{
    sfColor color = sfWhite;
    if (ALL->colors->colors_blue == 1) {
        color = sfBlue;
        return color;
    }
    if (ALL->colors->colors_green == 1) {
        color = sfGreen;
        return color;
    }
    if (ALL->colors->colors_white == 1) {
        color = sfWhite;
        return color;
    }
    if (ALL->colors->colors_yellow == 1) {
        color = sfYellow;
        return color;
    }
    color = short_function(ALL, color);
    return color;
}
