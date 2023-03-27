/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** set_option
*/

#include "../../include/my.h"

int change_back_option_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->try[0].back_pos.x +
    sfRectangleShape_getLocalBounds(ALL->try[0].back).width;
    float btnXposheight = ALL->try[0].back_pos.y +
    sfRectangleShape_getLocalBounds(ALL->try[0].back).height;
    if (mouseX < btnXposwidth && mouseX > ALL->try[0].back_pos.x &&
    mouseY < btnXposheight && mouseY > ALL->try[0].back_pos.y) {
        return 1;
    }
    return 0;
}

void get_back_from_option(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1832 && mouse.x <= 1913.5) {
        if (mouse.y >= 10 && mouse.y <= 60.5) {
            base_my_paint(ALL);
        }
    }
}

void set_option(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 73 && mouse.x <= 158) {
        if (mouse.y >= 700 && mouse.y <= 786) {
            display_option(ALL);
        }
    }
}
