##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for cat
##

NAME	= grep

CC	= gcc

RM	= rm -f

SRC	= *.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L ../lib/my/ -lmy

TEST_NAME = tests_run

all: 	$(NAME)

$(NAME):
	make -C ../lib/my/
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

tests_run:	clean
		gcc -o $(TEST_NAME) ../tests/test_cat.c --coverage -lcriterion
		./$(TEST_NAME)
