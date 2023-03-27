/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_all_drop_down_rect
*/

#include "../../include/my.h"

void create_all_drop_down_rect(PAINT_T *ALL)
{
    create_first_file_rect(ALL);
    create_second_file_rect(ALL);
    create_third_file_rect(ALL);
    create_fourth_file_rect(ALL);
    create_first_edit_rect(ALL);
    create_second_edit_rect(ALL);
    create_third_edit_rect(ALL);
}

void draw_drop_down_rect_evt_paint_part(PAINT_T *ALL)
{
    sfEvent event;
    sfVector2f text_pos = {1840, 15};
    sfText *text = create_back_text(text_pos);
    condition_with_edit_bool(ALL);
    sfRenderWindow_clear(ALL->window->window, sfWhite);
    manage_evt_display_paint_part2(ALL, event, text);
    condition_with_file_bool(ALL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->menu[0].buttonRect, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->edit[0].buttonRect, NULL);
    if (condition_to_draw_file_rect_n_text(ALL) == 1) {
        manage_file_event_mouse_clicked(ALL, event);
    }
    if (condition_to_draw_edit_rect_n_text(ALL) == 1) {
        manage_edit_event_mouse_clicked(ALL, event);
    }
}
