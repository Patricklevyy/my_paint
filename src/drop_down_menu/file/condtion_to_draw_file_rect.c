/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** condtion_to_draw_file_rect
*/

#include "../../../include/my.h"

void init_file_bool(PAINT_T *ALL)
{
    ALL->menu[0].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->menu[0].buttonRect);
    sfVector2i mouse =
    sfMouse_getPositionRenderWindow(ALL->window->window);
    ALL->menu[0].bool =
    sfFloatRect_contains(&ALL->menu[0].buttonBounds, mouse.x, mouse.y);
    ALL->menu[1].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->menu[1].buttonRect);
    ALL->menu[1].bool = sfFalse;
    ALL->menu[2].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->menu[2].buttonRect);
    ALL->menu[3].buttonBounds =
    sfRectangleShape_getGlobalBounds(ALL->menu[3].buttonRect);
}

void condition_with_file_bool(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    ALL->menu[0].bool =
    sfFloatRect_contains(&ALL->menu[0].buttonBounds, mouse.x, mouse.y);
    if (ALL->menu[0].bool) {
        ALL->menu[1].bool = sfTrue;
    } else {
        ALL->menu[3].bool =
        sfFloatRect_contains(&ALL->menu[1].buttonBounds, mouse.x, mouse.y);
        ALL->menu[4].bool =
        sfFloatRect_contains(&ALL->menu[2].buttonBounds, mouse.x, mouse.y);
        ALL->menu[5].bool =
        sfFloatRect_contains(&ALL->menu[3].buttonBounds, mouse.x, mouse.y);
        if (!ALL->menu[3].bool && !ALL->menu[4].bool && !ALL->menu[5].bool) {
            ALL->menu[1].bool = sfFalse;
        }
    }
}

int condition_to_draw_file_rect_n_text(PAINT_T *ALL)
{
    sfVector2f pos1 = {456, 90}; sfVector2f pos2 = {456, 138};
    sfVector2f pos3 = {456, 182};
    char *string1 = "New file"; char *string2 = "Open file";
    char *string3 = "Save file";
    sfText *new_file = create_new_file_text(pos1, string1);
    sfText *open_file = create_new_file_text(pos2, string2);
    sfText *save_file = create_new_file_text(pos3, string3);
    if (ALL->menu[1].bool) {
        sfRenderWindow_drawRectangleShape(ALL->window->window,
        ALL->menu[1].buttonRect, NULL);
        sfRenderWindow_drawRectangleShape(ALL->window->window,
        ALL->menu[2].buttonRect, NULL);
        sfRenderWindow_drawRectangleShape(ALL->window->window,
        ALL->menu[3].buttonRect, NULL);
        sfRenderWindow_drawText(ALL->window->window, new_file, NULL);
        sfRenderWindow_drawText(ALL->window->window, open_file, NULL);
        sfRenderWindow_drawText(ALL->window->window, save_file, NULL);
        return 1;
    }
    return 0;
}
