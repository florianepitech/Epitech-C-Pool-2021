/*
** EPITECH PROJECT, 2021
** rush3.c
** File description:
** rush3
*/

#include <unistd.h>
#include "rush3.h"
#include "my.h"

int get_heigth_square(char *str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            counter++;
    }
    return counter;
}

int get_width_square(char *str)
{
    int counter;

    for (counter = 0; str[counter] != '\n'; counter++);
    return counter;
}

void rush3(char *str)
{
    int width_square = get_width_square(str);
    int heigth_square = get_heigth_square(str);

    if (width_square <= 0 || heigth_square <= 0) {
        my_putstr("none\n");
        return;
    }

    int *square_types = detect_witch_square(str, width_square, heigth_square);

    for (int i = 0; square_types[i] != '\0'; i++) {
        if (i != 0)
            my_putstr(" || ");
        my_putstr("[rush1-");
        my_put_nbr(square_types[i]);
        my_putstr("] ");
        my_put_nbr(width_square);
        my_putchar(' ');
        my_put_nbr(heigth_square);
    }
    my_putchar('\n');
}
