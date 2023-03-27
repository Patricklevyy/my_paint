/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** restart_paint
*/

#include "../include/my.h"

void restrat_paint(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1721 && mouse.x <= 1762) {
        if (mouse.y >= 46 && mouse.y <= 100) {
            display_paint_part(ALL);
        }
    }
}

void back_to_menu(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1807 && mouse.x <= 1852) {
        if (mouse.y >= 43 && mouse.y <= 93) {
            base_my_paint(ALL);
        }
    }
}
