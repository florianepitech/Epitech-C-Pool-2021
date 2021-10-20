/*
** EPITECH PROJECT, 2021
** square_part1.c
** File description:
** square_part1
*/

void my_putchar(char c);

void print_part1(int i, int width, char c1, char c2, char c3)
{
    if (i == 0) {
        my_putchar(c1);
    } else if (i == width - 1) {
        my_putchar(c3);
    } else {
        my_putchar(c2);
    }
}

void square_part1(int width, int height, char c1, char c2, char c3)
{
    if (height == 1 || width == 1) {
        c1 = c2;
        c3 = c2;
    }
    for (int i = 0; i < width; i++) {
        print_part1(i, width, c1, c2, c3);
    }
}
