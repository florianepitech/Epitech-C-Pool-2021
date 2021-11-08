/*
** EPITECH PROJECT, 2021
** convert_base.h
** File description:
** convert_base
*/

#ifndef HEADER_CONVERTBASE
#define HEADER_CONVERTBASE

int get_value(char c);
int size_result(int nbr, int const base_from, int const base_to);
char *convert_to_base10(char const *nbr, char const *base_from);
char *convert_from_base10(char const *nbr, char const *base_to);
char *convert_base(char const *nbr, char const *base_from, char const *base_to);
void set_base_table(char *new_base_table);

char *convert_operation_from_base10(char *str, char const *base_to);
char *convert_operation_to_base10(char *str, char *base_table, char *base_to);

#endif
