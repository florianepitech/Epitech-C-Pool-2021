/*
** EPITECH PROJECT, 2021
** infinit_parser.c
** File description:
** infinit_parser
*/

#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/infinit.h"

/*
 *  Delete unless "0" and "-" at the beggining of the char number
 */
char *parse_result(char *result)
{
    char *new_result = my_strdup(result);
    int verif = new_result[0] == '0' || new_result[0] == '-';
    while ((verif) && my_strlen(new_result) > 1) {
        my_revstr(new_result);
        new_result[my_strlen(new_result) - 1] = '\0';
        my_revstr(new_result);
        verif = new_result[0] == '0' || new_result[0] == '-';
    }
    return new_result;
}

/*
 *  Transform char number and adding "0" for calculation
 */
char *parse_number(char *nbr, int size)
{
    if (my_strlen(nbr) != size) {
        int diff = size - my_strlen(nbr);
        char *new_nbr = malloc(sizeof(char) * size + 1);
        for (int i = 0; i < diff; i++)
            new_nbr[i] = '0';
        for (int i = diff; i < size; i++)
            new_nbr[i] = nbr[i - diff];
        new_nbr[size] = '\0';
        return new_nbr;
    }
    return nbr;
}