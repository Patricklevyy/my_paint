/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_sprite_menu
*/

#include "../../include/my.h"

void create_white_backgound(PAINT_T *ALL)
{
    ALL->params[21].test =
    sfTexture_createFromFile("./pictures/fond_blanc.png", NULL);
    ALL->params[21].sprite = sfSprite_create();
    ALL->params[21].position.x = 1;
    ALL->params[21].position.y = 1;
    sfSprite_setTexture(ALL->params[21].sprite, ALL->params[21].test, sfTrue);
    sfSprite_setPosition(ALL->params[21].sprite, ALL->params[21].position);
}
