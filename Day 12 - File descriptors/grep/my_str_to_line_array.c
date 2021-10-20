/*
** EPITECH PROJECT, 2021
** my_str_to_line_array.c
** File description:
** my_str_to_line_array
*/

#include <stdlib.h>
#include "../include/my.h"

int is_newline(char c)
{
    if (c == '\n')
        return 0;
    return 1;
}

int index_word (char *str, int word)
{
    int count = 0, on_word = 0;
    int length = my_strlen(str);
    for (int i = 0; i < length; i++) {
        if(is_newline(str[i]) == 1) {
            if (on_word == 0) {
		on_word = 1;
                count++;
            }
            if (count == word) {
                return i;
            }
        } else {
            on_word = 0;
        }
    }
    return -1;
}

int count_words (char *str)
{
    int count = 0, on_word = 0;
    int	length = my_strlen(str);
    for (int i = 0; i < length; i++) {
        if(is_newline(str[i]) == 1) {
            if (on_word == 0) {
                on_word = 1;
                count++;
            }
        } else {
            on_word = 0;
        }
    }
    return count;
}

int count_word_letter (char *str, int word)
{
    int count = 0, on_word = 0, letter = 0;
    int length = my_strlen(str);
    for (int i = 0; i < length; i++) {
	if(is_newline(str[i]) == 1) {
            if (on_word == 0) {
                on_word = 1;
                count++;
            }
            if (count == word) {
                letter++;
            }
        } else {
            on_word = 0;
        }
    }
    return letter;
}

char **my_str_to_line_array (char const *str)
{
    int str_len = my_strlen(str);
    int total_words = count_words(str);
    char **str_final = malloc(sizeof(char*) * (total_words + 1));
    for (int i = 0; i < total_words; i++) {
        int w_index = index_word(str, i + 1);
        int w_size = count_word_letter(str, i + 1);
        char *str_sub_final = malloc(sizeof(char) * w_size + 1);
        for (int j = 0; j < w_size; j++) {
            str_sub_final[j] = str[w_index + j];
        }
        str_sub_final[w_size] = 0;
        str_final[i] = str_sub_final;
    }
    str_final[total_words] = 0;    
    return str_final;
}
