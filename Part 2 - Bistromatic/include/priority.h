/*
** EPITECH PROJECT, 2021
** priority.h
** File description:
** priority
*/

#ifndef HEADER_PRIORITY
#define HEADER_PRIORITY

char *calcul_first_biggest_priority(char *str, char op);
char *get_first_biggest_priority(char *str, int *start, int *end, char op);

char *calcul_first_priority_parenthesis(char *str);
char *get_first_priority_parenthesis(char *str, int *start, int *end);

char *calcul_first_fraction_mult(char *str);
char *get_first_fraction_mult(char *str, int *start, int *end);

#endif
