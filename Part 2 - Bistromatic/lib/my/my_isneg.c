/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** my_isneg
*/

int my_putchar(char c);

int my_isneg(int i)
{
    if (i < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
}
