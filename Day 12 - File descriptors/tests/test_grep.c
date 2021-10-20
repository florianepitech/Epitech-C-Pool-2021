/*
** EPITECH PROJECT, 2021
** test_grep.c
** File description:
** test_grep
*/

#include <criterion/criterion.h>

Test(grep, grep_1)
{
    cr_assert_str_eq("test1", "test1");
}

Test(grep, grep_2)
{
    cr_assert_str_eq("test2", "test2");
}
