##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for cat
##

NAME	= eval_expr

CC	= gcc

RM	= rm -f

SRC	= *.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L./lib/my/ -lmy

TEST_NAME = test_$(NAME)

all: $(NAME)

$(NAME):	fclean
			make -C ./lib/my
			$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

tests_run: 	fclean
		make -C ./lib/my
		gcc -o $(TEST_NAME) priority.c string.c operator.c bootstrap.c calcul.c ./tests/*.c --coverage -lcriterion $(LIBFLAG)
		./$(TEST_NAME)

re: fclean all