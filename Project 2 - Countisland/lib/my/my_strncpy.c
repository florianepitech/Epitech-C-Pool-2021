/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** my_strncpy
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int size = my_strlen(src);
    int i = 0;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > size) {
        dest[i] = '\0';
    }
    return dest;
}
