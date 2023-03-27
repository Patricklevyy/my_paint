/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_sprite_menu
*/

#include "../../include/my.h"

void create_edit_menu(PAINT_T *ALL)
{
    ALL->params[2].test =
    sfTexture_createFromFile("./pictures/menu_edit(1).png", NULL);
    ALL->params[2].sprite = sfSprite_create();
    ALL->params[2].position.x = 1;
    ALL->params[2].position.y = 1;
    sfSprite_setTexture(ALL->params[2].sprite, ALL->params[2].test, sfTrue);
    sfSprite_setPosition(ALL->params[2].sprite, ALL->params[2].position);
}

void create_base_paint_img(PAINT_T *ALL)
{
    ALL->params[0].test =
    sfTexture_createFromFile("./pictures/menu.png", NULL);
    ALL->params[0].sprite = sfSprite_create();
    ALL->params[0].position.x = 1;
    ALL->params[0].position.y = 1;
    sfSprite_setTexture(ALL->params[0].sprite, ALL->params[0].test, sfTrue);
    sfSprite_setPosition(ALL->params[0].sprite, ALL->params[0].position);
}
