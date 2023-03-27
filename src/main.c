/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** main
*/

#include "../include/my.h"

void malloc_struct(PAINT_T *ALL)
{
    ALL->params = malloc(sizeof(MAP_T) * 100);
    ALL->window = malloc(sizeof(SETTINGS_T) * 100);
    ALL->try = malloc(sizeof(rectangle_T) * 100);
    ALL->cercle = malloc(sizeof(circle_T) * 100);
    ALL->colors = malloc(sizeof(colors_mngmt_T) * 100);
    ALL->menu = malloc(sizeof(Drop_down_T) * 100);
    ALL->edit = malloc(sizeof(Drop_down_edit_T) * 100);
}

void free_struct(PAINT_T *ALL)
{
    free(ALL->edit);
    free(ALL->menu);
    free(ALL->colors);
    free(ALL->cercle);
    free(ALL->try);
    free(ALL->window);
    free(ALL->params);
    free(ALL);
}

void destroy_sprite(PAINT_T *ALL)
{
    sfSprite_destroy(ALL->params->sprite);
    sfRenderWindow_destroy(ALL->window->window);
}

int main(int ac, char **av)
{
    PAINT_T *ALL = malloc(sizeof(PAINT_T));
    malloc_struct(ALL);
    if (ac != 1) {
        return 84;
    } else {
        set_windows(ALL);
        base_my_paint(ALL);
    }
    destroy_sprite(ALL);
    free_struct(ALL);
    return 0;
}
