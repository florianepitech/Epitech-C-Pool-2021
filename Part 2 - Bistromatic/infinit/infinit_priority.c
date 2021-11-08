/*
** EPITECH PROJECT, 2021
** infinit_priority.c
** File description:
** infinit_priority.c
*/

#include "../include/my.h"
#include "../include/bootstrap.h"
#include "../include/operator.h"
#include "../include/infinit.h"

char *infinit_priority(char **str_ptr)
{
    char *str;
    char *utils = str_ptr[0];
    char *nb1;
    char *nb2;
    if (str_ptr[0][0] == '-') {
        nb1 = my_strtol(str_ptr[0], &utils);
        nb1 = to_negativ(nb1);
    } else
        nb1 = my_strtol(str_ptr[0], &utils);
    char *endptr = utils;
    if (utils[1] == '-') {
        nb2 = my_strtol(utils, &utils);
        nb2 = to_negativ(nb2);
    } else {
        nb2 = my_strtol(utils, &utils);
    }
    if (endptr[0] == '*')
        str = infinit_mult(nb1, nb2);
    else if (endptr[0] == '/')
        str = infinit_div(nb1, nb2);
    else if (endptr[0] == '%')
        str = infinit_mod(nb1, nb2);
    return str;
}
