/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_back_paint_part
*/

#include "../../include/my.h"

void create_back_paint_part(PAINT_T *ALL)
{
    ALL->try[3].back = sfRectangleShape_create();
    ALL->try[3].back_pos.x = 1832;
    ALL->try[3].back_pos.y = 10;
    ALL->try[3].back_size.x = 83;
    ALL->try[3].back_size.y = 53;
    sfRectangleShape_setOutlineThickness(ALL->try[3].back, 1);
    sfRectangleShape_setOutlineColor(ALL->try[3].back, sfBlack);
    sfColor color = {217, 208, 207, 255};
    sfRectangleShape_setFillColor(ALL->try[3].back, color);
    sfRectangleShape_setPosition(ALL->try[3].back, ALL->try[3].back_pos);
    sfRectangleShape_setSize(ALL->try[3].back, ALL->try[3].back_size);
}

int change_back_paint_part_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->try[3].back_pos.x +
    sfRectangleShape_getLocalBounds(ALL->try[3].back).width;
    float btnXposheight = ALL->try[3].back_pos.y +
    sfRectangleShape_getLocalBounds(ALL->try[3].back).height;
    if (mouseX < btnXposwidth && mouseX > ALL->try[3].back_pos.x &&
    mouseY < btnXposheight && mouseY > ALL->try[3].back_pos.y) {
        return 1;
    }
    return 0;
}

void manage_back_paint_part_event(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {217, 208, 207, 255};
    sfColor color2 = {41, 147, 229, 150};
    if (event.type == sfEvtMouseMoved) {
        if (change_back_paint_part_color(ALL)) {
            sfRectangleShape_setFillColor(ALL->try[3].back, color2);
        } else
            sfRectangleShape_setFillColor(ALL->try[3].back, color);
    }
}

void go_to_menu_from_paint(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1832 && mouse.x <= 1913.5) {
        if (mouse.y >= 10 && mouse.y <= 60.5) {
            base_my_paint(ALL);
        }
    }
}
