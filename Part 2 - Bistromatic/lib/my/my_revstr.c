/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr
*/

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    char str_cpy[size];
    my_strcpy(str_cpy, str);
    for (int i = 0; i < size; i++) {
        str[i] = str_cpy[size - i - 1];
    }
    return str;
}
