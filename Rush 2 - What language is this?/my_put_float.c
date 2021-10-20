/*
** EPITECH PROJECT, 2021
** my_put_float.c
** File description:
** my_put_float
*/

long pow_10(int pow)
{
    long r = 1;
    for(long i = 0; i < pow; i++) {
        r *= 10;
    }
    return r;
}

int my_put_float(float in, int coma) {
    char zero = '0';
    char negativ = '-';
    char dot = '.';
    long n = (long)(in * pow_10(coma));
    if (n == 0) {
        write(1, &zero, 1);
        if (coma != 0) {
            write(1, &dot);
            for (int i = 0; i < coma; i++)
                write(1, &zero, 1);
        }
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
        if (n < pow_10(coma))
            write(1, &zero, 1);
        for (int i = 0; i < c; i++) {
            long number = 48 + (n % r / (r / 10));
            r = r / 10;
            if (i == c - coma)
                my_putchar('.');
            write(1, &number, 1);
        }
    }
}
