/*
** EPITECH PROJECT, 2021
** my_print_digits.c
** File description:
** 
*/

int my_putchar(char c);


int my_print_digits(void) {
    for(int i = 48; i <= 57; i++) {
        my_putchar(i);
    }
}
