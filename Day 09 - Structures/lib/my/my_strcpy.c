/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** my_strcpy
*/

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int size = my_strlen(src);
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
    dest[size] = '\0';
    return dest;
}
