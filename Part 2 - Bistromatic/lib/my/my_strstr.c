/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** my_strstr
*/

int my_strlen(char const *str);

int check_found(int i, int j, char *str, char const *to_find)
{
    if (str[i + j] != to_find[j]) {
        return 0;
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int size_str = my_strlen(str);
    int size_find = my_strlen(to_find);
    if (size_find > size_str) {
        return 0;
    }
    for (int i = 0; i < (size_str - size_find + 1); i++) {
        int found = 1;
        for (int j = 0; j < size_find && found == 1; j++) {
            found = check_found(i, j, str, to_find);
        }
        if (found == 1) {
            return str[i];
        }
    }
    return 0;
}

char *my_position_strstr(char *str, char const *to_find)
{
    int size_str = my_strlen(str);
    int size_find = my_strlen(to_find);
    if (size_find > size_str) {
        return 0;
    }
    for (int i = 0; i < (size_str - size_find + 1); i++) {
        int found = 1;
        for (int j = 0; j < size_find && found == 1; j++) {
            found = check_found(i, j, str, to_find);
        }
        if (found == 1) {
            return i;
        }
    }
    return 0;
}
