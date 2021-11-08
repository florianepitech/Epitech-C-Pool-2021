/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef HEADER_MY
#define HEADER_MY

void my_putchar(char c);
//my_strstr
char *my_strstr(char *str, char const *to_find);
char *my_position_strstr(char *str, char const *to_find);
int check_found(int i, int j, char *str, char const *to_find);

int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_modpos(int nb, int mod);

int my_char_isnum(char const c);

char *my_strdup(char const *src);
int my_compute_power_it(int nb, int p);
int int_at(int index, char *str);
long pow_10(int pow);
int str_to_int(char *str, int size, int negativ);
char *switch_case(char *c);
int type_char(char *c);
int types_char(char c);
int my_modpos(int nb, int mod);

char *my_int_to_str(int in);

//start my_str_to_word_array
int is_alphanum(char c);
int index_word (char *str, int word);
int count_words (char *str);
int count_word_letter (char *str, int word);
char **my_str_to_word_array (char const *str);
//end my_str_to_word_array
#endif
