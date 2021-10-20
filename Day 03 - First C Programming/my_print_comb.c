/*
** EPITECH PROJECT, 2021
** my_print_comb.c
** File description:
** 
*/

int my_putchar(char c);

int my_print_comb() {
    //012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789
    for (int a = 0; a < 10; ++a) {
        for (int b = a + 1; b < 10; ++b) {
            for (int c = b + 1; c < 10; ++c) {
                /* Afficher abc */
                my_putchar(48 + a);
                my_putchar(48 + b);
                my_putchar(48 + c);
                if(a < 7) {
                    my_putchar(44);
                    my_putchar(32);
                }
            }
        }
    }
}
