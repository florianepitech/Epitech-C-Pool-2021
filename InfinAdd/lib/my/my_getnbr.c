/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** 
*/

long pow_10(int pow)
{
    long r = 1;
    for (long i = 0; i < pow; i++) {
        r *= 10;
    }
    return r;
}

int int_at(int index, char *str)
{
    char c = str[index];
    return (c - '0');
}

int str_to_int(char *str, int size, int negativ)
{
    long result = 0;
    if (size > 10) {
        return 0;
    }
    for (int i = 0; i < size; i++) {
        result += pow_10(size - i - 1) * int_at(i, str);
    }
    if (negativ == 1) {
        result *= (-1);
    }
    if (result > 2147483647 || result < -2147483648) {
        return 0;
    }
    return (int)result;
}

int my_getnbr(char const *str)
{
    int start = 0;
    while (str[start] < 48 || str[start] > 57) {
        start++;
    }
    int end = start + 1;
    while (str[end] >= 48 && str[end] <= 57) {
        end++;
    }
    int negativ = 0;
    if (start != 0 && str[start - 1] == '-') {
        negativ = 1;
    }
    char num_str[end - start];
    int j = 0;
    for (int i = start; i < end; i++) {
        num_str[j] = str[i];
        j++;
    }
    return str_to_int(num_str, j, negativ);
}
