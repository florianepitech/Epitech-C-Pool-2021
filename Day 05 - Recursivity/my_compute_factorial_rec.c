/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec.c
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return 0;
    } else if (nb == 1 || nb == 0) {
        return 1;
    }
    int result = 1;
    result = my_compute_factorial_rec(nb - 1) * nb;
    return result;
}
