/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** recup_file_name
*/

#include "../include/my.h"

int recup_file_name(PAINT_T *ALL)
{
    char *str = NULL;

    size_t size = 0;

    write(1, "Enter the file name : ", 22);

    int len = getline(&str, &size, stdin);
    str[len - 1] = '\0';
    sfImage *image = sfImage_createFromPixels(1920, 1080, ALL->params->pixels);

    if (sfImage_saveToFile(image, str)) {
        write(1, str, my_strlen(str));
        write(1, ": SUCCESFULLY SAVED!\n", 21);
        return 1;
    }

    sfImage_destroy(image);

    return 0;
}
