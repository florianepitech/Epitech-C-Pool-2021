/*
** EPITECH PROJECT, 2021
** test_my_revstr.c
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char const *src);

Test (my_revstr, test_my_revstr_1)
{
    char str[] = "azerty";
    my_revstr(str);
    cr_assert_str_eq(str, "ytreza");
}
