/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** no_idea
*/

#include "../../include/my.h"

void get_back_from_no_idea(PAINT_T *ALL)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(ALL->window->window);
    if (mouse.x >= 1832 && mouse.x <= 1913.5) {
        if (mouse.y >= 10 && mouse.y <= 60.5) {
            base_my_paint(ALL);
        }
    }
}

int change_no_idea_back_color(PAINT_T *ALL)
{
    float mouseX = sfMouse_getPositionRenderWindow(ALL->window->window).x;
    float mouseY = sfMouse_getPositionRenderWindow(ALL->window->window).y;
    float btnXposwidth = ALL->try[2].back_pos.x +
    sfRectangleShape_getLocalBounds(ALL->try[2].back).width;
    float btnXposheight = ALL->try[2].back_pos.y +
    sfRectangleShape_getLocalBounds(ALL->try[2].back).height;
    if (mouseX < btnXposwidth && mouseX > ALL->try[2].back_pos.x &&
    mouseY < btnXposheight && mouseY > ALL->try[2].back_pos.y) {
        return 1;
    }
    return 0;
}

void create_noidea_back_button(PAINT_T *ALL)
{
    ALL->try[2].back = sfRectangleShape_create();
    ALL->try[2].back_pos.x = 1832;
    ALL->try[2].back_pos.y = 10;
    ALL->try[2].back_size.x = 80;
    ALL->try[2].back_size.y = 50;
    sfRectangleShape_setOutlineThickness(ALL->try[2].back, 1);
    sfRectangleShape_setOutlineColor(ALL->try[2].back, sfBlack);
    sfColor color = {217, 208, 207, 255};
    sfRectangleShape_setFillColor(ALL->try[2].back, color);
    sfRectangleShape_setPosition(ALL->try[2].back, ALL->try[2].back_pos);
    sfRectangleShape_setSize(ALL->try[2].back, ALL->try[2].back_size);
}

void create_no_idea_sprite(PAINT_T *ALL)
{
    ALL->params[3].test =
    sfTexture_createFromFile("./pictures/no_idea.png", NULL);
    ALL->params[3].sprite = sfSprite_create();
    ALL->params[3].position.x = 1;
    ALL->params[3].position.y = 1;
    sfSprite_setTexture(ALL->params[3].sprite, ALL->params[3].test, sfTrue);
    sfSprite_setPosition(ALL->params[3].sprite, ALL->params[3].position);
}

void mngmt_no_idea_event(PAINT_T *ALL, sfText *text, sfEvent event)
{
    sfColor color = {217, 208, 207, 255};
    sfColor color2 = {41, 147, 229, 150};
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(ALL->window->window);
    if (event.type == sfEvtMouseMoved) {
        if (change_no_idea_back_color(ALL)) {
            sfRectangleShape_setFillColor(ALL->try[2].back, color2);
        } else
            sfRectangleShape_setFillColor(ALL->try[2].back, color);
    }
    if (event.type == sfEvtMouseButtonPressed)
        get_back_from_no_idea(ALL);
    sfRenderWindow_clear(ALL->window->window, sfBlack);
    sfRenderWindow_drawSprite(ALL->window->window,
    ALL->params[3].sprite, NULL);
    sfRenderWindow_drawRectangleShape(ALL->window->window,
    ALL->try[2].back, NULL);
    sfRenderWindow_drawText(ALL->window->window, text, NULL);
}
