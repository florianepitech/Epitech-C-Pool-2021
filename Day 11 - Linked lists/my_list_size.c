/*
** EPITECH PROJECT, 2021
** my_list_size.c
** File description:
** my_list_size
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv);
void my_print_list(linked_list_t *list);

int my_list_size (linked_list_t *begin)
{
    int i = 0;
    if (begin == 0)
        return 0;
    linked_list_t *prev = begin;
    while (prev->next != 0) {
        prev = prev->next;
        i++;
    }
    return i + 1;
}
