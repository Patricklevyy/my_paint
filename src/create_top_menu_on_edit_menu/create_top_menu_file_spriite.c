/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_top_menu_file_sprite.c
*/

#include "../../include/my.h"

void create_file_sprite(PAINT_T *ALL)
{
    ALL->params[12].test =
            sfTexture_createFromFile("./pictures/file_sprite(1)(1).png", NULL);
    ALL->params[12].sprite = sfSprite_create();
    ALL->params[12].position.x = 463;
    ALL->params[12].position.y = 20;
    sfSprite_setTexture(ALL->params[12].sprite, ALL->params[12].test, sfTrue);
    sfSprite_setPosition(ALL->params[12].sprite, ALL->params[12].position);
}

void change_file(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[12].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[12].sprite, NULL);
    }
}
