/*
** EPITECH PROJECT, 2021
** my_evil_str.c
** File description:
** 
*/

#include <string.h>

char *my_evil_str(char *str)
{
    //size of string
    int l = 0;
    while(str[l] != 0) l++;
    //reverse all letter
    for(int i = 0; i < (l / 2); i++) {
        char charAt1 = str[i];
        char charAt2 = str[l - i - 1];
        //swicth letter
        str[i] = charAt2;
        str[l - i - 1] = charAt1;
    }
    return str;
}
