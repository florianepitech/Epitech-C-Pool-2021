/*
** EPITECH PROJECT, 2021
** test_count_island.c
** File description:
** test_count_island
*/

#include <criterion/criterion.h>
#include <stdio.h>

int count_island(char **island);

Test (count_island, first_test)
{
    char *island[15];
    island[0] =  strdup(".................XXXXXXXX..........................................");
    island[1] =  strdup("....................XXXXXXXXX.......XXXXXXXX.......................");
    island[2] =  strdup(".................XXXXXXXX..............XXX...XXXXX.................");
    island[3] =  strdup(".....................XXXXXX.....X...XXXXXXXXXXX....................");
    island[4] =  strdup("................................X..................................");
    island[5] =  strdup("......XXXXXXXXXXXXX.............X..................................");
    island[6] =  strdup("..................X.............XXXXXXXXX..........................");
    island[7] =  strdup("..................X.........XXXXXXXXXXXX...........................");
    island[8] =  strdup("..................X................................................");
    island[9] =  strdup("XX.............................................................XXXX");
    island[10] = strdup("XX..................XXXXXXXXXXXXX.................................X");
    island[11] = strdup("...................................................................");
    island[12] = strdup(".................................................................X.");
    island[13] = strdup(".....................XXXXX.......................................XX");
    island[14] = 0;

    cr_assert(count_island(island) == 9);
}

Test (count_island, second_test)
{
    char *island[1];
    island[0] = 0;
    cr_assert(count_island(island) == 0);
}
