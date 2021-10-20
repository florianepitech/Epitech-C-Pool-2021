/*
** EPITECH PROJECT, 2021
** cpool day04 task03
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int counter = 0;

    while (str[counter] != '\0') {
        counter = counter + 1;
    }
    return counter;
}
