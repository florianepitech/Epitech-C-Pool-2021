/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec (int nb, int p)
{
    long result = nb;
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (p == 1)
        return nb;
    result = nb * my_compute_power_rec(nb, p - 1);
    if (result > 2147483647) {
        return 0;
    }
    return (int)result;
}
