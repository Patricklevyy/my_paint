/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** black
*/

#include "../../include/my.h"

void create_black_rect(PAINT_T *ALL)
{
    ALL->colors[4].rec = sfRectangleShape_create();
    ALL->colors[4].pos.x = 55;
    ALL->colors[4].pos.y = 377;
    ALL->colors[4].size.x = 40;
    ALL->colors[4].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[4].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[4].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[4].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[4].rec, ALL->colors[4].pos);
    sfRectangleShape_setSize(ALL->colors[4].rec, ALL->colors[4].size);
}

int change_black_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[4].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[4].rec).width;
    float btnXposheight = ALL->colors[4].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[4].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[4].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[4].pos.y) {
        return 1;
    }
    return 0;
}

void check_press_black(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_black = 1;
    }
}

void manage_event_mouse_black(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_black_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[4].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[4].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[4].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[4].rec, sfTransparent);
        }
    }
    sfVector2i mouse3 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse3.x >= 56 && mouse3.x <= 99) {
        if (mouse3.y >= 379 && mouse3.y <= 422)
            check_press_black(ALL, event);
    }
}
