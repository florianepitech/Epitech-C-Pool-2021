/*
** EPITECH PROJECT, 2021
** evalexpr.c
** File description:
** evalexpr
*/

#include "include/my.h"
#include "include/evalexpr.h"
#include "include/calcul.h"

int eval_expr(char const *str)
{
    char *result = my_strdup(str);
    result = calcul_all(result);
    return my_getnbr(result);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (!my_strlen(av[1]) == 0) {
            my_put_nbr (eval_expr(av[1]));
            my_putchar ('\n');
        }
        return (0);
    }
    my_putstr("evalexpr : too few argument\n");
    return (84);
}