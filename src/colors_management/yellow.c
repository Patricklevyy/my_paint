/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** yellow
*/

#include "../../include/my.h"

void create_yellow_rect(PAINT_T *ALL)
{
    ALL->colors[3].rec = sfRectangleShape_create();
    ALL->colors[3].pos.x = 135;
    ALL->colors[3].pos.y = 304;
    ALL->colors[3].size.x = 40;
    ALL->colors[3].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[3].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[3].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[3].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[3].rec, ALL->colors[3].pos);
    sfRectangleShape_setSize(ALL->colors[3].rec, ALL->colors[3].size);
}

int change_yellow_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[3].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[2].rec).width;
    float btnXposheight = ALL->colors[3].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[3].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[3].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[3].pos.y) {
        return 1;
    }
    return 0;
}

void check_press_yellow(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_yellow = 1;
    }
}

void manage_event_mouse_yellow(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_yellow_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[3].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[3].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[3].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[3].rec, sfTransparent);
        }
    }
    sfVector2i mouse3 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse3.x >= 136 && mouse3.x <= 180) {
        if (mouse3.y >= 304 && mouse3.y <= 348)
            check_press_yellow(ALL, event);
    }
}
