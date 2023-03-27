/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_file_rect
*/

#include "../../../include/my.h"

void create_first_file_rect(PAINT_T *ALL)
{
    ALL->menu[0].buttonRect = sfRectangleShape_create();
    ALL->menu[0].size.x = 110;
    ALL->menu[0].size.y = 50;
    sfRectangleShape_setSize(ALL->menu[0].buttonRect, ALL->menu[0].size);
    sfRectangleShape_setFillColor(ALL->menu[0].buttonRect, sfTransparent);
    sfRectangleShape_setOutlineThickness(ALL->menu[0].buttonRect, 2);
    sfRectangleShape_setOutlineColor(ALL->menu[0].buttonRect, sfTransparent);
    ALL->menu[0].pos.x = 470;
    ALL->menu[0].pos.y = 30;
    sfRectangleShape_setPosition(ALL->menu[0].buttonRect, ALL->menu[0].pos);
}

void create_second_file_rect(PAINT_T *ALL)
{
    ALL->menu[1].buttonRect = sfRectangleShape_create();
    ALL->menu[1].size.x = 130;
    ALL->menu[1].size.y = 50;
    sfRectangleShape_setSize(ALL->menu[1].buttonRect, ALL->menu[1].size);
    sfRectangleShape_setFillColor(ALL->menu[1].buttonRect, sfBlack);
    sfRectangleShape_setOutlineThickness(ALL->menu[1].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->menu[1].buttonRect, sfWhite);
    ALL->menu[1].pos.x = 450;
    ALL->menu[1].pos.y = 83;
    sfRectangleShape_setPosition(ALL->menu[1].buttonRect, ALL->menu[1].pos);
}

void create_third_file_rect(PAINT_T *ALL)
{
    ALL->menu[2].buttonRect = sfRectangleShape_create();
    ALL->menu[2].size.x = 130;
    ALL->menu[2].size.y = 50;
    sfRectangleShape_setSize(ALL->menu[2].buttonRect, ALL->menu[2].size);
    sfRectangleShape_setFillColor(ALL->menu[2].buttonRect, sfBlack);
    sfRectangleShape_setOutlineThickness(ALL->menu[2].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->menu[2].buttonRect, sfWhite);
    ALL->menu[2].pos.x = 450;
    ALL->menu[2].pos.y = 133;
    sfRectangleShape_setPosition(ALL->menu[2].buttonRect, ALL->menu[2].pos);
}

void create_fourth_file_rect(PAINT_T *ALL)
{
    ALL->menu[3].buttonRect = sfRectangleShape_create();
    ALL->menu[3].size.x = 130;
    ALL->menu[3].size.y = 50;
    sfRectangleShape_setSize(ALL->menu[3].buttonRect, ALL->menu[3].size);
    sfRectangleShape_setFillColor(ALL->menu[3].buttonRect, sfBlack);
    sfRectangleShape_setOutlineThickness(ALL->menu[3].buttonRect, 1);
    sfRectangleShape_setOutlineColor(ALL->menu[3].buttonRect, sfWhite);
    ALL->menu[3].pos.x = 450;
    ALL->menu[3].pos.y = 176;
    sfRectangleShape_setPosition(ALL->menu[3].buttonRect, ALL->menu[3].pos);
}
