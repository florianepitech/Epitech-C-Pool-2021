/*
** EPITECH PROJECT, 2021
** test_infinit_add.c
** File description:
** infinit_add
*/

#include <criterion/criterion.h>
#include "../include/infinit.h"

Test(infinit_0, test0)
{
    cr_assert_str_eq(infinit("99", "99"), "198");
}

Test(infinit_1, test1)
{
    cr_assert_str_eq(infinit("435439435845843984358439", "45359766785665822182412343254343435433339459569"), "45359766785665822182412778693779281277323818008");
}

Test(infinit_2, test1)
{
    cr_assert_str_eq(infinit("1235", "385"), "1620");
}

Test(infinit_3, test2)
{
    cr_assert_str_eq(infinit("0", "385"), "385");
}

Test(infin_add_4, test3)
{
    cr_assert_str_eq(infinit("278", "0"), "278");
}

Test(infinit_5, test5)
{
    cr_assert_str_eq(infinit("350", "-300"), "50");
}

Test(infinit_6, test6)
{
    cr_assert_str_eq(infinit("-235", "896"), "661");
}


Test(infinit_7, test7)
{
    cr_assert_str_eq(infinit("100", "-200"), "-100");
}

Test(infinit_8, test8)
{
    cr_assert_str_eq(infinit("-876435", "987143265"), "986266830");
}

Test(infinit_9, test9)
{
    cr_assert_str_eq(infinit("-807965", "-34532"), "-842497");
}

Test(infinit_10, test10)
{
    cr_assert_str_eq(infinit("-100", "100"), "0");
}