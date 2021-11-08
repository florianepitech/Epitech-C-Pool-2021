/*
** EPITECH PROJECT, 2021
** my_int_to_str.c
** File description:
** my_int_to_str
*/

#include <unistd.h>
#include <stdlib.h>

char *my_int_to_str(int in)
{
    char zero = '0';
    char negativ = '-';
    long n = in;
    if (n == 0) {
        return "0";
    } else {
        int is_neg = 0;
        if (n < 0) {
            is_neg++;
            n = n * -1;
        }
        long r = 1, c = 0;
        while ((n / r) != 0) {
            r = r * 10;
            c++;
        }
        char *result = malloc(sizeof(char) * (c + is_neg + 1));
        if (is_neg)
            result[0] = '-';
        for (int i = 0; i < c; i++) {
            long number = 48 + (n % r / (r / 10));
            r = r / 10;
            result[i + is_neg] = (char)number;
        }
        result[c + is_neg] = '\0';
        return result;
    }
}
