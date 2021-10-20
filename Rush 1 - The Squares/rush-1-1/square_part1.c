/*
** EPITECH PROJECT, 2021
** square_part1.c
** File description:
** square_part1
*/

void my_putchar(char c);

void square_part1(int width, int height, char c1, char c2)
{
    for (int i = 0; i < width; i++) {
        if (i == 0 || i == width - 1) {
            my_putchar(c1);
        } else {
            my_putchar(c2);
        }
    }
}
