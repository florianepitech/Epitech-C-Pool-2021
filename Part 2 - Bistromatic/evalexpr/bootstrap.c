/*
** EPITECH PROJECT, 2021
** bootstrap.c
** File description:
** bootstrap
*/

#include "../include/my.h"
#include "../include/bootstrap.h"
#include "../include/operator.h"

#include <stdlib.h>

char *my_strtol(char *str , char **endptr)
{
    char *strint;
    int nb = 0, i = 0, k = 0, j = 0;
    for (i = 0; str[i] != '\0' && types_char(str[i]) != 2; i++);
    for (k = i; types_char(str[k]) == 2; k++);
    strint = malloc(sizeof(char) * (k + 1));
    for (j = i; types_char(str[j]) == 2; j++) {
        strint[nb] = str[j];
        nb = nb + 1;
    }
    strint[j] = '\0';
    *endptr = &str[k];
    return strint;
}
/*
int factors(char **str_ptr)
{
    int nb = 1;
    int nbr;
    int factor = 1;
    char *str = remove_unless_operator(str_ptr[0]);
    if (str_ptr[0][0] == '-')
        nb = nb * -1;
    else if (types_char(str_ptr[0][0]) == '2' || str_ptr[0][0] == '+')
        nb = nb;
    nbr =  my_strtol(str , str_ptr);
    nb = nb * nbr;
    factor = factor * nb;
    nb = 1;
    if (str_ptr[0][1] == '-') {
        nb = nb * -1;
    } else if (types_char(str_ptr[0][1]) == '2' || str_ptr[0][1] == '+') {
        nb = nb;
    }
    if (str_ptr[0][0]  == '*') {
        nbr =  my_strtol(str_ptr[0], str_ptr);
        nb = nb * nbr;
        factor = factor * nb;
    } else {
        nbr =  my_strtol(str_ptr[0], str_ptr);
        nb = nb * nbr;
        factor = factor / nb;
    }
    return factor;
}

int factors_and_modulo(char **str_ptr)
{
    int nbr;
    int factor = 1;
    char *str = remove_unless_operator(str_ptr[0]);
    char *str_op = remove_unless_operator(str_ptr[0]);
    my_strtol(str , str_ptr);
    if (str_ptr[0][0] == '*' || str_ptr[0][0] == '/') {
        factor = factors(&str_op);
    } else {
        factor = modulo(&str_op);
    }
    return factor;
}
*/
