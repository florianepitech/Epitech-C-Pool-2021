/*
** EPITECH PROJECT, 2021
** infinit_mod.c
** File description:
** infinit_mod.c
*/

#include "../include/my.h"
#include "../include/infinit.h"
#include "../include/bootstrap.h"
#include <stdlib.h>

#define conv_int(x) (x - '0')
#define conv_char(x) (x + '0')

char *infinit_mod(char *nb1, char *nb2)
{
    if (infinit_compare(nb2, "0") == 0) {
        my_putstr("syntax error");
        exit(84);
    }
    char *temp;
    char *endptr = nb1;
    int s = 0;
   if (nb2[0] == '-') {
        s = 1;
        nb1 = to_negativ(nb1);
        nb2 = my_strtol(nb2,&endptr);
        //nb2 = temp;
    }
    char *str = nb1;
    if (nb1[0] != '-') {
        while (infinit_compare(str,nb2) != 1) {
            str = infinit_sub(str, nb2);
        }
    } else {
       while (infinit_compare(str,"0") != -1) {
            str = infinit_addsub(str, nb2);
        }
    }
    if (s == 1) {
        str = to_negativ(str);
    }
   return str;
}

