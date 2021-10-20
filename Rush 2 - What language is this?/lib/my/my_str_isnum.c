/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** #FreeKOSOVO
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 30 || str[i] <= 39)
            return (0);
        i++;
    }
    return (1);
}
