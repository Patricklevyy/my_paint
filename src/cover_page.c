/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** cover_page
*/

#include "../include/my.h"

int change_option_colour(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->cercle[0].pos_circle.x +
    sfCircleShape_getGlobalBounds(ALL->cercle[0].c).width;
    float btnXposheight = ALL->cercle[0].pos_circle.y +
    sfCircleShape_getGlobalBounds(ALL->cercle[0].c).height;
    if (mouseX < btnXposwidth && mouseX > ALL->cercle[0].pos_circle.x &&
    mouseY < btnXposheight && mouseY > ALL->cercle[0].pos_circle.y) {
        return 1;
    }
    return 0;
}

void create_circle_aroud_option(PAINT_T *ALL)
{
    ALL->cercle[0].c = sfCircleShape_create();
    ALL->cercle[0].pos_circle.x = 60;
    ALL->cercle[0].pos_circle.y = 686;
    ALL->cercle[0].thickness = 5.76;
    ALL->cercle[0].radius = 59;
    sfCircleShape_setRadius(ALL->cercle[0].c, ALL->cercle[0].radius);
    sfCircleShape_setOutlineThickness(ALL->cercle[0].c,
    ALL->cercle[0].thickness);
    sfCircleShape_setOutlineColor(ALL->cercle[0].c, sfTransparent);
    sfCircleShape_setPosition(ALL->cercle[0].c,
    ALL->cercle[0].pos_circle);
    sfCircleShape_setFillColor(ALL->cercle[0].c, sfTransparent);
}

void draw_option_circle(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {200, 228, 228, 75};
    if (event.type == sfEvtMouseMoved) {
        if (change_option_colour(ALL)) {
            sfColor out = {0, 52, 52, 180};
            sfCircleShape_setFillColor(ALL->cercle[0].c, color);
            sfCircleShape_setOutlineColor(ALL->cercle[0].c, out);
        } else {
            sfCircleShape_setFillColor(ALL->cercle[0].c, sfTransparent);
            sfCircleShape_setOutlineColor(ALL->cercle[0].c, sfTransparent);
        }
    }
}

void draw_paint_rectangle(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        sfColor out = {0, 52, 52, 80};
        if (change_paint_color(ALL)) {
            sfRectangleShape_setFillColor(ALL->try[1].back, out);
        } else {
            sfRectangleShape_setFillColor(ALL->try[1].back, sfTransparent);
        }
    }
}
