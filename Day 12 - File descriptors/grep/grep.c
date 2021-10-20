/*
** EPITECH PROJECT, 2021
** grep.c
** File description:
** grep
*/

//errno for errors
#include <errno.h>

//for read, write
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

//my lib
#include "../include/my.h"

#define MAX_SIZE 30000

void slate();
int read_files(int argc, char **argv);
int print_error(char *file, int error);
char **my_str_to_line_array (char const *str);

int main (int argc, char **argv)
{    
    if (argc > 2)
        return read_files(argc, argv);
    else
        my_putstr("Usage: grep <to_find> <file>\n");
    return 0;
}

int read_files(int argc, char **argv)
{
    int file = open(argv[2], O_RDONLY);
    if (errno != 0)
        return print_error(argv[2], errno);
    char buffer[MAX_SIZE];
    read(file, buffer, MAX_SIZE);
    if (errno != 0)
        return print_error(argv[2], errno);
    grep(buffer, argv[1]);
    close(file);
    if (errno != 0) 
        return print_error(argv[2], errno);
    return 0;
}

int grep(char *str, char *element)
{
    int count = 0;
    char **line_array = my_str_to_line_array(str);
    for (int i = 0; line_array[i]; i++) {
        if (my_strstr(line_array[i], element) != 0) {
            count++;
            my_putstr(line_array[i]);
            my_putstr("\n");
        }
    }
    return count;
}

int print_error(char *file, int error)
{
    my_putstr("grep: ");
    my_putstr(file);
    if (error == 2)
        my_putstr(": No such file or directory\n");
    else if (error == 21)
        my_putstr(": is a directory\n");
    else if (error == 13)
        my_putstr(": Permission denied\n");
    else
        my_putstr(": Unknown error\n");
    return error;
}
