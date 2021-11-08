/*
** EPITECH PROJECT, 2021
** bistromatic_main.c
** File description:
** bistromatic_main
*/

#include <unistd.h>
#include "include/my.h"
#include "include/bistromatic.h"

int main(int argc, char **argv)
{
    if(argc == 2 && my_strcmp("-h", argv[1]) == 0) {
        my_putstr("USAGE\n./calc base operators size_read\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("- base: all the symbols of the base\n");
        my_putstr("- operators: the symbols for the parentheses and the 5 operators\n");
        my_putstr("- size_read: number of characters to be read\n");
        return 0;
    }
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;
    while ((len = read(0 , buff + offset, BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    if (argc >= 4) {
        char *result = bistromatic(buff, argv[1], argv[2], argv[3]);
        my_putstr(result);
        return 0;
    }
    my_putstr("too few argument");
    return 0;
}