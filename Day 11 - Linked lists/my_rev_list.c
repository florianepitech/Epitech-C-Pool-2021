/*
** EPITECH PROJECT, 2021
** my_rev_list.c
** File description:
** my_rev_list
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv);
int my_list_size (linked_list_t const *begin);
void my_print_list(linked_list_t const *list);

char *get_data_list(int index, linked_list_t *list)
{
    linked_list_t *element = list;
    for (int i = 0; i < my_list_size(list); i++) {
        if (i == index)
            return element->data;
        element = element->next;
    }
    return 0;
}

int set_data_list(int index, linked_list_t *list, void *new_data)
{
    linked_list_t *element = list;
    for (int i = 0; i < my_list_size(list); i++) {
        if (i == index) {
            element->data = new_data;
            return 1;
        }
        element = element->next;
    }
    return 0;
}

void my_rev_list (linked_list_t **begin)
{
    int size = my_list_size((*begin));
    for (int i = 0; i < (size / 2); i++) {
        char *c1 = get_data_list(i, (*begin));
        char *c2 = get_data_list(size - i - 1, (*begin));
        set_data_list(size - i - 1, *begin, c1);
        set_data_list(i, *begin, c2);
    }
}
