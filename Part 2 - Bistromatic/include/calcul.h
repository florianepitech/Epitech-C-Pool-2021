/*
** EPITECH PROJECT, 2021
** string-utils.h
** File description:
** string-utils
*/

#ifndef HEADER_EVALEXPRUTILS
#define HEADER_EVALEXPRUTILS

char *calcul_all(char *str);
char *calcul_all_parenthesis(char *str);
char *calcul_all_priority_operator(char *str, char op);
char *calcul_all_non_priority_operator(char *str);
char *calcul_all_fraction_mult(char *str);

char *remove_unless_operator(char *str);

#endif