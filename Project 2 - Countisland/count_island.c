/*
** EPITECH PROJECT, 2021
** count_island.c
** File description:
** count_island
*/

#include "include/libmy.h"

int get_width(char **island);
int get_heigth(char **island);
int check_position(char **island, int h, int w, int count);
void delete_around(char **island, int h, int w, int count);
int count_island(char **island);

int get_width(char **island)
{
    int i = 0;
    while (island[0][i] != 0) {
        i++;
    }
    return i;
}

int get_heigth(char **island)
{
    int i = 0;
    while (island[i] != 0) {
        i++;
    }
    return i;
}

int check_position(char **island, int h, int w, int count)
{
    int max_w = get_width(island) - 1;
    int max_h = get_heigth(island) - 1;
    if (h <= max_h && w <= max_w && h >= 0 && w >= 0) {
        if (island[h][w] == 'X') {
            island[h][w] = '0' + count;
            delete_around(island, h, w, count);
        }
    }
}

void delete_around(char **island, int h, int w, int count)
{
    check_position(island, h, w + 1, count);
    check_position(island, h, w - 1, count);
    check_position(island, h + 1, w, count);
    check_position(island, h - 1, w, count);
}

int count_island(char **island)
{
    int count = 0;
    int heigth = get_heigth(island);
    if (heigth == 0) {
        return  0;
    }
    int width = get_width(island);
    if (width == 0) {
        return 0;
    }
    for (int h = 0; h < heigth; h++) {
        for (int w = 0; w < width; w++) {
            if (island[h][w] == 'X') {
                island[h][w] = '0' + count;
                delete_around(island, h, w, count);
                count++;
            }
        }
    }
    return count;
}
