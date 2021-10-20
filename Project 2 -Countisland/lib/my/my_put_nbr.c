/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** 
*/

char zero = '0';
char negativ = '-';

int my_put_nbr(int in) {
    long n = in;
    if (n == 0) {
        write(1, &zero, 1);
    } else {
        if (n < 0) {
            write(1, &negativ, 1);
            n = n * -1;
        }
        long r = 1;
        long c = 0;
        while ((n / r) != 0) {
            r = r * 10;
            c++;
        }
        for (int i = 0; i < c; i++) {
            long number = 48 + (n % r / (r / 10));
            r = r / 10;
            write(1, &number, 1);
        }
    }
}
