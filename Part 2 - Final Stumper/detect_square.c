/*
** EPITECH PROJECT, 2021
** detect_square.c
** File description:
** detect_square
*/

#include <stdlib.h>

int *get_empty_int_array(int size)
{
    int *result = malloc(sizeof(int) * size + 1);
    for (int i = 0; i < size + 1; i++)
        result[i] = 0;
    return result;
}

int *detect_witch_square(char *str, int width, int heigth)
{
    char c1 = str[0];
    char c2 = str[width - 1];
    char c3 = str[width*(heigth - 1) + (heigth - 1)];
    int *result = get_empty_int_array(5);

    if (heigth == 1 || width == 1) {
        if (c1 == 'o')
            result[0] = 1;
        else if (c1 == '*')
            result[0] = 2;
        else if(c1 == 'B') {
            result[0] = 3;
            result[1] = 4;
            result[2] = 5;
        }
    } else {
        if (c1 == 'o')
            result[0] = 1;
        else if (c1 == '/')
            result[0] = 2;
        else if (c2 == 'A')
            result[0] = 3;
        else if (c3 == 'C')
            result[0] = 5;
        else
            result[0] = 4;
    }
    return result;
}
