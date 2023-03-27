/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** replace_file_saved
*/

#include "../../include/my.h"

void create_replace_file_saved(PAINT_T *ALL)
{
    ALL->params[6].test =
    sfTexture_createFromFile("./pictures/folder.png", NULL);
    ALL->params[6].sprite = sfSprite_create();
    ALL->params[6].position.x = 56;
    ALL->params[6].position.y = 813;
    sfSprite_setTexture(ALL->params[6].sprite, ALL->params[6].test, sfTrue);
    sfSprite_setPosition(ALL->params[6].sprite, ALL->params[6].position);
}

void change_replace_file_saved(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[6].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[6].sprite, NULL);
    }
}
