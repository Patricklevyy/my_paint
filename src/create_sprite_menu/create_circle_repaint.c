/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_circle_repaint
*/

#include "../../include/my.h"

int change_circle_repaint(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->cercle[2].pos_circle.x +
    sfCircleShape_getGlobalBounds(ALL->cercle[2].c).width;
    float btnXposheight = ALL->cercle[2].pos_circle.y +
    sfCircleShape_getGlobalBounds(ALL->cercle[2].c).height;
    if (mouseX < btnXposwidth && mouseX > ALL->cercle[2].pos_circle.x &&
    mouseY < btnXposheight && mouseY > ALL->cercle[2].pos_circle.y) {
        return 1;
    }
    return 0;
}

void create_circle_repaint(PAINT_T *ALL)
{
    ALL->cercle[2].c = sfCircleShape_create();
    ALL->cercle[2].pos_circle.x = 1801;
    ALL->cercle[2].pos_circle.y = 42;
    ALL->cercle[2].thickness = 4;
    ALL->cercle[2].radius = 31.3;
    sfCircleShape_setRadius(ALL->cercle[2].c, ALL->cercle[2].radius);
    sfCircleShape_setOutlineThickness(ALL->cercle[2].c,
    ALL->cercle[2].thickness);
    sfCircleShape_setOutlineColor(ALL->cercle[2].c, sfTransparent);
    sfCircleShape_setPosition(ALL->cercle[2].c,
    ALL->cercle[2].pos_circle);
    sfCircleShape_setFillColor(ALL->cercle[2].c, sfTransparent);
}

void draw_circle_repaint(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {200, 228, 228, 200};
    if (event.type == sfEvtMouseMoved) {
        if (change_circle_repaint(ALL)) {
            sfColor out = {0, 52, 52, 180};
            sfCircleShape_setFillColor(ALL->cercle[2].c, color);
            sfCircleShape_setOutlineColor(ALL->cercle[2].c, out);
        } else {
            sfCircleShape_setFillColor(ALL->cercle[2].c, sfTransparent);
            sfCircleShape_setOutlineColor(ALL->cercle[2].c, sfTransparent);
        }
    }
}
