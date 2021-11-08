/*
** EPITECH PROJECT, 2021
** convert_base.c
** File description:
** convert_base
*/

#include <stdlib.h>
#include "../include/infinit.h"
#include "../include/my.h"
#include "../include/string.h"

char *base_table = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

/*
 *  UTILS
 */
void set_base_table(char *new_base_table)
{
    base_table = new_base_table;
}

int get_value(char c)
{
    for (int i = 0; i < my_strlen(base_table); i++) {
        if (c == base_table[i]) return i;
    }
}

int size_result(char *nbr, char const *base_from, char const *base_to)
{
    int count = 0;
    while (infinit_compare(nbr, "0") == -1) {
        nbr = infinit_div(nbr, my_strdup(base_to));
        count++;
    }
    if (count == 0) return 1;
    return count;
}

/*
 *  CONVERT BASE 10
 */

char *convert_to_base10(char const *nbr, char const *base_from)
{
    int len = my_strlen(nbr);

    char *result = "0";
    for (int i = 0; i < my_strlen(nbr); i++) {
        char *add_part1 = my_int_to_str(get_value(nbr[i]));
        char *add_part2 = infinit_power(my_strdup(base_from), my_int_to_str(len - i - 1));
        char *add = infinit_mult(add_part1, add_part2);
        result = infinadd(result, add);
    }
    return result;
}


char *convert_from_base10(char const *nbr, char const *base_to)
{
    if (my_getnbr(base_to) < 2)
        return "0";

    int r_size = size_result(my_strdup(nbr), "10", my_strdup(base_to));
    char *result = malloc(r_size  + 1);
    char *reste = my_strdup(nbr);
    int i = 0;

    if (nbr[0] == '0')
        return my_char_to_str(base_table[0]);

    while (infinit_compare(reste, "0") == -1) {
        result[r_size - i - 1] = base_table[my_getnbr(infinit_mod(reste, my_strdup(base_to)))];
        reste = infinit_div(reste, my_strdup(base_to));
        i++;
    }
    result[r_size] = 0;
    return result;
}

/*
 *  CONVERT BASE N
 */

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    char *number = convert_to_base10(my_strdup(nbr), base_from);

    if (my_getnbr(base_to) < 2)
        return 0;

    int r_size = size_result(my_strdup(number), "10", my_strdup(base_to));
    char *result = malloc(r_size  + 1);
    char *reste = my_strdup(number);
    int i = 0;

    while (infinit_compare(reste, "0") == -1) {
        result[r_size - i - 1] = base_table[my_getnbr(infinit_mod(reste, my_strdup(base_to)))];
        reste = infinit_div(reste, my_strdup(base_to));
        i++;
    }
    result[r_size] = 0;
    return result;
}