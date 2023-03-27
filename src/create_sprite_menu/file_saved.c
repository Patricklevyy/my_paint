/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** file_saved
*/

#include "../../include/my.h"

void create_file_saved(PAINT_T *ALL)
{
    ALL->params[4].test =
    sfTexture_createFromFile("./pictures/file_saved.png", NULL);
    ALL->params[4].sprite = sfSprite_create();
    ALL->params[4].position.x = 1;
    ALL->params[4].position.y = 1;
    sfSprite_setTexture(ALL->params[4].sprite, ALL->params[4].test, sfTrue);
    sfSprite_setPosition(ALL->params[4].sprite, ALL->params[4].position);
}

void mngmt_file_saved_event(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
    if (event.type == sfEvtMouseButtonPressed)
        restrat_paint(ALL);
    if (event.type == sfEvtMouseButtonPressed)
        back_to_menu(ALL);
    draw_circle_restart(ALL, event);
    draw_circle_repaint(ALL, event);
    sfRenderWindow_clear(ALL->window->window, sfBlack);
    sfRenderWindow_drawSprite(ALL->window->window,
    ALL->params[4].sprite, NULL);
    sfRenderWindow_drawCircleShape(ALL->window->window, ALL->cercle[1].c, NULL);
    sfRenderWindow_drawCircleShape(ALL->window->window, ALL->cercle[2].c, NULL);
}

void display_file_saved(PAINT_T *ALL)
{
    sfEvent event;
    create_file_saved(ALL);
    create_circle_restart(ALL);
    create_circle_repaint(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            mngmt_file_saved_event(ALL, event);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}

void add_condition_to_save_or_not(PAINT_T *ALL)
{
    if (recup_file_name(ALL) == 1)
        display_file_saved(ALL);
    display_file_not_saved(ALL);
}

void set_file_saved(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 58.5 && mouse.x <= 168.5) {
        if (mouse.y >= 821 && mouse.y <= 917) {
            add_condition_to_save_or_not(ALL);
        }
    }
}
