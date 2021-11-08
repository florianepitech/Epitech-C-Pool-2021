/*
** EPITECH PROJECT, 2021
** my_char_isnum.c
** File description:
** my_char_isnum
*/

int my_char_isnum(char const c)
{
    if (!(c >= '0' && c <= '9')) {
        return 0;
    }
    return 1;
}
