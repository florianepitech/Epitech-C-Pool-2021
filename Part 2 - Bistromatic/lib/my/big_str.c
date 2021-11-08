/*
** EPITECH PROJECT, 2021
** big_str.c
** File description:
** big_str.c
*/

int my_strlen(char const *str);

char *big_str(char *nb1, char *nb2)
{
    if (my_strlen(nb1) == my_strlen(nb2))
        return nb1;
    else if (my_strlen(nb1) > my_strlen(nb2))
        return nb1;
    else
        return nb2;
}
