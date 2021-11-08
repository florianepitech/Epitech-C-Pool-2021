/*
** EPITECH PROJECT, 2021
** test_bistro.c
** File description:
** test_bistro.c
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "../include/bistromatic.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(test01, test01)
{
    char *str = "3+6\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "3";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "9");
}

Test(test02, test02)
{
    char *str = "3v6\n";
    char *base_table = "0123456789";
    char *operator = "{}vwxyz";
    char *len = "3";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "9");
}

//FAIL
Test(test03, test03)
{
    char *str = "----++-6(12)\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "10";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "syntax error");
}

//FAIL
Test(test04, test04)
{
    char *str = "----++-6*12\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "11";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "-72");
}

Test(test05, test05)
{
    char *str = "-(12-(4*32))\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "12";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "116");
}

Test(test06, test06)
{
    char *str = "-(e@-(;*!@))\n";
    char *base_table = "0A@!;ie& ]";
    char *operator = "()+-*/%";
    char *len = "12";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "ee");
}

Test(test07, test07)
{
    char *str = "-(12*(13+15/5*(6/(12+14%(30%5+(10*25)-46)+16)-20)/43)*20)*(-(12-98*42)*(16+63-50/3))\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "84";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "-744629760");
}

Test(test08, test08)
{
    char *str = "test\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "4";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "syntax error");
}

Test(test09, test09)
{
    char *str = "-test\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "5";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "syntax error");
}

Test(test10, test10)
{
    char *str = "te-st\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "5";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "syntax error");
}

Test(test11, test11)
{
    char *str = "-/1*3*test\n";
    char *base_table = "0123456789";
    char *operator = "()+-*/%";
    char *len = "5";
    cr_assert_str_eq(bistromatic(str, base_table, operator, len), "syntax error");
}