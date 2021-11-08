/*
** EPITECH PROJECT, 2021
** infinit_power.h
** File description:
** infinit_power
*/

#include "../include/my.h"
#include "../include/infinit.h"

char *infinit_power(char *nbr, char *pow)
{
    if (infinit_compare(pow, "0") == 1)
        return "0";
    else if (infinit_compare(pow, "0") == 0)
        return "1";
    char *result = nbr;
    while (infinit_compare(pow, "1") != 0) {
        result = infinit_mult(result, nbr);
        pow = infinit_addsub(pow, "-1");
    }
    return result;
}