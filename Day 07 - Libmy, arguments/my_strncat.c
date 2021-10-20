/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** my_strncat
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int size_dest = my_strlen(dest);
    int size_src = my_strlen(src);
    int i = 0;
    for (i = 0; i < size_src && i < nb; i++) {
        dest[size_dest + i] = src[i];
    }
    dest[size_dest + i] = '\0';
    return dest;
}
