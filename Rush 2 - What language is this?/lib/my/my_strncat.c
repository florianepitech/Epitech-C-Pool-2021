/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** #FreeKOSOVOO
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, const char *src, int nb)
{
    int len_dest = my_strlen(dest);
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[len_dest + i] = src[i];
    dest[len_dest + i] = '\0';

    return dest;
}
