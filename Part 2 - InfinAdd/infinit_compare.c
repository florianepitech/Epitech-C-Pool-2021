/*
** EPITECH PROJECT, 2021
** infinit_compare.c
** File description:
** infinit_compare.c
*/
#include <stdio.h>
#include "include/my.h"
#define conv_int(x) (x - '0')
#define conv_char(x) (x + '0')

int if_big_str(char c1, char c2)
{
    if (conv_int(c1) > conv_int(c2)) {
        return -1;
    }
    else if (conv_int(c1) < conv_int(c2)) {
        return 1;
    } else {
        return 0;
    }
}

int compare_big_nbr(char *nb1, char *nb2)
{
    int nb;
    for (int i = 0; nb1[i] != '\0'; i++) {
        nb = if_big_str(nb1[i], nb2[i]);
        if (nb == -1)
            return -1;
        else if (nb == 1)
            return 1;
    }
    return nb;
}

/*
 *      Si nb1 == nbr2 => return (0)
 *      Si nbr1 < nbr2 => return (1)
 *      Si nbr1 > nbr2 => return (-1)  
 */
int infinit_compare(char *nb1, char *nb2)
{
    int nb;
    if (my_strlen(nb1) == my_strlen(nb2)) {
        nb = compare_big_nbr(nb1, nb2);
    } else if (my_strlen(nb1) > my_strlen(nb2)) {
        nb = -1;
    } else {
        nb = 1;
    }
    return nb;
}