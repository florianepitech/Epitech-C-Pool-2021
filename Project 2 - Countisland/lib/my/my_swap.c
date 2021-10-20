/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** 
*/

//age designe la valeur de age
//&age designe l'adresse de ma variable
//*pointeurAge est une variable qui contient l'adresse de age

//CONSIGNE:
//Ecrivez une fonction qui échange le contenu de deux entiers dont les adresses sont données en paramètre.

void my_swap(int *a, int *b)
{
    int a1 = *a;
    int b1 = *b;
    *a = b1;
    *b = a1;
}
