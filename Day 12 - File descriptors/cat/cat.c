/*
** EPITECH PROJECT, 2021
** cat.c
** File description:
** cat
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

int main (int argc, char **argv)
{
    if (argc <= 1) {
        slate();
    } else {
        read_files(argc, argv);
    }
    return 0;
}

void slate()
{
    char *nb;
    int file = open(nb, O_RDONLY);
    char buffer[MAX_SIZE];
    while (read(0, buffer, MAX_SIZE) > 0) {
        my_putstr(buffer);
        buffer[0] = '\0';
    }
}

int read_files(int argc, char **argv)
{
    for (int i = 1; i < argc; i++) {
        int file = open(argv[i], O_RDONLY);
        if (errno != 0)
            return print_error(argv[i], errno);;
        char buffer[MAX_SIZE];
        //read(file, buffer, MAX_SIZE);
        int r;
        while ((r = read(file, buffer, 1)) > 0) {
            if (errno != 0) {
                print_error(argv[i], errno);
                break;
            }
            my_putstr(buffer);
        }
        if (errno != 0)
            return print_error(argv[i], errno);
        my_putstr(buffer);
        close(file);
        if (errno != 0) 
            return print_error(argv[i], errno);;
    }
}

int print_error(char *file, int error)
{
    my_putstr("cat: ");
    my_putstr(file);
    if (error == 2)
        my_putstr(": no such file or directory\n");
    else if (error == 21)
        my_putstr(": is a directory\n");
    else
        my_putstr(": unknown error\n");
    return error;
}
