/*
** EPITECH PROJECT, 2021
** square_part2.c
** File description:
** square_part2
*/

void my_putchar(char c);

void print_part2(int width, int height, char c3)
{
    for (int w = 0; w < width; w++) {
        if (w == 0 || w == (width - 1)) {
            my_putchar(c3);
        } else {
            my_putchar(' ');
        }
    }
}

void square_part2(int width, int height, char c3)
{
    height -= 2;
    if (height < 0) {
        height = 0;
    }
    for (int h = 0; h < height; h++) {
        print_part2(width, height, c3);
        if (h != height - 1) {
            my_putchar('\n');
        }
    }
}
