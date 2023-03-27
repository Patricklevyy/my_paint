/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** replace_scrub
*/

#include "../../include/my.h"

void create_scrub(PAINT_T *ALL)
{
    ALL->params[7].test =
    sfTexture_createFromFile("./pictures/scrub.png", NULL);
    ALL->params[7].sprite = sfSprite_create();
    ALL->params[7].position.x = 30;
    ALL->params[7].position.y = 660;
    sfSprite_setTexture(ALL->params[7].sprite, ALL->params[7].test, sfTrue);
    sfSprite_setPosition(ALL->params[7].sprite, ALL->params[7].position);
}

void change_scrub(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[7].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[7].sprite, NULL);
    }
}

void check_press_scrub(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_white = 1;
    }
}

void set_scrub(PAINT_T *ALL, sfEvent event)
{
    sfVector2i mouse2 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse2.x >= 50 && mouse2.x <= 185) {
        if (mouse2.y >= 659 && mouse2.y <= 760) {
            check_press_scrub(ALL, event);
        }
    }
}
