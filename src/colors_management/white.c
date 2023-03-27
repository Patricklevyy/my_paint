/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** white
*/

#include "../../include/my.h"

void create_white_rect(PAINT_T *ALL)
{
    ALL->colors[5].rec = sfRectangleShape_create();
    ALL->colors[5].pos.x = 134;
    ALL->colors[5].pos.y = 376;
    ALL->colors[5].size.x = 40;
    ALL->colors[5].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[5].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[5].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[5].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[5].rec, ALL->colors[5].pos);
    sfRectangleShape_setSize(ALL->colors[5].rec, ALL->colors[5].size);
}

int change_white_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[5].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[5].rec).width;
    float btnXposheight = ALL->colors[5].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[5].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[5].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[5].pos.y) {
        return 1;
    }
    return 0;
}

void check_press_white(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_white = 1;
    }
}

void manage_event_mouse_white(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_white_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[5].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[5].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[5].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[5].rec, sfTransparent);
        }
    }
    sfVector2i mouse3 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse3.x >= 135 && mouse3.x <= 178) {
        if (mouse3.y >= 375 && mouse3.y <= 419)
            check_press_white(ALL, event);
    }
}
