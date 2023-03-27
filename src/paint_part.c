/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** paint_part
*/

#include "../include/my.h"

int change_paint_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->try[1].back_pos.x +
    sfRectangleShape_getLocalBounds(ALL->try[1].back).width;
    float btnXposheight = ALL->try[1].back_pos.y +
    sfRectangleShape_getLocalBounds(ALL->try[1].back).height;
    if (mouseX < btnXposwidth && mouseX > ALL->try[1].back_pos.x &&
    mouseY < btnXposheight && mouseY > ALL->try[1].back_pos.y) {
        return 1;
    }
    return 0;
}

void create_box_paint(PAINT_T *ALL)
{
    ALL->try[1].back = sfRectangleShape_create();
    ALL->try[1].back_pos.x = 80;
    ALL->try[1].back_pos.y = 275;
    ALL->try[1].back_size.x = 105;
    ALL->try[1].back_size.y = 143;
    sfRectangleShape_setOutlineThickness(ALL->try[1].back, 1);
    sfRectangleShape_setOutlineColor(ALL->try[1].back, sfTransparent);
    sfRectangleShape_setFillColor(ALL->try[1].back, sfTransparent);
    sfRectangleShape_setPosition(ALL->try[1].back, ALL->try[1].back_pos);
    sfRectangleShape_setSize(ALL->try[1].back, ALL->try[1].back_size);
}

void go_to_paint_part(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 81 && mouse.x <= 182.5) {
        if (mouse.y >= 284 && mouse.y <= 412) {
            display_paint_part(ALL);
        }
    }
}

void set_pixels(PAINT_T *ALL)
{
    for (int i = 0; i < 1920 * 1080 * 4; i += 4) {
        ALL->params->pixels[i] = 255;
        ALL->params->pixels[i + 1] = 255;
        ALL->params->pixels[i + 2] = 255;
        ALL->params->pixels[i + 3] = 255;
    }
}

void display_paint_part(PAINT_T *ALL)
{
    sfEvent event;
    create_sprite(ALL);
    create_all_drop_down_rect(ALL);
    int radius = 10;
    sfBool isDrawing = sfFalse;
    ALL->params->pixels = malloc(1920 * 1080 * 4);
    set_pixels(ALL);
    init_color(ALL);
    init_file_bool(ALL);
    init_edit_bool(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            draw_drop_down_rect_evt_paint_part(ALL);
            sfRenderWindow_display(ALL->window->window);
            sfColor color = recup_colors(ALL);
            condition_mouse_to_draw(ALL, radius, color, isDrawing);
        }
    }
}
