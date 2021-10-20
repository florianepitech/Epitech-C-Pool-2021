/*
** EPITECH PROJECT, 2021
** rush-1.c
** File description:
** rush-1
*/

int is_same_letter(char c1, char c2)
{
    if (c2 >= 'A' && c2 <= 'Z')
        c2 = c2 + 32;
    if (c1 >= 'A' && c1 <= 'Z')
        c1 = c1 + 32;
    if (c1 == c2)
        return (1);
    return (0);
}

int count_letter(char *str, char c)
{
    int count = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_same_letter(str[i], c) == 1) {
            count++;
        }
    }
    return count;
}

int rush_1(int argc, char **argv)
{
    if (argc <= 3)
        return (0)
    int count = count_letter(argv[1], argv[2][0]);
    my_putchar(argv[2][0]);
    my_putchar(':');
    my_put_nbr(count);
    return count;
}
