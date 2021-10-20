/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** my_strcapitalize
*/

int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

//-1: not in alphabet
//0: lowercase
//1: uppercase
//2: number
int type_char(char *c)
{
    if (c > 64 && c < 91) {
        return 1;
    } else if (c > 96 && c < 123) {
        return 0;
    } else if (c > 47 && c < 58) {
        return 2;
    }
    return -1;
}

char *switch_case(char *c)
{
    int type = type_char(c);
    if (type == 0) {
        c = c - 32;
    } else if (type == 1) {
        c = c + 32;
    }
    return c;
}

char *my_strcapitalize(char *str)
{
    int size = my_strlen(str);
    if (size >= 1 && type_char(str[0]) == 0) {
        str[0] = switch_case(str[0]);
    }
    for (int i = 1; i < size + 1; i++) {
        int type_c0 = type_char(str[i - 1]);
        int type_c1 = type_char(str[i]);
        if (type_c0 == 1 && type_c1 == 1 ) {
            str[i] = switch_case(str[i]);
        } else if (type_c0 == -1 && type_c1 == 0) {
            str[i] = switch_case(str[i]);
        } else if (type_c0 == 2 && type_c1 == 1) {
            str[i] = switch_case(str[i]);
        } else if (type_c0 == 0 && type_c1 == 1) {
            str[i] = switch_case(str[i]);
        }
    }
}
