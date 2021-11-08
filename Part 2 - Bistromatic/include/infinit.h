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
char *infinit_addsub(char *nbr1, char *nbr2);
char *infinadd(char *nbr1, char *nbr2);
char *infinit_sub(char *nbr1, char *nbr2);
char *infinit_priority(char **str_ptr);
char *infinit_mod(char *nbr1, char *nbr2);
char *infinit_div(char *nbr1, char *nbr2);
char *infinit_mult(char *nbr1, char *nbr2);

//infinit parser
char *parse_result(char *result);
char *parse_number(char *nbr, int size);

//infinit utils
char *to_negativ(char *nbr);
int number_is_neg(char *nbr);
char *get_result_empty(char *nbr1, char *nbr2, int *size);

//infinit compare
int if_big_str(char c1, char c2);
int compare_big_nbr(char *nb1, char *nb2);
int infinit_compare(char *nb1, char *nb2);

//infinit power
char *infinit_power(char *nbr, char *pow);

#endif
