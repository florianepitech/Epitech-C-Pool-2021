/*
** EPITECH PROJECT, 2021
** my_params_to_array.c
** File description:
** my_params_to_array
*/

#include "include/my.h"
//#include <stdlib.h>
//#include <string.h>

//#include "my_struct.h"

char **my_str_to_word_array (char const *str);
struct info_param *info_params_to_array(int ac, char **av);

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *result = malloc((sizeof(struct info_param) * ac) + 1);
    for (int i = 0; i < ac; i++) {
        result[i].length = my_strlen(av[i]);
        result[i].str = av[i];
        //I don't know wy with this part of code, it's work
        int l = my_strlen(av[i]);
        char *dest = malloc(sizeof(char) * (l  + 1));
        //end
        result[i].copy = my_strdup(av[i]);
        result[i].word_array = my_str_to_word_array(av[i]);
    }
    result[ac].length = 0;
    result[ac].str = 0;
    result[ac].copy = 0;
    result[ac].word_array = 0;
    return result;
}
