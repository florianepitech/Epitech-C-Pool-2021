/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** my_strlowcase
*/

int my_strlen(char const *str);

char *my_strlowcase(char *str)
{
    int size = my_strlen(str);
    for (int i = 0; i < size; i++) {
        if (str[i] > 65 && str[i] < 91) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
