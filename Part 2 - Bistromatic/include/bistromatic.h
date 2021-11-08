/*
** EPITECH PROJECT, 2021
** bistromatic.h
** File description:
** bistromatic
*/

#ifndef HEADER_BISTROMATIC
#define HEADER_BISTROMATIC

#define BUFF_SIZE 30000

char *check_first_synthax_error(char *error, char *base, char* op);
char *check_synthax_error(char *str, char *base, char *op);
char *bistromatic(char *str, char *base_table, char *op, char *len);
int sub_main(char *child_process, int argc, char **argv);
//int main(int argc, char **argv);

#endif
