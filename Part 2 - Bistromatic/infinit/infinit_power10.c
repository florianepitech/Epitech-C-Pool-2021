/*
** EPITECH PROJECT, 2021
** infinit_power10.c
** File description:
** infinit_power10
*/

#include "../include/my.h"
#include "../include/string.h"

char *infinit_pow10(char *nbr, int pow)
{
    char *result = my_strdup(nbr);
    for (int i = 0; i < pow; i++) {
        result = my_str_concat(result, my_strdup("0"));
    }
    return result;
}