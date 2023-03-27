/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** file_not_saved
*/

#include "../../include/my.h"

void create_file_not_saved(PAINT_T *ALL)
{
    ALL->params[14].test =
    sfTexture_createFromFile("./pictures/file_not_save.png", NULL);
    ALL->params[14].sprite = sfSprite_create();
    ALL->params[14].position.x = 1;
    ALL->params[14].position.y = 1;
    sfSprite_setTexture(ALL->params[14].sprite, ALL->params[14].test, sfTrue);
    sfSprite_setPosition(ALL->params[14].sprite, ALL->params[14].position);
}

void mngmt_file_not_saved_event(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
    if (event.type == sfEvtMouseButtonPressed)
        go_back_to_paint_from_not_saved(ALL);
    if (event.type == sfEvtMouseButtonPressed)
        go_back_to_menu_from_not_saved(ALL);
    draw_circle_restart_from_not_saved(ALL, event);
    draw_circle_go_to_menu_from_notsaved(ALL, event);
    sfRenderWindow_clear(ALL->window->window, sfBlack);
    sfRenderWindow_drawSprite(ALL->window->window,
    ALL->params[14].sprite, NULL);
    sfRenderWindow_drawCircleShape(ALL->window->window, ALL->cercle[3].c, NULL);
    sfRenderWindow_drawCircleShape(ALL->window->window, ALL->cercle[4].c, NULL);
}

void display_file_not_saved(PAINT_T *ALL)
{
    sfEvent event;
    create_file_not_saved(ALL);
    create_circle_restart_from_not_saved(ALL);
    create_circle_go_to_menu_from_notsaved(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            mngmt_file_not_saved_event(ALL, event);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}
