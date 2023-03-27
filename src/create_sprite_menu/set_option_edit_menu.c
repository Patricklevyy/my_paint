/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** set_option_edit_menu
*/

#include "../../include/my.h"

void get_back_from_option_edit_menu(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1832 && mouse.x <= 1913.5) {
        if (mouse.y >= 10 && mouse.y <= 60.5) {
            display_paint_part(ALL);
        }
    }
}

void manage_display_option_event_edit_menu(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {217, 208, 207, 255};
    sfColor color2 = {41, 147, 229, 150};
    if (event.type == sfEvtMouseButtonPressed)
        get_back_from_option_edit_menu(ALL);
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
    if (event.type == sfEvtMouseMoved) {
        if (change_back_option_color(ALL)) {
            sfRectangleShape_setFillColor(ALL->try[0].back, color2);
        } else
            sfRectangleShape_setFillColor(ALL->try[0].back, color);
    }
}

void display_option_edit_menu(PAINT_T *ALL)
{
    sfEvent event;
    create_option2_sprite(ALL);
    sfVector2f text_pos = {1840, 15};
    sfText *text = create_back_text(text_pos);
    create_option_back_button(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            manage_display_option_event_edit_menu(ALL, event);
            sfRenderWindow_clear(ALL->window->window, sfBlack);
            sfRenderWindow_drawSprite(ALL->window->window,
            ALL->params[1].sprite, NULL);
            sfRenderWindow_drawRectangleShape(ALL->window->window,
            ALL->try[0].back, NULL);
            sfRenderWindow_drawText(ALL->window->window, text, NULL);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}

void check_press_edit_menu(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        display_option_edit_menu(ALL);
    }
}

void set_function_edit_menu(PAINT_T *ALL, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 730 && mouse.x <= 841) {
        if (mouse.y >= 32 && mouse.y <= 72) {
            check_press_edit_menu(ALL, event);
        }
    }
}
