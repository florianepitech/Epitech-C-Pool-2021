/*
** EPITECH PROJECT, 2021
** my_print_comb2.c
** File description:
** 
*/

int my_putchar(char c);

int my_print_comb2(void) {
    int d = 48;
    for (int i = 0; i < 100; i++) {
        for (int j = i + 1; j < 100; j++) {
            //print first number with 2 digits
            int a1 = d + i % 10;
            int a2 = d + i / 10;
            my_putchar(a2);
            my_putchar(a1);
            //separe with space
            my_putchar(' ');
            //print second number with 2 digits
            int b1 = d + j % 10;
            int b2 = d + j / 10;
            my_putchar(b2);
            my_putchar(b1);
            //print coma and space if we need
            if(i != 98 || j != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}
