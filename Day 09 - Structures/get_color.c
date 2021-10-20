/*
** EPITECH PROJECT, 2021
** get_color.c
** File description:
** get_color
*/

#include "include/my.h"

int get_color (unsigned char red, unsigned char green, unsigned char blue)
{
    int	color = red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return color;
}
