 /*
** EPITECH PROJECT, 2021
** infinadd2.c
** File description:
** infinadd2.c
*/
#include  "../include/my.h"
#include <stdlib.h>
#define conv_int(x) (x - '0')
#define conv_char(x) (x + '0')

char *delete0(char *s);
char *add(char *nb1, char *nb2);

char *add_eq(char *nb1, char *nb2)
{
    char *strbig = my_revstr(my_strdup(nb1));
    char *strlittle = my_revstr(my_strdup(nb2));
    char *str = malloc(sizeof(char) * (my_strlen(nb1) + my_strlen(nb2) + 1));
    int add_chiffre;
    int retenu = 0;
    int chiffre;
    int i = 0;
    while (i < my_strlen(strlittle)) {
        add_chiffre = conv_int(strbig[i]) + conv_int(strlittle[i]);
        chiffre = (add_chiffre + retenu) % 10;
        retenu = (add_chiffre + retenu) / 10;
        str[i] = conv_char(chiffre);
        i = i + 1;
    }
    if (retenu != 0) {
        chiffre = retenu;
        str[i] = conv_char(chiffre);
    }
    str[my_strlen(strbig) + 1] = '\0';
    return (delete0(my_revstr(str)));
}

char *cond_add(char *nb1, char *nb2)
{
    if (my_strlen(nb1) == my_strlen(nb2)) {
        return add_eq(nb1, nb2);
    } else {
        return add(nb1, nb2);
    }
}
