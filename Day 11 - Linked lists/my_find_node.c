/*
** EPITECH PROJECT, 2021
** my_find_node.c
** File description:
** my_find_node
*/

#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv);
int my_list_size (linked_list_t *begin);
void my_print_list(linked_list_t *list);

linked_list_t *my_find_node(linked_list_t const *begin,
                            void const *data_ref,
                            int (*cmp)())
{
    linked_list_t *element = begin;
    for (int i = 0; i < my_list_size(begin); i++) {
        if (cmp(element->data, data_ref))
            return element;
        element = element->next;
    }
    return 0;
}
