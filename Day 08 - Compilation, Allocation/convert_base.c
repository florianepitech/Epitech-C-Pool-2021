/*
** EPITECH PROJECT, 2021
** convert_base.c
** File description:
** convert_base
*/

#include <stdlib.h>
#include "include/libmy.h"

char base_table[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int get_value(char c)
{
    for (int i = 0; i < my_strlen(base_table); i++) {
        if (c == base_table[i]) return i;
    }
}

int size_result(int nbr, int const base_from, int const base_to)
{
    int count = 0;
    while (nbr > 0) {
        nbr = nbr / base_to;
        count++;
    }
    return count;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int base = my_getnbr(base_from), new_base = my_getnbr(base_to);
    int number = my_getnbr(nbr);

    if (new_base < 2 || new_base > 36) {
        return 0;
    }
    
    int r_size = size_result(number, base, new_base);
    char *result = malloc(r_size  + 1);

    int reste = number;
    int i = 0;
    while (reste > 0) {
        //printf("%i / %i = %i (%i)\n", reste, new_base, reste / new_base, reste % new_base);
        result[r_size - i - 1] = base_table[reste % new_base]; //reste % new_base + '0'
        reste = reste / new_base;
        i++;
    }
    result[r_size] = 0;

    //printf("resultat = %s\n", my_strdup(result));
    //printf("nombre de chiffre dans le resultat = %i\n", size_result(number, base, new_base));
    //printf("base %i => base %i pour %i\n\n", base, new_base, number);
    return result;
}

/*
int main_test(void)
{
    printf("starting...\n");
    convert_base(my_strdup("1830"), my_strdup("10"), my_strdup("2"));
    convert_base(my_strdup("1830"), my_strdup("10"), my_strdup("16"));
    convert_base(my_strdup("1830"), my_strdup("10"), my_strdup("32"));
    convert_base(my_strdup("11100100110"), my_strdup("2"), my_strdup("10"));
}
*/
