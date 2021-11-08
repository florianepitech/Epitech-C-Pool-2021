/*
** EPITECH PROJECT, 2021
** my_modpos.c
** File description:
** my_modpos.c
*/

int my_modpos(int nb, int mod)
{
     while (nb < 0) {
         nb = nb + mod;
     }
     return nb;
}