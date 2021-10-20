/*
** EPITECH PROJECT, 2021
** my_print_list.c
** File description:
** my_print_list
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv);
int my_list_size (linked_list_t const *begin);

void my_print_list(linked_list_t *list)
{
    my_putstr("=====[PRINT LIST]======\n");
    linked_list_t *element = list;
    while (element->next != 0) {
        my_putstr(element->data);
        my_putchar('\n');
        element = element->next;
    }
    if (my_list_size(list) > 1) {
        my_putstr(element->data);
        my_putchar('\n');
    }
    my_putstr("=======================\n");
}
