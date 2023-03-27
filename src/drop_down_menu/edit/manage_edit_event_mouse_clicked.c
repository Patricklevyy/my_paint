/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** manage_edit_event_mouse_clicked
*/

#include "../../../include/my.h"

void manage_edit_event_mouse_clicked(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        ALL->edit[0].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->edit[0].buttonRect);
        sfVector2f mouse =
        {(float)event.mouseButton.x, (float)event.mouseButton.y};
        ALL->edit[1].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->edit[1].buttonRect);
        if (sfFloatRect_contains(&ALL->edit[1].buttonBounds,
        mouse.x, mouse.y)) {
            check_press_pencil(ALL, event);
        }
        ALL->edit[2].buttonBounds =
        sfRectangleShape_getGlobalBounds(ALL->edit[2].buttonRect);
        if (sfFloatRect_contains(&ALL->edit[2].buttonBounds
        , mouse.x, mouse.y)) {
            check_press_scrub(ALL, event);
        }
    }
}
