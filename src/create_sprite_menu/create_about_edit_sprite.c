/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_about_edit_sprite
*/

#include "../../include/my.h"

void create_about_edit_sprite(PAINT_T *ALL)
{
    ALL->params[15].test =
    sfTexture_createFromFile("./pictures/my_paint(5).png", NULL);
    ALL->params[15].sprite = sfSprite_create();
    ALL->params[15].position.x = 1;
    ALL->params[15].position.y = 1;
    sfSprite_setTexture(ALL->params[15].sprite, ALL->params[15].test, sfTrue);
    sfSprite_setPosition(ALL->params[15].sprite, ALL->params[15].position);
}
