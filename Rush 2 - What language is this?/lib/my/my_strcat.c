/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** #FreeKOSOVOO
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int counter = 0;

    while (src[counter] != '\0') {
        dest[counter + len_dest] = src[counter];
        counter++;
    }
    dest[counter + len_dest] = '\0';
    return dest;
}
