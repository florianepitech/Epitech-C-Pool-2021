/*
** EPITECH PROJECT , 2021
** my_print_alpha.c
** File description :
** No file there , just an epitech header example
*/

int my_putchar(char c);

int my_print_alpha(void) {
    int start = 97;
    int end = 122;
    for(int i = start; i <= end; ++i) {
        char c = i;
        my_putchar(i);
        //write(1, &c, c);
    }
}
