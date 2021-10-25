/*
** EPITECH PROJECT, 2021
** infinit_add.h
** File description:
** infinit_add
*/

#ifndef HEADER_INFINIT
#define HEADER_INFINIT

#define ATOD(x) (x - '0')
#define DTOA(x) (x + '0')

//infinit calculation
char *infinit(char *nbr1, char *nbr2);
char *infinit_add(char *nbr1, char *nbr2);
char *infinit_sub(char *nbr1, char *nbr2);

//infinit parser
char *parse_result(char *result);
char *parse_number(char *nbr, int size);

//infinit utils
char *to_negativ(char *nbr);
int number_is_neg(char *nbr);
char *get_result_empty(char *nbr1, char *nbr2, int *size);

#endif