#!/usr/bin/env bash
##
## EPITECH PROJECT, 2021
## build.sh
## File description:
## build a lib
##

##Name of lib : libmy.c
rm *.o
rm libmy.a
gcc -c *.c
ar rc libmy.a *.o
