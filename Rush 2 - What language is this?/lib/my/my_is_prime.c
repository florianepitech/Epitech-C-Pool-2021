/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** #FreeKOSOVO
*/

int my_is_prime(int nb)
{
    int i = 1;
    int counter = 0;

    while (i < nb) {
        i++;
        if (nb % i == 0)
            counter++;
    }
    if (nb == 1)
        return 1;
    if (counter == 0)
        return 1;
    else
        return 0;
}
