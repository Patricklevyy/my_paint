/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_top_menu_sprite.c
*/

#include "../../include/my.h"

void create_edit_sprite(PAINT_T *ALL)
{
    ALL->params[10].test =
            sfTexture_createFromFile("./pictures/edit_sprite(1)(1).png", NULL);
    ALL->params[10].sprite = sfSprite_create();
    ALL->params[10].position.x = 595;
    ALL->params[10].position.y = 24;
    sfSprite_setTexture(ALL->params[10].sprite, ALL->params[10].test, sfTrue);
    sfSprite_setPosition(ALL->params[10].sprite, ALL->params[10].position);
}

void change_edit(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[10].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[10].sprite, NULL);
    }
}
