/*
** EPITECH PROJECT, 2021
** square_part3.c
** File description:
** square_part3
*/

void my_putchar(char c);

void square_part3(int width, int height, char c1, char c2, char c3)
{
    if (height == 1 || width == 1) {
        c1 = c2;
        c3 = c2;
    }
    if (height > 1) {
        for (int i = 0; i < width; i++) {
            if (i == 0) {
                my_putchar(c3);
            } else if (i == width - 1) {
                my_putchar(c1);
            } else {
                my_putchar(c2);
            }
        }
    }
}
