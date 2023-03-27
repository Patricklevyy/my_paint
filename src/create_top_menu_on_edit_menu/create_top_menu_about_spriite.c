/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_top_menu_about_sprite.c
*/

#include "../../include/my.h"

void create_about_sprite(PAINT_T *ALL)
{
    ALL->params[13].test =
            sfTexture_createFromFile("./pictures/about_sprite(1).png", NULL);
    ALL->params[13].sprite = sfSprite_create();
    ALL->params[13].position.x = 842;
    ALL->params[13].position.y = 23;
    sfSprite_setTexture(ALL->params[13].sprite, ALL->params[13].test, sfTrue);
    sfSprite_setPosition(ALL->params[13].sprite, ALL->params[13].position);
}

void change_about(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[13].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[13].sprite, NULL);
    }
}
