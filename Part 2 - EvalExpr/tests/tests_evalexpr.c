/*
 EPITECH PROJECT, 2021
 tests_evalexpr.h
 File description:
 tests_evalexpr
*/

#include "../include/calcul.h"
#include <criterion/criterion.h>

Test(test1m, test1m) {
    char *test = "3+42*(1-2/(3+4)-1%21)+2";
    char *result = "5";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test2m, test2m) {
    char *test = "";
    char *result = "";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test3m, test3m) {
    char *test = "-1";
    char *result = "-1";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test4m, test4m) {
    char *test = "1-2";
    char *result = "-1";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test5m, test5m) {
    char *test = "1+1";
    char *result = "2";
    cr_assert_str_eq(calcul_all(test), result);
}


Test(test6m, test6m) {
    char *test = "1+24%2";
    char *result = "1";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test7m, test7m) {
    char *test = "1+2*(-1-1*-(22+2*1)+1*-(-1+1*1))";
    char *result = "47";
    cr_assert_str_eq(calcul_all(test), result);
}

Test(test8m, test8m) {
    char *test = "((((((((((8))))))))))";
    char *result = "8";
    cr_assert_str_eq(calcul_all(test), result);
}