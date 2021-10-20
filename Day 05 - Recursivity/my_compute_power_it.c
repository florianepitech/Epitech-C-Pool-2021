/*
** EPITECH PROJECT, 2021
** my_compute_power_it.c
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = nb;
    if (p < 0) {
        return 0;
    } else if (p == 0) {
        return 1;
    }
    for (int i = 1; i < p; i++) {
        result *= nb;
        if (result > 2147483647) {
            return 0;
        }
    }
    return result;
}
