/*
** EPITECH PROJECT, 2021
** types_char.c
** File description:
** types_char.c
*/

/*
 *  return 0 : [a-z]
 *  return 1 : [A-Z]
 *  return 2 : [0-9]
 */

int types_char(char c)
{
    if (c > 64 && c < 91)
        return (1);
    if (c > 96 && c < 123)
        return (0);
    if (c > 47 && c < 58)
        return (2);
    return -1;
}