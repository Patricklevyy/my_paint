/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** manage_file_event_mouse_clicked
*/

#include "../../../include/my.h"

void manage_file_event_mouse_clicked(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        ALL->menu[0].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->menu[0].buttonRect);
        sfVector2f mouse =
        {(float)event.mouseButton.x, (float)event.mouseButton.y};
        ALL->menu[1].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->menu[1].buttonRect);
        if (sfFloatRect_contains(&ALL->menu[1].buttonBounds,
        mouse.x, mouse.y)) {
            display_paint_part(ALL);
        }
        ALL->menu[3].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->menu[3].buttonRect);
        if (sfFloatRect_contains(&ALL->menu[3].buttonBounds,
        mouse.x, mouse.y)) {
            add_condition_to_save_or_not(ALL);
        }
    }
}
