/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** #FreeKOSOVO
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p == 1)
        return (nb);
    result = nb * my_compute_power_rec(nb, p - 1);
    return result;
}
