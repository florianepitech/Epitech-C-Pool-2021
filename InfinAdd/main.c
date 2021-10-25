/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "include/infinit.h"
#include "include/my.h"

int main(int argc, char **argv)
{
    if (argc < 2) {
        my_putstr("infinit add : too few argument\n");
        return 84;
    }
    char *result = infinit(argv[1], argv[2]);
    my_putstr(result);
    my_putchar('\n');
    return 0;
}