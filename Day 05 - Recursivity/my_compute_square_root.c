/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** my_compute_square_root
*/

int my_compute_power_it(int nb, int p);

int my_compute_square_root(int nb)
{
    int result = 0;
    int i;
    for (i = 1; result < nb; i++) {
        int add = 2 * i - 1;
        result += add;
    }
    i--;
    if (my_compute_power_it(i, 2) != nb) {
        i = 0;
    }
    return i;
}
