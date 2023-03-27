/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** replace_painçeau
*/

#include "../../include/my.h"

void create_pencil(PAINT_T *ALL)
{
    ALL->params[8].test =
    sfTexture_createFromFile("./pictures/pencil.png", NULL);
    ALL->params[8].sprite = sfSprite_create();
    ALL->params[8].position.x = 45;
    ALL->params[8].position.y = 460;
    sfSprite_setTexture(ALL->params[8].sprite, ALL->params[8].test, sfTrue);
    sfSprite_setPosition(ALL->params[8].sprite, ALL->params[8].position);
}

void change_pencil(PAINT_T *ALL)
{

    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    sfFloatRect bounds = sfSprite_getGlobalBounds(ALL->params[8].sprite);
    sfBool isHovering = sfFloatRect_contains(&bounds, mouseX, mouseY);
    if (isHovering) {
        sfRenderWindow_drawSprite(ALL->window->window,
        ALL->params[8].sprite, NULL);
    }
}

void check_press_pencil(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_black = 1;
    }
}

void set_pencil(PAINT_T *ALL, sfEvent event)
{
    sfVector2i mouse2 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse2.x >= 50 && mouse2.x <= 185) {
        if (mouse2.y >= 460 && mouse2.y <= 635) {
            check_press_pencil(ALL, event);
        }
    }
}
