##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for cat
##

NAME	= calc

CC	= gcc

RM	= rm -f

SRC	= *.c convert-base/*.c string/*.c evalexpr/*.c infinit/*.c infinit/infinit-florian/*.c

SRC_TEST = bistromatic.c convert-base/*.c string/*.c evalexpr/*.c ./tests/*.c infinit/*.c infinit/infinit-florian/*.c

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
		gcc -o $(TEST_NAME) $(SRC_TEST) --coverage -lcriterion $(LIBFLAG)
		./$(TEST_NAME)

re: fclean all
