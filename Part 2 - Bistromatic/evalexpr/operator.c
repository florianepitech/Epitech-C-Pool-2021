/*
** EPITECH PROJECT, 2021
** operator.c
** File description:
** operator
*/

#include "../include/calcul.h"
#include "../include/string.h"
#include "../include/my.h"
#include "../include/operator.h"

char *remove_unless_operator(char *str)
{
    if (str[0] == '+')
        str = my_str_cut(str, 1, my_strlen(str));
    for (int i = 0; i < my_strlen(str) - 1; i++) {
        char c1 = str[i];
        char c2 = str[i + 1];
        if ((c1 == '-' && c2 == '-') || (c1 == '+' && c2 == '+')) {
            char *part1 = my_str_cut_end(str, my_strlen(str) - i);
            char *part2 = my_str_cut_start(str, i + 2);
            char *str = my_str_concat(part1, "+");
            str = my_str_concat(str, part2);
            return remove_unless_operator(str);
        } else if ((c1 == '+' && c2 == '-') || (c1 == '-' && c2 == '+')) {
            char *part1 = my_str_cut_end(str, my_strlen(str) - i);
            char *part2 = my_str_cut_start(str, i + 2);
            char *str = my_str_concat(part1, "-");
            str = my_str_concat(str, part2);
            return remove_unless_operator(str);
        }
    }
    return str;
}

char *replace_operator(char *str, char *new_operator)
{
    char *result = my_strdup(str);
    for(int i = 0; i < my_strlen(result); i++) {
        for (int j = 0; j < my_strlen(new_operator); j++) {
            if(result[i] == new_operator[j])
                result[i] = get_classic_operator()[j];
        }
    }
    return result;
}

char *get_classic_operator()
{
    return "()+-*/%";
}
