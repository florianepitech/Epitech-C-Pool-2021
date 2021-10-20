/*
** EPITECH PROJECT, 2021
** test_cat.c
** File description:
** test_cat
*/

#include <criterion/criterion.h>

Test(cat, cat_1)
{
    cr_assert_str_eq("test1", "test1");
}

Test(cat, cat_2)
{
    cr_assert_str_eq("test2", "test2");
}
