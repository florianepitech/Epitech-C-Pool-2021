/*
** EPITECH PROJECT, 2021
** my_sort_word_array.c
** File description:
** my_sort_word_array
*/

#include <string.h>
#include "include/my.h"

int get_size(char **tab)
{
    int	i = 0;
    while (tab[i] != 0) {
	i++;
    }
    return i;
}

int my_sort_word_array(char **tab)
{
    int size = get_size(tab);
    for (int i = 0; i < size; i++) {
        if (i == 0)
            continue;
        if (strcmp(tab[i], tab[i - 1]) < 0) {
            char *str0 = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = str0;
            my_sort_word_array(tab);
            break;
        }
    }
    return 0;
}

void print_array_str(char **tab)
{
    int size = get_size(tab);
    for (int i = 0; i < size; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
