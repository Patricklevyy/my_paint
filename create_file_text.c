/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_file_text
*/

#include "include/my.h"

sfText *create_new_file_text(sfVector2f text_pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font =
    sfFont_createFromFile("georgia/Georgia Bold Italic font.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setOutlineColor(text, sfBlack);
    sfText_setColor(text, sfWhite);
    sfText_setCharacterSize(text, 25);
    sfText_setPosition(text, text_pos);
    return (text);
}
