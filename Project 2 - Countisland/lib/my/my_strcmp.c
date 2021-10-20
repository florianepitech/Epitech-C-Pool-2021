/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** my_strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int s1_length = my_strlen(s1);
    int s2_length = my_strlen(s2);
    if (s1_length != s2_length) {
        return -1;
    }
    for (int i = 0; i < s1_length; i++) {
        if (s1[i] != s2[i]) {
            return -1;
        }
    }
    return 0;
}
