/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** #FreeKOSOVO
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int c = 0;

    for (int i = 0; i != n; src[i++] && dest[c++]) {
        dest[c] = src[i];
        if (src[i] == '\0')
            return dest;
    }
    return dest;
}
