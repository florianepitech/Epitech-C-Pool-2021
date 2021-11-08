/*
** EPITECH PROJECT, 2021
** bistromatic_main.c
** File description:
** bistromatic_main
*/
#include "../include/fraction.h"
#include "../include/infinit.h"
#include "../include/bootstrap.h"
#include "../include/string.h"
#include "../include/my.h"

#include <stdlib.h>

Fraction mult_fraction(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator = infinit_mult(f1.numerator, f2.numerator);
    result.denominator = infinit_mult(f1.denominator, f2.denominator);
    return result;
}

Fraction *parse_fraction(char *str)
{
    int i;
    char *endptr = str;
    Fraction *result = malloc(sizeof(Fraction) * (count_char_in_str(str, '/') + 1));

    for (i = 0; i < count_char_in_str(str, '/'); i++) {
        result[i].numerator = my_strtol(endptr,&endptr);
        result[i].denominator = my_strtol(endptr,&endptr);
    }
    if (count_char_in_str(str, '-') % 2 == 1)
        result[0].numerator = to_negativ(result[0].numerator);
    return result;
}

char *fraction_to_str(Fraction fraction)
{
    char *result = my_strdup(fraction.numerator);
    result = my_str_concat(result, "/");
    result = my_str_concat(result, fraction.denominator);
    return result;
}