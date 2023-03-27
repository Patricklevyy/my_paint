/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** create_text_back
*/

#include "../../include/my.h"

sfText *create_back_text(sfVector2f text_pos)
{
    sfText *text = sfText_create();
    sfFont *font =
    sfFont_createFromFile("./glossy_sheen/Glossy Sheen Shadow DEMO.ttf");
    sfText_setFont(text, font);
    sfText_setString(text, "BACK");
    sfText_setOutlineColor(text, sfBlack);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, text_pos);
    return (text);
}
