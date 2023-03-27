/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_circle_restart_from_not_saved
*/

#include "../include/my.h"

int change_circle_restart_from_not_saved(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->cercle[3].pos_circle.x +
    sfCircleShape_getGlobalBounds(ALL->cercle[3].c).width;
    float btnXposheight = ALL->cercle[3].pos_circle.y +
    sfCircleShape_getGlobalBounds(ALL->cercle[3].c).height;
    if (mouseX < btnXposwidth && mouseX > ALL->cercle[3].pos_circle.x &&
    mouseY < btnXposheight && mouseY > ALL->cercle[3].pos_circle.y) {
        return 1;
    }
    return 0;
}

void create_circle_restart_from_not_saved(PAINT_T *ALL)
{
    ALL->cercle[3].c = sfCircleShape_create();
    ALL->cercle[3].pos_circle.x = 1672;
    ALL->cercle[3].pos_circle.y = 67;
    ALL->cercle[3].thickness = 4;
    ALL->cercle[3].radius = 40;
    sfCircleShape_setRadius(ALL->cercle[3].c, ALL->cercle[3].radius);
    sfCircleShape_setOutlineThickness(ALL->cercle[3].c,
    ALL->cercle[3].thickness);
    sfCircleShape_setOutlineColor(ALL->cercle[3].c, sfTransparent);
    sfCircleShape_setPosition(ALL->cercle[3].c,
    ALL->cercle[3].pos_circle);
    sfCircleShape_setFillColor(ALL->cercle[3].c, sfTransparent);
}

void draw_circle_restart_from_not_saved(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {200, 228, 228, 200};
    if (event.type == sfEvtMouseMoved) {
        if (change_circle_restart_from_not_saved(ALL)) {
            sfColor out = {0, 52, 52, 180};
            sfCircleShape_setFillColor(ALL->cercle[3].c, color);
            sfCircleShape_setOutlineColor(ALL->cercle[3].c, out);
        } else {
            sfCircleShape_setFillColor(ALL->cercle[3].c, sfTransparent);
            sfCircleShape_setOutlineColor(ALL->cercle[3].c, sfTransparent);
        }
    }
}

void go_back_to_paint_from_not_saved(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1679.5 && mouse.x <= 1743) {
        if (mouse.y >= 76 && mouse.y <= 134) {
            display_paint_part(ALL);
        }
    }
}
