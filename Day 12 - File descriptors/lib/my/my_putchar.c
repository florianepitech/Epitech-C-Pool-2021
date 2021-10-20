/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** my_putchar
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}
