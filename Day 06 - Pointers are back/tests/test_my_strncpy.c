/*
** EPITECH PROJECT, 2021
** test_my_strncpy.c
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test (my_strncpy, test_my_strncpy1)
{
    char src[] = "bonjours";
    char dest[9];
    cr_assert_str_eq(my_strncpy(dest, src, 10), "bonjours");
}
