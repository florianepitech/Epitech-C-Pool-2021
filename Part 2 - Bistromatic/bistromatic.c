/*
** EPITECH PROJECT, 2021
** bistromatic.c
** File description:
** bistromatic
*/

#include "include/my.h"
#include "include/bistromatic.h"
#include "include/operator.h"
#include "include/convert_base.h"
#include "include/calcul.h"
#include "include/string.h"

char *check_first_synthax_error(char *str, char *base, char *op)
{
    for (int i = 0; i < my_strlen(str) - 1; i++) {
        if (count_char_in_str(base, str[i]) == 0 && count_char_in_str(op, str[i]) == 0)
            return "syntax error";
    }
    return 0;
}

char *check_synthax_error(char *str, char *base, char *op)
{
    if (my_str_contain_char_of_str(str, base) == 0)
        return "syntax error";
    if (my_str_contain_char_of_str(str, op) == 0)
        return "syntax error";
    for (int i = 0; i < my_strlen(str) - 1; i++) {
        if(types_char(str[i]) == 2 && str[i + 1] == '(')
            return "syntax error";
    }
    return 0;
}

char *bistromatic(char *str, char *base_table, char *op, char *len)
{
    char *result = my_str_cut_end(str, 1);
    char *error = check_first_synthax_error(str, base_table, op);
    if (error != 0) return error;
    result = replace_operator(result, op);
    result = remove_unless_operator(result);
    result = convert_operation_to_base10(result, base_table, "10");
    error = check_synthax_error(str, base_table, op);
    if (error != 0) return error;
    result = calcul_all(result);
    //printf("len result : %i\n", my_strlen(result));
    set_base_table(base_table);
    if (result[0] == '-') {
        result = convert_operation_from_base10(result, my_int_to_str(my_strlen(base_table)));
    } else {
        result = convert_from_base10(result, my_int_to_str(my_strlen(base_table)));
    }
    //printf("len result : %i\n", my_strlen(result));
    return result;
}
