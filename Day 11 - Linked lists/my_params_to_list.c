/*
** EPITECH PROJECT, 2021
** my_params_to_list.c
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list (int argc, char * const *argv)
{
    linked_list_t *list_main = 0;
    for (int i = 0; i < argc; i++) {
        linked_list_t *item = malloc(sizeof(linked_list_t*));
        item->data = argv[i];
        item->next = list_main;
        list_main = item;
    }
    return list_main;
}
