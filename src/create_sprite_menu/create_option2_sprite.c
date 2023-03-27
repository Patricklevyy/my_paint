/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_option2_sprite
*/

#include "../../include/my.h"

void create_option2_sprite(PAINT_T *ALL)
{
    ALL->params[1].test =
    sfTexture_createFromFile("./pictures/my_paint(6).png", NULL);
    ALL->params[1].sprite = sfSprite_create();
    ALL->params[1].position.x = 1;
    ALL->params[1].position.y = 1;
    sfSprite_setTexture(ALL->params[1].sprite, ALL->params[1].test, sfTrue);
    sfSprite_setPosition(ALL->params[1].sprite, ALL->params[1].position);
}
