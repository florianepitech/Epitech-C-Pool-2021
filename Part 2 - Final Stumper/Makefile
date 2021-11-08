##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for cat
##

NAME	= rush3

CC	= gcc

RM	= rm -f

SRC	= *.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L./lib/my/ -lmy

TEST_NAME = test_$(NAME)

all: $(NAME)

$(NAME):	fclean
			$(CC) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

tests_run: 	fclean
		gcc -o $(TEST_NAME) my_putchar.c detect_square.c my_putstr.c my_put_nbr.c rush3.c ./tests/*.c --coverage -lcriterion
		./$(TEST_NAME)

re: fclean all
