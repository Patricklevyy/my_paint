/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_edit_rect
*/

#include "../../../include/my.h"

void create_first_edit_rect(PAINT_T *ALL)
{
    ALL->edit[0].buttonRect = sfRectangleShape_create();
    ALL->edit[0].size.x = 100;
    ALL->edit[0].size.y = 60;
    sfRectangleShape_setSize(ALL->edit[0].buttonRect, ALL->edit[0].size);
    sfRectangleShape_setFillColor(ALL->edit[0].buttonRect, sfTransparent);
    sfRectangleShape_setOutlineThickness(ALL->edit[0].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->edit[0].buttonRect, sfTransparent);
    ALL->edit[0].pos.x = 598;
    ALL->edit[0].pos.y = 25;
    sfRectangleShape_setPosition(ALL->edit[0].buttonRect, ALL->edit[0].pos);
}

void create_second_edit_rect(PAINT_T *ALL)
{
    ALL->edit[1].buttonRect = sfRectangleShape_create();
    ALL->edit[1].size.x = 120;
    ALL->edit[1].size.y = 50;
    sfRectangleShape_setSize(ALL->edit[1].buttonRect, ALL->edit[1].size);
    sfRectangleShape_setFillColor(ALL->edit[1].buttonRect, sfBlack);
    sfRectangleShape_setOutlineThickness(ALL->edit[1].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->edit[1].buttonRect, sfWhite);
    ALL->edit[1].pos.x = 590;
    ALL->edit[1].pos.y = 83;
    sfRectangleShape_setPosition(ALL->edit[1].buttonRect, ALL->edit[1].pos);
}

void create_third_edit_rect(PAINT_T *ALL)
{
    ALL->edit[2].buttonRect = sfRectangleShape_create();
    ALL->edit[2].size.x = 120;
    ALL->edit[2].size.y = 50;
    sfRectangleShape_setSize(ALL->edit[2].buttonRect, ALL->edit[2].size);
    sfRectangleShape_setFillColor(ALL->edit[2].buttonRect, sfBlack);
    sfRectangleShape_setOutlineThickness(ALL->edit[2].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->edit[2].buttonRect, sfWhite);
    ALL->edit[2].pos.x = 590;
    ALL->edit[2].pos.y = 133;
    sfRectangleShape_setPosition(ALL->edit[2].buttonRect, ALL->edit[2].pos);
}
