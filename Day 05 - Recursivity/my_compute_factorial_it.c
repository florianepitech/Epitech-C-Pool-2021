/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int n)
{
    if (n < 0 || n > 12) {
        return 0;
    }
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= (i + 1);
    }
    return result;
}
