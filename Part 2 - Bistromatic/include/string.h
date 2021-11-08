/*
** EPITECH PROJECT, 2021
** string-utils.h
** File description:
** string-utils
*/

#ifndef HEADER_STRING
#define HEADER_STRING

char *my_str_cut(char *str, int start, int end);
char *my_str_cut_start(char *str, int start);
char *my_str_cut_end(char *str, int start);
char *my_str_concat(char *str1, char *str2);
int my_char_is_parenthesis(char c);
char *my_str_add_at(char *mainStr, char *str, int position);

int str_is_operation(char *str);

int count_char_in_str(char *str, char c1);
int count_2char_in_str(char *str, char c1, char c2);
int get_index_of_first_char(char *str, char c1);
int get_index_of_first_2char(char *str, char c1, char c2);
int my_str_contain_char_of_str(char *str1, char *str2);

char *my_char_to_str(char c);

#endif