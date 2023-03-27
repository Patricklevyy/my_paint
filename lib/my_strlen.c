/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** task03
*/

#include "../include/my.h"

int my_strlen( char const *str)
{
    int p = 0;
    for (int i = 0 ; str[i] != '\0' ; i++){
        p += 1;
    }
    return (p);
}
