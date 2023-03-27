/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_n_draw_color_rec
*/

#include "../../include/my.h"

void create_rect_color(PAINT_T *ALL)
{
    create_blue_rect(ALL);
    create_green_rect(ALL);
    create_red_rect(ALL);
    create_yellow_rect(ALL);
    create_black_rect(ALL);
    create_white_rect(ALL);
}

void draw_rec_color(PAINT_T *ALL)
{
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[0].rec, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[1].rec, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[2].rec, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[3].rec, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[4].rec, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->colors[5].rec, NULL);
}
