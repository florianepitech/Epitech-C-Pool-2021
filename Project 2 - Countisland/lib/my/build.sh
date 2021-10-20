#!/usr/bin/env bash
##
## EPITECH PROJECT, 2021
## build.sh
## File description:
## build a lib
##

##Name of lib : libmy.c
gcc -c *.c
ar rc libmy.a *.o
