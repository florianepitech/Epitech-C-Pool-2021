/*                                                                                                                                                                                                                   
** EPITECH PROJECT , 2021
** my_print_revalpha.c
** File description :
** No file there , just an epitech header example
*/

int my_putchar(char c);

int my_print_revalpha(void) {
    int start = 122;
    int end = 97;
    for(int i = start; i != (end -1); i--) {
        my_putchar(i);
    }
}
