/*
** EPITECH PROJECT, 2021
** infinit_utils.c
** File description:
** infinit_utils
*/

#include "include/my.h"
#include "include/infinit.h"
#include <stdlib.h>

#include <stdio.h>

/*
 *  Parse negative
 */
char *to_negativ(char *nbr)
{
    char *result = malloc((2 + my_strlen(nbr)) * sizeof(char));
    result[0] = '-';
    my_strcat(result, nbr);
    return result;
}

/*
 *  Return 1 if char number is negative
 */
int number_is_neg(char *nbr)
{
    if (nbr[0] == '-')
        return 1;
    return 0;
}

/*
 *  Get result of good size filled by "0"
 */
char *get_result_empty(char *nbr1, char *nbr2, int *size)
{
    *size = my_strlen(nbr1);
    if (my_strlen(nbr2) > (*size))
        *size = my_strlen(nbr2);
    char *result = malloc(sizeof(char) * (*size) + 1);
    for (int i = 0; i < (*size + 1); i++)
        result[i] = '0';
    result[(*size) + 1] = '\0';
    return result;
}