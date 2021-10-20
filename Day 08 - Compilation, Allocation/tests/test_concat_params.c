/*
** EPITECH PROJECT, 2021
** test_concat_params.c
** File description:
** test_concat_params.c
*/
#include <stdlib.h>
#include <criterion/criterion.h>

char *concat_params(int argc, char **av);

Test (print, print_concat_params){

    char *argv[] = {"./a.out", "toto", "titi", NULL};
    int argc = 3;
    cr_assert_str_eq(concat_params(argc,argv), "./a.out\ntoto\ntiti\n\0");
}
