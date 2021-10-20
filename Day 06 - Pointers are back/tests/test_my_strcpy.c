/*
** EPITECH PROJECT, 2021
** test_my_strcpy.c
** File description:
** test_my_strcpy
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test (my_strcpy, test_my_strcpy_1)
{
    char str[] = "azerty";
    char dest[7];
    my_strcpy(dest, str);
    cr_assert_str_eq(str, dest);
}
