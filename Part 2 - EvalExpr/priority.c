/*
** EPITECH PROJECT, 2021
** priority.c
** File description:
** priority
*/

#include "include/evalexpr.h"
#include "include/calcul.h"
#include "include/string.h"
#include "include/priority.h"
#include "include/bootstrap.h"
#include "include/my.h"

char *calcul_first_biggest_priority(char *str)
{
    int start, end;
    char *result = get_first_biggest_priority(str, &start, &end);
    if (result != 0) {
        char *result_cpy = result;
        int result_int = factors_and_modulo(&result_cpy);
        char *result_str = my_int_to_str(result_int);
        char *part1 = my_str_cut(str, 0, start);
        char *part2 = my_str_cut_start(str, end);
        char *final_result = my_str_concat(part1, result_str);
        final_result = my_str_concat(final_result, part2);
        return remove_unless_operator(final_result);
    }
    return 0;
}

/*
 *  Return the biggest operation in a string
 *  return 0 if get_biggest_priority doesnt found * and /
 *  start = is the position of the first priority calcul
 *  end = is the position of the last priority calcul
 */
char *get_first_biggest_priority(char *str, int *start, int *end)
{
    int index = get_index_of_first_2char(str, '*', '/');
    if (index == -1)
        index = get_index_of_first_char(str, '%');
    char *part1 = 0, *part2 = 0;
    if (index != -1) {
        for (int i = index - 1; i >= 0; i--) {
            if (types_char(str[i]) != 2) {
                part1 = my_str_cut(str, i + 1, index);
                *start = i + 1;
                break;
            }
        }
        if (part1 == 0) {
            part1 = my_str_cut(str, 0, index);
            *start = 0;
        }
        for (int i = index + 2; i < my_strlen(str); i++) {
            if (types_char(str[i]) != 2) {
                part2 = my_str_cut(str, index, i);
                *end = i;
                break;
            }
        }
        if (part2 == 0) {
            part2 = my_str_cut(str, index, my_strlen(str));
            *end = my_strlen(str) - 1;
        }
        return my_str_concat(part1, part2);
    }
    *start = 0;
    *end = 0;
    return 0;
}

/*
 *      PARENTHESIS
 */
char *calcul_first_priority_parenthesis(char *str)
{
    int start, end;
    char *result = get_first_priority_parenthesis(str, &start, &end);
    if (result != 0) {
        char *part1 = my_str_cut(str, 0, start - 1);
        char *part2 = my_str_cut(str, end + 1, my_strlen(str));
        char *final_result = my_str_concat(part1, calcul_all(result));
        final_result = my_str_concat(final_result, part2);
        return remove_unless_operator(final_result);
    }
    return 0;
}

char *get_first_priority_parenthesis(char *str, int *start, int *end)
{
    *start = -1, *end = -1;
    for (int i = 0; i < my_strlen(str); i++) {
        int type = my_char_is_parenthesis(str[i]);
        if (type == 1) {
            *start = i + 1;
            *end = -1;
        }
        if (*start != -1 && type == 2) {
            *end = i;
            return my_str_cut(str, *start, *end);

        } else if (*start == -1 && type == 2) {

        }
    }
    *start = -1;
    *end = -1;
    return 0;
}
