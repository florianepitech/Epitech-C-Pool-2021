/*
** EPITECH PROJECT, 2021
** rush.c
** File description:
** rush
*/

void my_putchar(char c);
void square_part1(int width, int heigth, char c1, char c2, char c3);
void square_part2(int width, int height, char c2);
void square_part3(int width, int heigth, char c1, char c2, char c3);

int rush(int width, int heigth)
{
    char c1 = '/', c2 = '*', c3 = '\\';
    if (width <= 0 || heigth <= 0) {
        write(2, "Invalid size\n", 13);
    } else {
        square_part1(width, heigth, c1, c2, c3);
        if (heigth != 1) {
            my_putchar('\n');
        }
        square_part2(width, heigth, c2);
        if (heigth != 1) {
            my_putchar('\n');
        }
        square_part3(width, heigth, c1, c2, c3);
        my_putchar('\n');
    }
}
