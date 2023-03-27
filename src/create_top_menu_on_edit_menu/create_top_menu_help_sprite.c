/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_top_menu_help_sprite.c
*/

#include "../../include/my.h"

void create_help_sprite(PAINT_T *ALL)
{
    ALL->params[11].test =
            sfTexture_createFromFile("./pictures/help_sprite(1)(1).png", NULL);
    ALL->params[11].sprite = sfSprite_create();
    ALL->params[11].position.x = 724;
    ALL->params[11].position.y = 21;
    sfSprite_setTexture(ALL->params[11].sprite, ALL->params[11].test, sfTrue);
    sfSprite_setPosition(ALL->params[11].sprite, ALL->params[11].position);
}

void change_help(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[11].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[11].sprite, NULL);
    }
}
