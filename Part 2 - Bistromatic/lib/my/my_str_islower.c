/*
** EPITECH PROJECT, 2021
** my_str_islower.c
** File description:
** my_str_islower
*/

int my_strlen(char *str);

int my_str_islower(char const *str)
{
    int len = my_strlen(str);
    for (int i = 0; i < len; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z')) {
            return 0;
        }
    }
    return 1;
}
