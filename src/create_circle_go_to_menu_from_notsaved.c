/*
** EPITECH PROJECT, 2024
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_circle_go_to_menu_from_notsaved
*/

#include "../include/my.h"

int change_circle_go_to_menu_from_notsaved(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->cercle[4].pos_circle.x +
    sfCircleShape_getGlobalBounds(ALL->cercle[4].c).width;
    float btnXposheight = ALL->cercle[4].pos_circle.y +
    sfCircleShape_getGlobalBounds(ALL->cercle[4].c).height;
    if (mouseX < btnXposwidth && mouseX > ALL->cercle[4].pos_circle.x &&
    mouseY < btnXposheight && mouseY > ALL->cercle[4].pos_circle.y) {
        return 1;
    }
    return 0;
}

void create_circle_go_to_menu_from_notsaved(PAINT_T *ALL)
{
    ALL->cercle[4].c = sfCircleShape_create();
    ALL->cercle[4].pos_circle.x = 1775;
    ALL->cercle[4].pos_circle.y = 66;
    ALL->cercle[4].thickness = 4;
    ALL->cercle[4].radius = 38;
    sfCircleShape_setRadius(ALL->cercle[4].c, ALL->cercle[4].radius);
    sfCircleShape_setOutlineThickness(ALL->cercle[4].c,
    ALL->cercle[4].thickness);
    sfCircleShape_setOutlineColor(ALL->cercle[4].c, sfTransparent);
    sfCircleShape_setPosition(ALL->cercle[4].c,
    ALL->cercle[4].pos_circle);
    sfCircleShape_setFillColor(ALL->cercle[4].c, sfTransparent);
}

void draw_circle_go_to_menu_from_notsaved(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {200, 228, 228, 200};
    if (event.type == sfEvtMouseMoved) {
        if (change_circle_go_to_menu_from_notsaved(ALL)) {
            sfColor out = {0, 52, 52, 180};
            sfCircleShape_setFillColor(ALL->cercle[4].c, color);
            sfCircleShape_setOutlineColor(ALL->cercle[4].c, out);
        } else {
            sfCircleShape_setFillColor(ALL->cercle[4].c, sfTransparent);
            sfCircleShape_setOutlineColor(ALL->cercle[4].c, sfTransparent);
        }
    }
}

void go_back_to_menu_from_not_saved(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1781 && mouse.x <= 1840) {
        if (mouse.y >= 75 && mouse.y <= 128) {
            base_my_paint(ALL);
        }
    }
}
