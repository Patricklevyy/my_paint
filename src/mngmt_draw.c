/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** mngmt_draw
*/

#include "../include/my.h"

void draw_2(PAINT_T *ALL, int x, int y, sfColor color)
{
    int radius = 10;
    sfVector2i pos = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (x >= 0 && x < 1920 && y >= 0 && y < 1080) {
        int dx = x - pos.x;
        int dy = y - pos.y;
        if (dx * dx + dy * dy <= radius * radius) {
            int index = (x + y * 1920) * 4;
            ALL->params->pixels[index] = color.r;
            ALL->params->pixels[index + 1] = color.g;
            ALL->params->pixels[index + 2] = color.b;
            ALL->params->pixels[index + 3] = color.a;
        }
    }
}

void draw(PAINT_T *ALL, int radius, sfColor color)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(ALL->window->window);
    for (int x = pos.x - radius; x <= pos.x + radius; x++) {
        for (int y = pos.y - radius; y <= pos.y + radius; y++) {
            draw_2(ALL, x, y, color);
        }
    }
}

void condition_mouse_to_draw(PAINT_T *ALL, int rad, sfColor col, sfBool isD)
{
    if (sfMouse_isButtonPressed(sfMouseLeft))
        isD = sfTrue;
    else
        isD = sfFalse;
    if (isD) {
        draw(ALL, rad, col);
        sfTexture_updateFromPixels(ALL->params[21].test,
        ALL->params->pixels, 1920, 1080, 0, 0);
    }
}
