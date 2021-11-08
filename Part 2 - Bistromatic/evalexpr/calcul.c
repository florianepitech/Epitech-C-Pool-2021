/*
** EPITECH PROJECT, 2021
** calcul.c
** File description:
** calcul
*/

#include "../include/evalexpr.h"
#include "../include/calcul.h"
#include "../include/string.h"
#include "../include/priority.h"
#include "../include/my.h"
#include "../include/bootstrap.h"
#include "../include/infinit.h"

/*
 * @florian
 * Calcul a string with priority operator
 */
char *calcul_all(char *str)
{
    str = calcul_all_parenthesis(str);
    //printf("calcul_all_parenthesis          : %s\n", str);
    if (str_is_operation(str) == 0)
        return str;
    str = calcul_all_fraction_mult(str);
    //printf("calcul_all_fraction_mult          : %s\n", str);
    str = calcul_all_priority_operator(str, '/');
    //printf("calcul_all_priority_operator          : %s\n", str);
    str = calcul_all_priority_operator(str, '*');
    //printf("calcul_all_priority_operator          : %s\n", str);
    str = calcul_all_non_priority_operator(str);
    //printf("calcul_all_non_priority_operator          : %s\n", str);
    return str;
}

/*
 *  @florian
 *  this function search and calcul all parenthesis in str
 */
char *calcul_all_parenthesis(char *str)
{
    char *result = calcul_first_priority_parenthesis(str);
    if (result != 0) {
        char *sub_result = my_strdup(result);
        while (sub_result != 0) {
            result = sub_result;
            sub_result = calcul_first_priority_parenthesis(sub_result);
        }
        return result;
    }
    return str;
}

char *calcul_all_fraction_mult(char *str)
{
    char *result = calcul_first_fraction_mult(str);
    if (result != 0) {
        char *sub_result = my_strdup(result);
        while (sub_result != 0) {
            result = sub_result;
            sub_result = calcul_first_fraction_mult(sub_result);
        }
        return result;
    }
    return str;
}

/*
 * @florian
 * Calcul operator with * and /
 */
char *calcul_all_priority_operator(char *str, char op)
{
    char *result = calcul_first_biggest_priority(str, op);
    if (result != 0) {
        char *sub_result = my_strdup(result);
        while (sub_result != 0) {
            result = sub_result;
            sub_result = calcul_first_biggest_priority(sub_result, op);
        }
        return result;
    }
    return str;
}

/*
 * @benjamin
 * Calcul operator with + and -
 */
char *calcul_all_non_priority_operator(char *str)
{
    char *sum = "0";
    char *nb = str;
    char *endptr = str;
    char *nb2;
    int i;
    char  *op = "0";
    if (str[0] == '-') {
        i = 1;
        op = "-1";
    } else {
        i = 0;
        op = "1";
    }
    if (str_is_operation(str) == 1) {
        for (i; i < count_2char_in_str(str, '+', '-'); i++) {
            if (nb[0] == '-') {
                nb = my_strtol(endptr, &endptr);
                nb = infinit_mult(nb, "-1");
            } else
                nb = my_strtol(endptr, &endptr);
            if (endptr[0] == '+' && nb[0] == '+') {
                nb = infinadd(nb, my_strtol(endptr, &endptr));
            }
            else {
                if (endptr[0] == '-')
                    nb2 = infinit_mult(my_strtol(endptr, &endptr), "-1");
                else
                    nb2 = my_strtol(endptr, &endptr);
                nb = infinit_addsub(nb, nb2);
            }
            char *mainstr = nb;
            endptr = my_str_add_at(endptr, mainstr, 0);
            sum = infinadd(sum, nb);
        }
    } else {
        sum = my_strtol(str, &endptr);
        nb = infinit_mult(op, sum);
    }
    return nb;
}
