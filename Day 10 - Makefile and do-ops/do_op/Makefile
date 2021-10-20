##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## do-op
##

NAME = do-op

CC = gcc

RM = rm -f

SRC	= do_op.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L ../lib/my/ -lmy

$(NAME):
	$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
