/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../rush3.h"

Test(rush1, rush1_1)
{
    //5 x 3
    char *square = "o---o\n|   |\no---o\n";
    int *types = detect_witch_square(square, 3, 5);
    rush3(square);
    
    cr_assert(get_heigth_square(square) == 3);
    cr_assert(get_width_square(square) == 5);
    cr_assert(types[0] == 1);
}

Test(rush1, rush1_2)
{
    //5 x 3
    char *square = "/---\\\n|   |\n\\---/\n";
    int *types = detect_witch_square(square, 3, 5);
    rush3(square);

    cr_assert(get_heigth_square(square) == 3);
    cr_assert(get_width_square(square) == 5);
    cr_assert(types[0] == 2);
}
/*
Test(rush1, rush1_3)
{
    //5 x 3 
    char *square = "ABBBA\nB   B\nCBBBC\n";
    int *types = detect_witch_square(square, 3, 5);
    rush3(square);

    cr_assert(get_heigth_square(square) == 3);
    cr_assert(get_width_square(square) == 5);
    cr_assert(types[0] == 3);
}

Test(rush1, rush1_4)
{
    //5 x 3
    char *square = "ABBBC\nB   B\nABBBC\n";
    int *types = detect_witch_square(square, 3, 5);
    rush3(square);

    cr_assert(get_heigth_square(square) == 3);
    cr_assert(get_width_square(square) == 5);
    cr_assert(types[0] == 4);
}

Test(rush1, rush1_5)
{
    //5 x 3
    char *square = "ABBBC\nB   B\nCBBBA\n";
    int *types = detect_witch_square(square, 3, 5);
    rush3(square);

    cr_assert(get_heigth_square(square) == 3);
    cr_assert(get_width_square(square) == 5);
    cr_assert(types[0] == 5);
}
*/
Test(rush1, rush1_1_1)
{
    //1x1                                                                                                                                                                                   
    char *square = "o\n";
    int *types = detect_witch_square(square, 1, 1);
    rush3(square);

    cr_assert(get_heigth_square(square) == 1);
    cr_assert(get_width_square(square) == 1);
    cr_assert(types[0] == 1);
}

Test(rush1, rush1_2_1)
{
    //1x1
    char *square = "*\n";
    int *types = detect_witch_square(square, 1, 1);
    rush3(square);

    cr_assert(get_heigth_square(square) == 1);
    cr_assert(get_width_square(square) == 1);
    cr_assert(types[0] == 2);
}

Test(rush1, rush1_3_1)
{
    //1x1 
    char *square = "B\n";
    int *types = detect_witch_square(square, 1, 1);
    rush3(square);

    cr_assert(get_heigth_square(square) == 1);
    cr_assert(get_width_square(square) == 1);
    cr_assert(types[0] == 3);
    cr_assert(types[1] == 4);
    cr_assert(types[2] == 5);
}
