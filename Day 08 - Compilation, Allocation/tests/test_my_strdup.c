/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** my_strdup.c
*/
#include <criterion/criterion.h>
char *my_strdup(char const *src);
Test (dup, strdup)
{
    char src[] = "bonjours je suis actuellement en 1 er anne d'epitech";
    char *str = my_strdup(src);
    cr_assert_str_eq(str, "bonjours je suis actuellement en 1 er anne d'epitech");
    free(str);
}
