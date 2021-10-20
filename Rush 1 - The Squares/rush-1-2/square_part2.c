/*
** EPITECH PROJECT, 2021
** square_part2.c
** File description:
** square_part2
*/

void my_putchar(char c);

void square_part2(int width, int height, char c2)
{
    height -= 2;
    if (height < 0) {
        height = 0;
    }
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            if (w == 0 || w == (width - 1)) {
                my_putchar(c2);
            } else {
                my_putchar(' ');
            }
        }
        if (h != height - 1) {
            my_putchar('\n');
        }
    }
}
