/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** replace_ampoule
*/

#include "../../include/my.h"

void create_ampoule(PAINT_T *ALL)
{
    ALL->params[5].test =
    sfTexture_createFromFile("./pictures/icone_ampoule.png", NULL);
    ALL->params[5].sprite = sfSprite_create();
    ALL->params[5].position.x = 67;
    ALL->params[5].position.y = 469;
    sfSprite_setTexture(ALL->params[5].sprite, ALL->params[5].test, sfTrue);
    sfSprite_setPosition(ALL->params[5].sprite, ALL->params[5].position);
}

void change_ampoule(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[5].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[5].sprite, NULL);
    }
}
