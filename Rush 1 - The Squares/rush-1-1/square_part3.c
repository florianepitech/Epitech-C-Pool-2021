/*
** EPITECH PROJECT, 2021
** square_part3.c
** File description:
** square_part3
*/

void my_putchar(char c);

void print_part3(int width, int height, char c1, char c2)
{
    for (int i = 0; i < width; i++) {
        if (i == 0 || i == width - 1) {
            my_putchar(c1);
        } else {
            my_putchar(c2);
        }
    }
}

void square_part3(int width, int height, char c1, char c2)
{
    if (height > 1) {
        print_part3(width, height, c1, c2);
    }
}
