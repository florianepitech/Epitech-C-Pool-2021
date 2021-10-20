/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star
*/

void my_print(char c) {
    write(1, &c, 1);
}

int my_size(unsigned int n)
{
    int size = 0;
    size += n * 2;
    size += 2 * n - 3;
    size += n * 2;
    return size;
}

int print_head(unsigned int n)
{
    int rows = n;
    int i, j, k = 0;
    for (i = 1; i <= rows; i++) {
        if (n == 1) {
            my_print(' ');
    	}
        for (int m = 0; m < (rows * 2); m++) {
            my_print(' ');
        }
        for (j = 1; j <= rows - i; j++) {
            my_print(' ');
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                my_print('*');
            } else {
                my_print(' ');
            }
        }
        my_print('\n');
    }
}

int print_arm(unsigned int n)
{
    int limitStars = n * 2 + 1;
    int limitSpace = 2 * n - 3;
    if (n == 1) {
        limitStars = 3;
        limitSpace = 1;
    }
    for (int i = 0; i < limitStars; i++) {
        my_print('*');
    }

    for (int i = 0; i < limitSpace; i++) {
        my_print(' ');
    }
    for (int i = 0; i < limitStars; i++) {
        my_print('*');
    }
    my_print('\n');
}

int print_body(unsigned int s)
{
    int bs = my_size(s);
    if (s == 1) {
        bs = 8;
    }
    for (int l = 0; l < s; l++) {
        for (int i = 0; i <= bs; i++) {
            int limit = bs - l;
            if (s == 1) {
                limit = 5;
            }
            if (i == (l + 1)) {
                my_print('*');
            } else if (i == limit) {
                my_print('*');
                break;
            } else {
                my_print(' ');
            }
        }
        my_print('\n');
    }
    for (int l = 0; l < s - 1; l++) {
        for (int i = 0; i <= bs; i++) {
            int limit = (bs + (l - s)) + 2;
            if (i == (s - l - 1)) {
                my_print('*');
            } else if (i == limit) {
                my_print('*');
                break;
            } else {
                my_print(' ');
            }
        }
        my_print('\n');
    }
}

int print_foot(unsigned int n)
{
    int i, j, k, m = 1;
    int rows = n;
    for (i = rows; i >= 1; i--) {
        if (n == 1) {
            my_print(' ');
        }
        for (int m = 0; m < (rows * 2 - 1); m++) {
            my_print(' ');
        }
        for (j = 1; j <= m; j++) {
            my_print (' ');
        }
        for (k = 1; k <= ( 2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                my_print('*');
            } else {
                my_print(' ');
            }
        }
        m++;
        my_print ('\n');
    }
}

int star(unsigned int s)
{
    if (s >= 1) {
        print_head(s);
        print_arm(s);
        print_body(s);
        print_arm(s);
        print_foot(s);
    }
}
