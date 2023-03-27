/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_sprite
*/

#include "../../include/my.h"

void create_sprite(PAINT_T *ALL)
{
    create_rect_color(ALL);
    create_scrub(ALL);
    create_pencil(ALL);
    create_replace_file_saved(ALL);
    create_back_paint_part(ALL);
    create_edit_menu(ALL);
    create_edit_sprite(ALL);
    create_file_sprite(ALL);
    create_help_sprite(ALL);
    create_about_sprite(ALL);
}
