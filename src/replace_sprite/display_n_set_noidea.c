/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** display_n_set_noidea
*/

#include "../../include/my.h"

void display_no_idea_sprite(PAINT_T *ALL)
{
    create_no_idea_sprite(ALL);
    create_noidea_back_button(ALL);
    sfEvent event;
    sfVector2f text_pos = {1840, 15};
    sfText *text = create_back_text(text_pos);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            mngmt_no_idea_event(ALL, text, event);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}

void set_no_idea(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 98 && mouse.x <= 140) {
        if (mouse.y >= 505 && mouse.y <= 603) {
            display_no_idea_sprite(ALL);
        }
    }
}
