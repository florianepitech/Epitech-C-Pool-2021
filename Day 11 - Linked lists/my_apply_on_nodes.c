/*
** EPITECH PROJECT, 2021
** my_apply_on_nodes.c
** File description:
** my_apply_on_nodes
*/

#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv);
int my_list_size (linked_list_t *begin);
void my_print_list(linked_list_t *list);

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void*))
{
    linked_list_t *element = begin;
    for (int i = 0; i < my_list_size(begin); i++) {
        element->data = (f)(element->data);
        element = element->next;
    }
    return 0;
}
