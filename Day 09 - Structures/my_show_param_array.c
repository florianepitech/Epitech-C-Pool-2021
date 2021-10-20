/*
** EPITECH PROJECT, 2021
** my_show_param_array.c
** File description:
** my_show_param_array
*/

#include "include/my.h"
//#include <stdlib.h>

//#include "my_struct.h"

struct info_param *my_params_to_array (int ac, char **av);
int my_show_word_array(char* const *tab);

int my_show_param_array (struct info_param const *par)
{
    int i = 0;
    while (par[i].str != 0) {
        my_put_nbr(par[i].str);
        my_putchar('\n');
        my_putstr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        i++;
    }
}

/*
int main(int a, char **b) {
    my_show_param_array(my_params_to_array(a, b));
}
*/
