/*
** EPITECH PROJECT, 2021
** do-op.c
** File description:
** do-op
*/

#include <stdlib.h>
#include "../include/my.h"

int get_number(char *str) {
    int bool = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == '-')
            continue;
        if (!my_char_isnum(str[i]) && bool == 0)
            return 0;
        bool = 1;
    }
    return my_getnbr(str);
}

char get_operator(char *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c == '+' || c == '-' || c == '/' || c == '%' || c == '*') {
            return c;
        }
    }
    return 0;
}

int print_calcul(char operator, int nbr1, int nbr2)
{
    switch (operator) {
        case '+':
            my_put_nbr(nbr1 + nbr2);
            my_putchar('\n');
            return 0;
        case '-':
            my_put_nbr(nbr1 - nbr2);
            my_putchar('\n');
            return 0;
        case '*':
            my_put_nbr(nbr1 * nbr2);
            my_putchar('\n');
            return 0;
        case '/':
            my_put_nbr(nbr1 / nbr2);
            my_putchar('\n');
            return 0;
        case '%':
            my_put_nbr(nbr1 % nbr2);
            my_putchar('\n');
            return 0;
        default:
            my_putchar('0');
            my_putchar('\n');
            return 84;
    }
}

int do_op(int argc, char **argv)
{
    if (argc >= 4) {
        int nbr1 = get_number(argv[1]);
        char operator = get_operator(argv[2]);
        int nbr2 = get_number(argv[3]);
        if (argv[2][0] == '/' && nbr2 == 0) {
            my_putstr("Stop: division by zero\n");
            return 84;
        }
        if (argv[2][0] == '%' && nbr2 == 0) {
            my_putstr("Stop: modulo by zero\n");
            return 84;
        }
        return print_calcul(operator, nbr1, nbr2);
    }
    return 84;
}

int main(int argc, char **argv) {
    int result = do_op(argc, argv);
    return result;
}
