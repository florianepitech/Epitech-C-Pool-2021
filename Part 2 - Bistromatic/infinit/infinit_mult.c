/*
** EPITECH PROJECT, 2021
** mult
** File description:
** mult
*/

#define ATOD(x) (x - '0')
#define DTOA(x) (x + '0')

#include "../include/my.h"
#include "../include/string.h"
#include "../include/infinit.h"

char *infinit_add(char *x, char *y);
char *infinit_pow10(char *nbr, int pow);

char *infinit_mult_calc(char *nbr1, char *nbr2)
{
    char *final_result = my_strdup("0");
    int len1 = my_strlen(nbr1);
    int len2 = my_strlen(nbr2);

    for (int i = 0; i < len2; i++) {
        for (int j = 0; j < len1; j++) {
            char rep = ATOD(nbr2[len2 - 1 - i]) * ATOD(nbr1[len1 - 1 - j]);
            char *rep_str = my_int_to_str((int)rep);
            rep_str = infinit_pow10(rep_str, j + i);
            final_result = infinadd(final_result, rep_str);
        }
    }
    return final_result;
}

char *infinit_mult(char *nbr1, char *nbr2) {
    char *result;

    if (number_is_neg(nbr1) || number_is_neg(nbr2)) {
        if (!number_is_neg(nbr1) && number_is_neg(nbr2)) {
            char *new_nbr2 = my_str_cut(nbr2, 1, nbr2[my_strlen(nbr2 - 1)]);
            result = infinit_mult_calc(nbr1, new_nbr2);
            result = my_str_concat(my_strdup("-"), result);
        }
        if (!number_is_neg(nbr2) && number_is_neg(nbr1)) {
            char *new_nbr1 = my_str_cut(nbr1, 1, nbr1[my_strlen(nbr1 - 1)]);
            result = infinit_mult_calc(nbr2, new_nbr1);
            result = my_str_concat("-", result);
        }
    }
    if (number_is_neg(nbr1) && number_is_neg(nbr2)) {
        char *new_nbr1 = my_str_cut(nbr1, 1, nbr1[my_strlen(nbr1 - 1)]);
        char *new_nbr2 = my_str_cut(nbr2, 1, nbr2[my_strlen(nbr2 - 1)]);
        result = infinit_mult_calc(new_nbr1, new_nbr2);
    } else if (!number_is_neg(nbr1) && !number_is_neg(nbr2)) {
        result = infinit_mult_calc(nbr1, nbr2);
    }
    return result;
}