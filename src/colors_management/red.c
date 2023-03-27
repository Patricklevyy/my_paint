/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** red
*/

#include "../../include/my.h"

void create_red_rect(PAINT_T *ALL)
{
    ALL->colors[2].rec = sfRectangleShape_create();
    ALL->colors[2].pos.x = 58;
    ALL->colors[2].pos.y = 305;
    ALL->colors[2].size.x = 40;
    ALL->colors[2].size.y = 40;
    sfRectangleShape_setOutlineThickness(ALL->colors[2].rec, 6);
    sfRectangleShape_setOutlineColor(ALL->colors[2].rec, sfTransparent);
    sfRectangleShape_setFillColor(ALL->colors[2].rec, sfTransparent);
    sfRectangleShape_setPosition(ALL->colors[2].rec, ALL->colors[2].pos);
    sfRectangleShape_setSize(ALL->colors[2].rec, ALL->colors[2].size);
}

int change_red_rect_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->colors[2].pos.x +
    sfRectangleShape_getLocalBounds(ALL->colors[2].rec).width;
    float btnXposheight = ALL->colors[2].pos.y +
    sfRectangleShape_getLocalBounds(ALL->colors[2].rec).height;
    if (mouseX < btnXposwidth && mouseX > ALL->colors[2].pos.x &&
    mouseY < btnXposheight && mouseY > ALL->colors[2].pos.y) {
        return 1;
    }
    return 0;
}

void check_press_red(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        init_color(ALL);
        ALL->colors->colors_red = 1;
    }
}

void manage_event_mouse_red(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        if (change_red_rect_color(ALL)) {
            sfRectangleShape_setOutlineColor(ALL->colors[2].rec, sfBlack);
            sfRectangleShape_setFillColor(ALL->colors[2].rec, sfTransparent);
        } else {
            sfRectangleShape_setOutlineColor(ALL->colors[2].rec, sfTransparent);
            sfRectangleShape_setFillColor(ALL->colors[2].rec, sfTransparent);
        }
    }
    sfVector2i mouse3 = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse3.x >= 58 && mouse3.x <= 104) {
        if (mouse3.y >= 305 && mouse3.y <= 351)
            check_press_red(ALL, event);
    }
}
