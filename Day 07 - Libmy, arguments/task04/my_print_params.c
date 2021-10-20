/*
** EPITECH PROJECT, 2021
** my_print_params.c
** File description:
** my_print_params
*/

int my_strlen(char const *str)
{
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}

void my_print_params(int *count, char *args[])
{
    char line = '\n';
    for (int i = 0; i < count; i++) {
        int len = my_strlen(args[i]);
        write(1, args[i], len);
        write(1, &line, 1);
    }
}

int main(int argc, char *argv[])
{
    my_print_params(argc, argv);
    return 0;
}
