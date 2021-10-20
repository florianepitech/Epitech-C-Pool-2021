/*
** EPITECH PROJECT, 2021
** concat_params.c
** File description:
** concat_params
*/

#include <stdlib.h>
#include "include/libmy.h"

char *concat_params(int argc, char **argv);

char *concat_params(int argc, char **argv)
{
    int total_length = 0;
    for(int i = 0; i < argc; i++) {
        total_length += my_strlen(argv[0]);
    }
    char *str = malloc(sizeof(char) * (total_length + 1) + argc);

    int i = 0;
    for (int c = 0; c < argc; c++) {
        int length = my_strlen(argv[c]);
        for (int j = 0; j < length; j++) {
            str[i] = argv[c][j];
            i++;
        }
        str[i] = '\n';
        i++;
    }
    str[total_length] = '\0';
    return str;
}
