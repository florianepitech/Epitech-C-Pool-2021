/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);

int my_str_isalpha(char const *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (!(my_str_islower(&str[i]) == 1 || my_str_isupper(&str[i]) == 1)) {
            return 0;
        }
    }
    return 1;
}
