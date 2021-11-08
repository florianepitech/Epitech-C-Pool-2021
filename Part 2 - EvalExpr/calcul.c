/*
** EPITECH PROJECT, 2021
** calcul.c
** File description:
** calcul
*/

#include "include/evalexpr.h"
#include "include/calcul.h"
#include "include/string.h"
#include "include/priority.h"
#include "include/my.h"
#include "include/bootstrap.h"
#include "include/operator.h"
#include <stdlib.h>

/*
 * @florian
 * Calcul a string with priority operator
 */
char *calcul_all(char *str)
{
    str = calcul_all_parenthesis(str);
    if (str_is_operation(str) == 0)
        return str;
    str = calcul_all_priority_operator(str);
    str = calcul_all_non_priority_operator(str);
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

/*
 * @florian
 * Calcul operator with * and /
 */

char *calcul_all_priority_operator(char *str)
{
    char *result = calcul_first_biggest_priority(str);
    if (result != 0) {
        char *sub_result = my_strdup(result);
        while (sub_result != 0) {
            result = sub_result;
            sub_result = calcul_first_biggest_priority(sub_result);
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
    int sum = 0;
    int nb = 0;
    char *endptr = str;
    int i;
    int op;
    if (str[0] == '-') {
        i = 1;
        op = -1;
    } else {
        i = 0;
        op = 1;
    }
    if (str_is_operation(str) == 1) {
        for (i; i < count_2char_in_str(str, '+', '-'); i++) {
            nb = summands(&endptr);
            char *mainstr = my_int_to_str(nb);
            endptr = my_str_add_at(endptr, mainstr, 0);
            sum = sum + nb;
        }
    } else {
        sum = my_strtol(str, &endptr);
        nb = op * sum;

    }
    return my_int_to_str(nb);
}