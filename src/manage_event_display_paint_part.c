/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** manage_event_display_paint_part
*/

#include "../include/my.h"

void change_sprite(PAINT_T *ALL)
{
    change_replace_file_saved(ALL);
    change_edit(ALL);
    draw_rec_color(ALL);
    change_scrub(ALL);
    change_pencil(ALL);
    change_about(ALL);
    change_file(ALL);
    change_help(ALL);
    change_edit(ALL);
}

void manage_event_display_paint_part(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
    if (event.type == sfEvtMouseButtonPressed)
        set_file_saved(ALL);
    set_function_edit_menu(ALL, event);
    set_about_edit_menu(ALL, event);
    set_scrub(ALL, event);
    set_pencil(ALL, event);
    manage_event_mouse_blue(ALL, event);
    manage_event_mouse_green(ALL, event);
    manage_event_mouse_white(ALL, event);
    manage_event_mouse_yellow(ALL, event);
    manage_event_mouse_red(ALL, event);
    manage_event_mouse_black(ALL, event);
}

void manage_evt_display_paint_part2(PAINT_T *ALL, sfEvent event, sfText *text)
{
    manage_event_display_paint_part(ALL, event);
    manage_back_paint_part_event(ALL, event);
    if (event.type == sfEvtMouseButtonPressed)
        go_to_menu_from_paint(ALL);
    sfRenderWindow_clear(ALL->window->window, sfBlack);
    sfRenderWindow_drawSprite(ALL->window->window,
    ALL->params[21].sprite, NULL);
    sfRenderWindow_drawSprite(ALL->window->window,
    ALL->params[2].sprite, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->try[3].back, NULL);
    sfRenderWindow_drawText(ALL->window->window, text, NULL);
    change_sprite(ALL);
}
