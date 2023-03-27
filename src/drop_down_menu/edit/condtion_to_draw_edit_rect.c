/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** condtion_to_draw_edit_rect
*/

#include "../../../include/my.h"

void init_edit_bool(PAINT_T *ALL)
{
    ALL->edit[0].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->edit[0].buttonRect);
    sfVector2i mouse =
    sfMouse_getPositionRenderWindow(ALL->window->window);
    ALL->edit[0].bool =
    sfFloatRect_contains(&ALL->edit[0].buttonBounds, mouse.x, mouse.y);
    ALL->edit[1].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->edit[1].buttonRect);
    ALL->edit[1].bool = sfFalse;
    ALL->edit[2].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->edit[2].buttonRect);
}

void condition_with_edit_bool(PAINT_T *ALL)
{
    sfVector2i mouse =
    sfMouse_getPositionRenderWindow(ALL->window->window);
    mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    ALL->edit[0].bool =
    sfFloatRect_contains(&ALL->edit[0].buttonBounds, mouse.x, mouse.y);
    if (ALL->edit[0].bool) {
        ALL->edit[1].bool = sfTrue;
    } else {
        ALL->edit[3].bool =
        sfFloatRect_contains(&ALL->edit[1].buttonBounds, mouse.x, mouse.y);
        ALL->edit[4].bool =
        sfFloatRect_contains(&ALL->edit[2].buttonBounds, mouse.x, mouse.y);
        if (!ALL->edit[3].bool && !ALL->edit[4].bool) {
            ALL->edit[1].bool = sfFalse;
        }
    }
}

int condition_to_draw_edit_rect_n_text(PAINT_T *ALL)
{
    sfVector2f pencil_pos = {605, 90};
    sfVector2f erase_pos = {605, 138};
    char *string1 = "Pencil";
    char *string2 = "Erase";
    sfText *pencil = create_new_file_text(pencil_pos, string1);
    sfText *erase = create_new_file_text(erase_pos, string2);
    if (ALL->edit[1].bool) {
        sfRenderWindow_drawRectangleShape(ALL->window->window,
        ALL->edit[1].buttonRect, NULL);
        sfRenderWindow_drawRectangleShape(ALL->window->window,
        ALL->edit[2].buttonRect, NULL);
        sfRenderWindow_drawText(ALL->window->window, pencil, NULL);
        sfRenderWindow_drawText(ALL->window->window, erase, NULL);
        return 1;
    }
    return 0;
}
