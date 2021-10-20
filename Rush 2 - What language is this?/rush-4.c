/*
** EPITECH PROJECT, 2021
** rush-4.c
** File description:
** rush-4
*/

#include "include/my.h"
#include "include/frequencies.h"

#define LANGUAGES 4

int my_put_float(float in, int coma);

/*
 *     LETTER
 */

int is_same_letter(char c1, char c2)
{
    if (c1 >= 'A' && c1 <= 'Z')
        c1 += 32;
    if (c2 >= 'A' && c2 <= 'Z')
        c2 += 32;
    if (c1 == c2)
        return 1;
    return 0;
}

char to_lower(char *c1)
{
    if (c1 >= 'A' && c1 <= 'Z')
        c1 += 32;
}

/*
 *    COUNT / TOTAL
 */
int total_letter(char *str)
{
    int len = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            len++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            len++;
        }
    }
    return len;
}

int count_letter(char *str, char c)
{
    int count = 0;
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_same_letter(str[i], c) == 1) {
            count++;
        }
    }
    return (count);
}

float count_percentage(char *str, char c)
{
    int len = total_letter(str);
    int count = count_letter(str, c);
    return ((float)count / (float)len) * 100;
}

/*
 *      LANGUAGE
 */

void detect_language(char *str)
{
    float counter[LANGUAGES] = {0, 0, 0, 0};
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < LANGUAGES; j++) {
            float difference = count_percentage(str, i + 'a') - alphabet[i][j];
            if (difference < 0) {
                difference *= -1;
            }
            counter[j] += difference;
        }
    }
    int index_language = 0;
    for (int i = 1; i < LANGUAGES; i++) {
        if (counter[index_language] > counter[i])
            index_language = i;
    }
    if (index_language == 0) {
        my_putstr("=> English\n");
    } else if (index_language == 1) {
        my_putstr("=> French\n");
    } else if (index_language == 2) {
        my_putstr("=> German\n");
    } else if (index_language == 3) {
        my_putstr("=> Spanish\n");
    } else {
        my_putstr("Unknown\n");
    }
}

/*
 *     MAIN / RUSH 4
 */

void rush_4(int argc, char **argv)
{
    for (int i = 2; i < argc; i++) {
        //print letter pecentage and count
        int count = count_letter(argv[1], argv[i][0]);
        float percentage = count_percentage(argv[1], argv[i][0]);
        my_putchar(argv[i][0]);
        my_putchar(':');
        my_put_nbr(count);
        my_putstr(" (");
        my_put_float(percentage, 2);
        my_putstr("%)\n");
    }
    detect_language(argv[1]);
}

int main(int argc, int argv[])
{
    if (argc > 1) {
        rush_4(argc, argv);
    }
    return (0);
}
