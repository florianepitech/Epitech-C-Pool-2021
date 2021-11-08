/*
** EPITECH PROJECT, 2021
** file
** File description:
** description
*/

#ifndef HEADER_FRACTION
#define HEADER_FRACTION

typedef struct Fraction Fraction;
struct Fraction
{
    char *numerator;
    char *denominator;
};

Fraction mult_fraction(Fraction f1, Fraction f2);
Fraction *parse_fraction(char *str);
char *fraction_to_str(Fraction fraction);

#endif
