/*
** EPITECH PROJECT, 2021
** my_advanced_sort_word_array.c
** File description:
** my_advanced_sort_word_array
*/

#include "include/my.h"

int my_advanced_sort_word_array (char **tab, int (*cmp) (char const *, char const *));
int get_size(char **tab);

int my_advanced_sort_word_array (char **tab, int (*cmp) (char const *, char const *))
{
    int size = get_size(tab);
    for (int i = 0; i < size; i++) {
        if (i == 0)
            continue;
        if ((cmp)(tab[i], tab[i - 1]) < 0) {
            char *str0 = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = str0;
            print_array_str(tab);
            my_advanced_sort_word_array(tab, cmp);
            break;
        }
    }
    return 0;
}

int get_size(char **tab)
{
    int	i = 0;
    while (tab[i] != 0) {
	i++;
    }
    return i;
}
