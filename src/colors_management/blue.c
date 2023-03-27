/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** blue
*/

#include "../../include/my.h"

void create_blue_rect(PAINT_T *ALL)
{
    ALL->colors[0].rec = sfRectangleShape_create();
    ALL->colors[0].pos.x = 56;
    ALL->colors[0].pos.y = 230;
    ALL->colors[0].size.x = 40;
    ALL->colors[0].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[0].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[0].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[0].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[0].rec, ALL->colors[0].pos);
    sfRectangleShape_setSize(ALL->colors[0].rec, ALL->colors[0].size);
}

int change_blue_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[0].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[0].rec).width;
    float btnXposheight = ALL->colors[0].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[0].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[0].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[0].pos.y) {
        return 1;;
    }
    return 0;
}

void check_press_blue(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_blue = 1;
    }
}

void manage_event_mouse_blue(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_blue_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[0].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[0].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[0].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[0].rec, sfTransparent);
        }
    }
    sfVector2i mouse1 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse1.x >= 57 && mouse1.x <= 100) {
        if (mouse1.y >= 231 && mouse1.y <= 273)
            check_press_blue(ALL, event);
    }
}
