/*
** EPITECH PROJECT, 2021
** swap_endian_color.c
** File description:
** swap_endian_color
*/

int swap_endian_color(int color)
{
    unsigned char red = color >> 24;
    unsigned char green = color >> 16;
    unsigned char blue = color >> 8;
    unsigned char a = color;
    return (a << 24) | (blue << 16) | (green << 8) | red;
}
