/*
** EPITECH PROJECT, 2021
** rush-3.c
** File description:
** rush-3
*/

#include "include/my.h"
#include <stdio.h>

char *my_strdup(char const *src);
int my_put_float(float in, int coma);

int is_same_letter(char c1, char c2)
{
    if (c1 >= 'A' && c1 <= 'Z')
        c1 += 32;
    if (c2 >= 'A' && c2 <= 'Z')
        c2 += 32;
    if (c1 == c2)
        return 1;
    return 0;
}

int total_letter(char *str)
{
    int len = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            len++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            len++;
        }
    }
    return len;
}

int count_letter(char *str, char c)
{
    int count = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_same_letter(str[i], c) == 1) {
            count++;
        }
    }
    return (count);
}

float count_percentage(char *str, char c)
{
    int len = total_letter(str);
    int count = count_letter(str, c);
    return ((float)count / (float)len) * 100;
}

void rush_3(int argc, char **argv)
{
    for (int i = 2; i < argc; i++) {
        int count = count_letter(argv[1], argv[i][0]);
        float percentage = count_percentage(argv[1], argv[i][0]);
        my_putchar(argv[i][0]);
        my_putchar(':');
        my_put_nbr(count);
        my_putstr(my_strdup(" ("));
        my_put_float(percentage, 2);
        my_putstr(my_strdup("%)\n"));
    }
}
