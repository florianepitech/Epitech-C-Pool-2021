/*
** EPITECH PROJECT, 2021
** priority.c
** File description:
** priority
*/

#include "../include/evalexpr.h"
#include "../include/calcul.h"
#include "../include/string.h"
#include "../include/priority.h"
#include "../include/bootstrap.h"
#include "../include/my.h"
#include "../include/infinit.h"
#include "../include/fraction.h"

char *calcul_first_biggest_priority(char *str, char op)
{
    int start, end;
    char *result = get_first_biggest_priority(str, &start, &end, op);
    if (result != 0) {
        char *result_cpy = result;
        char *result_str = infinit_priority(&result_cpy);
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
/*
char *get_first_biggest_priority(char *str, int *start, int *end)
{
    //int index = get_index_of_first_char(str, '/');
    int index = -1;
    if (index == -1)
        index = get_index_of_first_char(str, '*');
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
*/

char *get_first_biggest_priority(char *str, int *start, int *end, char op)
{
    char *operator = "()+-*/%";
    for(int i = 0; i < my_strlen(str) - 1; i++) {
        char c0 = str[i];
        *start = -1, *end = -1;

        if (c0 == op) {
            //try to found end
            for (int j = i + 1; j < my_strlen(str); j++) {
                if (str[j] == '/') {
                    *end = -1;
                    break;
                } else if (types_char(str[j]) == 2 && j == my_strlen(str) - 1) {
                    *end = j + 1;
                    break;
                } else if (my_str_contain_char_of_str(my_char_to_str(str[j]), operator)) {
                    *end = j;
                    break;
                }
            }
            if (*end == -1) continue;

            //try to found start
            for (int j = i - 1; j >= 0; j--) {
                if (str[j] == '/') {
                    *start = -1;
                    break;
                } else if (j == 0) {
                    *start = j;
                    break;
                } else if (my_str_contain_char_of_str(my_char_to_str(str[j]), operator)) {
                    *start = j + 1;
                    break;
                }
            }
            if (*start == -1) continue;
            return my_str_cut(str, *start, *end);
        }
    }
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

/*
 *      FRACTION MULT
 */

char *calcul_first_fraction_mult(char *str)
{
    int start, end;
    char *result = get_first_fraction_mult(str, &start, &end);
    if (result != 0) {
        char *part1 = my_str_cut(str, 0, start);
        char *part2 = my_str_cut(str, end, my_strlen(str));

        Fraction *fractions = parse_fraction(result);
        Fraction fraction_result = mult_fraction(fractions[0], fractions[1]);

        char *final_result = my_str_concat(part1, fraction_to_str(fraction_result));
        final_result = my_str_concat(final_result, part2);
        return remove_unless_operator(final_result);
    }
    return 0;
}

char *get_first_fraction_mult(char *str, int *start, int *end)
{
    char *operator = "()+-*/%";
    for(int i = 0; i < my_strlen(str) - 1; i++) {
        char c0 = str[i];
        *start = -1, *end = -1;

        if (c0 == '*') {
            //found Div
            int foundDiv1 = 0, foundDiv2 = 0;
            //try to found end
            for (int j = i + 1; j < my_strlen(str); j++) {
                if (j == i + 1 && str[j] == '-') continue;
                if (str[j] == '/' && foundDiv1 == 0) {
                    foundDiv1 = 1;
                    continue;
                }
                if (types_char(str[j]) == 2 && j == my_strlen(str) - 1) {
                    *end = j + 1;
                    break;
                } else if (my_str_contain_char_of_str(my_char_to_str(str[j]), operator)) {
                    *end = j;
                    break;
                }
            }
            if(foundDiv1 == 0) continue;
            if (*end == -1) continue;

            //try to found start
            for (int j = i - 1; j >= 0; j--) {
                if (str[j] == '/' && foundDiv2 == 0) {
                    foundDiv2 = 1;
                    continue;
                }
                if (j == 0) {
                    *start = j;
                    break;
                } else if (my_str_contain_char_of_str(my_char_to_str(str[j]), operator)) {
                    *start = j + 1;
                    break;
                }
            }
            if (foundDiv2 == 0) continue;
            if (*start == -1) continue;
            return my_str_cut(str, *start, *end);
        }
    }
    return 0;
}