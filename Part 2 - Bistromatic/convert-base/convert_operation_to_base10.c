/*
** EPITECH PROJECT, 2021
** convert_operation_to_base.c
** File description:
** convert_operation_to_base
*/

#include "../include/my.h"
#include "../include/operator.h"
#include "../include/string.h"
#include "../include/convert_base.h"

int is_an_operator(char c)
{
    char *classic_operator = get_classic_operator();
    for (int i = 0; i < my_strlen(get_classic_operator()); i++) {
        if (c == classic_operator[i])
            return 1;
    }
    return 0;
}

char *convert_operation_from_base10(char *str, const char *base_to)
{
    int start = -1, end = -1;
    for (int i = 0; i < my_strlen(str) - 1; i++) {
        char c1 = str[i];
        if (is_an_operator(c1) == 0 && start == -1) {
            start = i;
            end = -1;
        } else if (is_an_operator(c1) == 1 && start != -1) {
            end = i;
        }
        if (start != -1 && i == 6)
            end = i + 1;
        if (end != -1 && start != -1) {
            char *part1 = my_str_cut(str, 0, start);
            char *part2 = my_str_cut(str, end, my_strlen(str));
            char *cut = my_str_cut(str, start, end);
            char *cut_converted = convert_from_base10(cut, base_to);
            str = my_str_concat(part1, cut_converted);
            str = my_str_concat(str, part2);
            start = -1;
            end = -1;
        }
    }
    return str;
}

char *convert_operation_to_base10(char *str, char *base_table, char *base_to)
{
    set_base_table(base_table);
    int start = -1, end = -1;
    for (int i = 0; i < my_strlen(str) - 1; i++) {
        char c1 = str[i];
        if (is_an_operator(c1) == 0 && start == -1) {
            start = i;
            end = -1;
        } else if (is_an_operator(c1) == 1 && start != -1) {
            end = i;
        }
        if (start != -1 && i == 6)
            end = i + 1;
        if (end != -1 && start != -1) {
            char *part1 = my_str_cut(str, 0, start);
            char *part2 = my_str_cut(str, end, my_strlen(str));
            char *cut = my_str_cut(str, start, end);
            char *cut_converted = convert_to_base10(cut, my_int_to_str(my_strlen(base_table)));
            str = my_str_concat(part1, cut_converted);
            str = my_str_concat(str, part2);
            start = -1;
            end = -1;
        }
    }
    return str;
}