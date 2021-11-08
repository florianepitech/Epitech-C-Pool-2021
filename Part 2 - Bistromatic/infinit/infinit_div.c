/*
** EPITECH PROJECT, 2021
** infinit_div.c
** File description:
** infinit_div.c
*/

#include "../include/my.h"
#include "../include/infinit.h"
#include <stdlib.h>

#define conv_int(x) (x - '0')
#define conv_char(x) (x + '0')

char *infinit_div(char *nb1, char *nb2)
{
    if (infinit_compare(nb2, "0") == 0) {
        my_putstr("syntax error");
        exit(84);
    }
    char *div = "0";
    char *i = "1";
    char *str = nb1;
    while (infinit_compare(str,nb2) != 1) {
        str = infinit_sub(str, nb2);
        div = infinadd(div, i);
    }
    return div;
}


