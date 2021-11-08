   
/*
** EPITECH PROJECT, 2021
** infinadd.c
** File description:
** infinadd.c
*/
#include "../include/my.h"
#include <stdlib.h>

#define conv_int(x) (x - '0')
#define conv_char(x) (x + '0')

char *cond_add(char *nb1, char *nb2);
char *cond_less(char *nb1, char *nb2);

char *delete0(char *s)
{
    char *str = malloc(sizeof(char) * (my_strlen(s) + 1));
    int i = 0;
    int j = 0;
    while (s[i] == '0') {
        i = i + 1;
    }
    while (i < my_strlen(s)) {
        str[j] = s[i];
        i = i + 1;
        j = j + 1;
    }
    str[j] = '\0';
    return str;
}
char *add0(char *nb1, char *nb2)
{
    if (nb2[0] == '0')
        return nb1;
    else if (nb1[0] == '0')
        return nb2;
}

char *add(char *nb1, char *nb2)
{
    char *strbig = my_revstr(big_str(my_strdup(nb1), my_strdup(nb2)));
    char *strlittle = my_revstr(little_str(my_strdup(nb1), my_strdup(nb2)));
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
    for (int j = i; j < my_strlen(strbig); j++) {
        chiffre = conv_int((strbig[j]) + retenu) % 10;
        str[j] = conv_char(chiffre);
        retenu = conv_int((strbig[j]) + retenu) / 10;
    }
    str[my_strlen(strbig) ] = conv_char(retenu);
    str[my_strlen(strbig) + 1] = '\0';
    return (delete0(my_revstr(str)));
}

char *infinadd(char *nb1, char *nb2)
{
    
    if (nb1[0] == '0' || nb2[0] == '0') {
        return add0(nb1, nb2);
    } else {
        return cond_add(nb1, nb2);
    }
}
