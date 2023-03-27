/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** green
*/

#include "../../include/my.h"

void create_green_rect(PAINT_T *ALL)
{
    ALL->colors[1].rec = sfRectangleShape_create();
    ALL->colors[1].pos.x = 135;
    ALL->colors[1].pos.y = 231;
    ALL->colors[1].size.x = 40;
    ALL->colors[1].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[1].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[1].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[1].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[1].rec, ALL->colors[1].pos);
    sfRectangleShape_setSize(ALL->colors[1].rec, ALL->colors[1].size);
}

int change_green_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[1].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[1].rec).width;
    float btnXposheight = ALL->colors[1].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[1].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[1].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[1].pos.y) {
        return 1;
    }
    return 0;
}

void check_press_green(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_green = 1;
    }
}

void manage_event_mouse_green(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_green_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[1].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[1].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[1].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[1].rec, sfTransparent);
        }
    }
    sfVector2i mouse2 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse2.x >= 136 && mouse2.x <= 181) {
        if (mouse2.y >= 232 && mouse2.y <= 273)
            check_press_green(ALL, event);
    }
}
