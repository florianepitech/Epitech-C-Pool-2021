/*
** EPITECH PROJECT, 2021
** my_find_prime_sup.c
** File description:
** my_find_prime_sup
*/

int my_is_prime(int n);

int my_find_prime_sup(int n)
{
    for (int i = n; i < 2147483647; i++) {
        if (my_is_prime(i) == 1) {
            return i;
        }
    }
    return 0;
}
