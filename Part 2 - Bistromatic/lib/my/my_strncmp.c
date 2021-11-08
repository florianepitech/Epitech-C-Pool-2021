/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** my_strncmp
*/

int my_strlen (char const *str);
char *my_strncpy (char *dest, char const *src, int n);
char *my_strcpy (char *dest, char const *src);
int my_strcmp (char const *s1, char const *s2);

int my_strncmp (char const *s1, char const *s2, int n)
{
    int size_s1 = my_strlen(s1);
    char s1_cp[size_s1];
    int size_s2 = my_strlen(s2);
    char s2_cp[size_s2];
    my_strncpy(s1_cp, s1, n);
    my_strncpy(s2_cp, s2, n);
    return my_strcmp(s1_cp, s2_cp);
}