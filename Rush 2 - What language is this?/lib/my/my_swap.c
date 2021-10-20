/*
** EPITECH PROJECT, 2021
** cpool day04 task01
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
