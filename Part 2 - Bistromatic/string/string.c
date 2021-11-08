/*
** EPITECH PROJECT, 2021
** string.c
** File description:
** string
*/

#include "../include/my.h"
#include "../include/string.h"
#include <stdlib.h>

char *my_str_cut(char *str, int start, int end)
{
    if (end <= start)
        return "";
    char *result = malloc(sizeof(char) * (end - start + 1));
    for (int i = 0; i < (end - start); i++) {
        result[i] = str[start + i];
    }
    result[end - start] = '\0';
    return result;
}

char *my_str_cut_start(char *str, int start)
{
    int len = my_strlen(str);
    if (start == len - 1)
        return "";
    char *result = malloc(sizeof(char) * (len - start + 1));
    for (int i = 0; i < (len - start); i++) {
        result[i] = str[start + i];
    }
    result[len - start] = '\0';
    return result;
}

char *my_str_cut_end(char *str, int start)
{
    int len = my_strlen(str);
    char *result = malloc(sizeof(char) * (len - start + 1));
    for (int i = 0; i < (len - start); i++) {
        result[i] = str[i];
    }
    result[len - start] = '\0';
    return result;
}

char *my_str_concat(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    char *result = malloc(sizeof(char) * (len1 + len2 + 1));
    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }
    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }
    result[len1 + len2] = '\0';
    return result;
}

char *my_str_add_at(char *mainStr, char *str, int position)
{
    char *result = malloc(sizeof(char) * (my_strlen(mainStr) + my_strlen(str) + 1));
    int j = 0;
    for (int i = 0; i < position; i++) {
        result[j] = mainStr[i];
        j++;
    }

    for (int i = 0; i < my_strlen(str); i++) {
        result[j] = str[i];
        j++;
    }

    for (int i = 0; i < my_strlen(mainStr) - position; i++) {
        result[j] = mainStr[position + i];
        j++;
    }
    result[my_strlen(mainStr) + my_strlen(str)] = '\0';
    return result;
}

int my_char_is_parenthesis(char c)
{
    if (c == '(')
        return 1;
    if (c == ')')
        return 2;
    return 0;
}

/*
 *  COUNT
 */

int count_char_in_str(char *str, char c1)
{
    int count = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c1)
            count++;
    }
    return count;
}

int count_2char_in_str(char *str, char c1, char c2)
{
    int count = count_char_in_str(str, c1);
    count += count_char_in_str(str, c2);
    return count;
}

/*
 *  @florian
 *  return 1 if is a calcul
 *  return 0 if is juste a number
 */
int str_is_operation(char *str)
{
    int i1 = count_char_in_str(str, '-');
    int i2 = count_char_in_str(str, '+');
    i2 += count_char_in_str(str, '*');
    i2 += count_char_in_str(str, '%');
    i2 += count_char_in_str(str, '/');
    if (str[0] == '-') {
        if (i1 <= 1 && i2 == 0)
            return 0;
        return 1;
    } else {
        if (i1 == 0 && i2 == 0)
            return 0;
        return 1;
    }
}

int get_index_of_first_char(char *str, char c1)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c1)
            return i;
    }
    return (-1);
}

int get_index_of_first_2char(char *str, char c1, char c2)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c1 || str[i] == c2)
            return i;
    }
    return (-1);
}

int my_str_contain_char_of_str(char *str1, char *str2)
{
    for (int i = 0; i < my_strlen(str1); i++) {
        for (int j = 0; j < my_strlen(str2); j++) {
            if (str1[i] == str2[j])
                return (1);
        }
    }
    return (0);
}

char *my_char_to_str(char c)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = c;
    str[1] = '\0';
    return str;
}