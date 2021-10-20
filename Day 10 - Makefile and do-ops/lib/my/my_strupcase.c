/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** my_strupcase
*/

int my_strlen(char const *str);

char *my_strupcase(char *str)
{
    int size = my_strlen(str);
    for (int i = 0; i < size; i++) {
        if (str[i] > 96 && str[i] < 123) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
