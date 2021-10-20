/*
** EPITECH PROJECT, 2021
** my_show_word_array.c
** File description:
** my_show_word_array
*/

#include "include/my.h"

int get_heigth(char **map);
int my_show_word_array(char* const *tab);

int get_heigth(char **tab)
{
    int i = 0;
    while (tab[i] != 0) {
        i++;
    }
    return i;
}

int my_show_word_array(char* const *tab)
{
    int heigth = get_heigth(tab);
    for (int h = 0; h < heigth; h++) {
        int length = my_strlen(tab[h]);
        write(1, tab[h], length);
        my_putchar('\n');
    }
}
