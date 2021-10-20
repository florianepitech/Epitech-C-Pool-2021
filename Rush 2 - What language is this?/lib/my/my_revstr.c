/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** #FreeKOSOVO
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int z = 0;
    char a;
    while (z < i) {
        a = str[z];
        str[z] = str[i];
        str[i] = a;
        i--;
        z++;
    }
    return str;
}
