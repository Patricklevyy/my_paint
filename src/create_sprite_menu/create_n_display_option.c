/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** info
*/

#include "../../include/my.h"

void manage_display_option_event(PAINT_T *ALL, sfEvent event)
{
    sfColor color = {217, 208, 207, 255};
    sfColor color2 = {41, 147, 229, 150};
    if (event.type == sfEvtMouseButtonPressed)
        get_back_from_option(ALL);
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(ALL->window->window);
    }
    if (event.type == sfEvtMouseMoved) {
        if (change_back_option_color(ALL)) {
            sfRectangleShape_setFillColor(ALL->try[0].back, color2);
        } else
            sfRectangleShape_setFillColor(ALL->try[0].back, color);
    }
}

void create_option_back_button(PAINT_T *ALL)
{
    ALL->try[0].back = sfRectangleShape_create();
    ALL->try[0].back_pos.x = 1832;
    ALL->try[0].back_pos.y = 10;
    ALL->try[0].back_size.x = 80;
    ALL->try[0].back_size.y = 50;
    sfRectangleShape_setOutlineThickness(ALL->try[0].back, 1);
    sfRectangleShape_setOutlineColor(ALL->try[0].back, sfBlack);
    sfColor color = {217, 208, 207, 255};
    sfRectangleShape_setFillColor(ALL->try[0].back, color);
    sfRectangleShape_setPosition(ALL->try[0].back, ALL->try[0].back_pos);
    sfRectangleShape_setSize(ALL->try[0].back, ALL->try[0].back_size);
}

void create_option_sprite(PAINT_T *ALL)
{
    ALL->params[1].test =
    sfTexture_createFromFile("./pictures/option_en.png", NULL);
    ALL->params[1].sprite = sfSprite_create();
    ALL->params[1].position.x = 1;
    ALL->params[1].position.y = 1;
    sfSprite_setTexture(ALL->params[1].sprite, ALL->params[1].test, sfTrue);
    sfSprite_setPosition(ALL->params[1].sprite, ALL->params[1].position);
}

void display_option(PAINT_T *ALL)
{
    sfEvent event;
    create_option_sprite(ALL);
    sfVector2f text_pos = {1840, 15};
    sfText *text = create_back_text(text_pos);
    create_option_back_button(ALL);
    while (sfRenderWindow_isOpen(ALL->window->window)) {
        while (sfRenderWindow_pollEvent(ALL->window->window, &event)) {
            manage_display_option_event(ALL, event);
            sfRenderWindow_clear(ALL->window->window, sfBlack);
            sfRenderWindow_drawSprite(ALL->window->window,
            ALL->params[1].sprite, NULL);
            sfRenderWindow_drawRectangleShape(ALL->window->window,
            ALL->try[0].back, NULL);
            sfRenderWindow_drawText(ALL->window->window, text, NULL);
            sfRenderWindow_display(ALL->window->window);
        }
    }
}
