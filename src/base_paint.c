/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** base_paint
*/

#include "../include/my.h"

void set_windows(PAINT_T *ALL)
{
    ALL->window->mode.bitsPerPixel = 32;
    ALL->window->mode.height = 1080;
    ALL->window->mode.width = 1920;
    ALL->window->window = sfRenderWindow_create(ALL->window->mode,
    "my_paint", sfDefaultStyle, NULL);
}

void manage_event_base_paint(PAINT_T *ALL, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        set_option(ALL);
    if (event.type == sfEvtMouseButtonPressed)
        go_to_paint_part(ALL);
    if (event.type == sfEvtMouseButtonPressed)
        set_no_idea(ALL);
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
}

void base_my_paint(PAINT_T *ALL)
{
    sfEvent event;
    create_white_backgound(ALL); create_circle_aroud_option(ALL);
    create_ampoule(ALL); create_box_paint(ALL); create_base_paint_img(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            manage_event_base_paint(ALL, event);
            draw_option_circle(ALL, event);
            draw_paint_rectangle(ALL, event);
            sfRenderWindow_clear(ALL->window->window, sfBlack);
            sfRenderWindow_drawSprite(ALL->window->window,
            ALL->params[21].sprite, NULL);
            sfRenderWindow_drawSprite(ALL->window->window,
            ALL->params[0].sprite, NULL); change_ampoule(ALL);
            sfRenderWindow_drawRectangleShape(ALL->window->window,
            ALL->try[1].back, NULL);
            sfRenderWindow_drawCircleShape(ALL->window->window,
            ALL->cercle[0].c, NULL);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}
