/*
** EPITECH PROJECT, 2021
** infinit_calculation.c
** File description:
** infinit_calculation
*/

#include "../../include/my.h"
#include "../../include/infinit.h"

char *infinit_add(char *nbr1, char *nbr2)
{
    int size = 0;
    char *result = get_result_empty(nbr1, nbr2, &size);
    nbr1 = parse_number(nbr1, size);
    nbr2 = parse_number(nbr2, size);
    for (int i = (size - 1); i >= 0; i--) {
        int sub_result = ATOD(nbr1[i]) + ATOD(nbr2[i]) + ATOD(result[i + 1]);
        result[i + 1] = DTOA(sub_result % 10);
        result[i] = (char)(DTOA(sub_result / 10));
    }
    result = parse_result(result);
    return result;
}

char *infinit_sub(char *nbr1, char *nbr2)
{
    int size = 0, negativ = 0;
    char *result = get_result_empty(nbr1, nbr2, &size);
    nbr1 = parse_number(nbr1, size);
    nbr2 = parse_number(nbr2, size);
    for (int i = (size - 1); i >= 0; i--) {
        char sub_result = ATOD(nbr1[i]) - ATOD(nbr2[i]);
        if (i == 0 && sub_result < 0) {
            negativ = 1;
            result[i + 1] = DTOA((sub_result * (-1)) % 10);
            result[i] = DTOA((sub_result * (-1)) / 10);
            break;
        } else if (sub_result < 0) {
            sub_result = ATOD(nbr1[i] + 10) - ATOD(nbr2[i]);
            nbr2[i - 1] += 1;
        }
        result[i + 1] = DTOA(sub_result % 10);
        result[i] = DTOA(sub_result / 10);
    }
    result = parse_result(result);
    if (negativ)
        return to_negativ(result);
    return result;
}

char *infinit_addsub(char *nbr1, char *nbr2)
{
    int is_neg_nbr1 = number_is_neg(nbr1);
    int is_neg_nbr2 = number_is_neg(nbr2);
    if (!is_neg_nbr1 && !is_neg_nbr2)
        return infinit_add(parse_result(nbr1), parse_result(nbr2));
    if (is_neg_nbr1 && is_neg_nbr2)
        return to_negativ(infinit_add(parse_result(nbr1), parse_result(nbr2)));
    if (is_neg_nbr1 && !is_neg_nbr2) {
        if (infinit_compare(parse_result(nbr1), parse_result(nbr2)) == -1) {
            char *rlt = infinit_sub(parse_result(nbr1), parse_result(nbr2));
            return to_negativ(rlt);
        }
        return infinit_sub(parse_result(nbr2), parse_result(nbr1));
    } if (!is_neg_nbr1 && is_neg_nbr2) {
        if (infinit_compare(parse_result(nbr2), parse_result(nbr1)) == -1) {
            char *rlt = infinit_sub(parse_result(nbr2), parse_result(nbr1));
            return to_negativ(rlt);
        }
        return infinit_sub(parse_result(nbr1), parse_result(nbr2));
    }
}