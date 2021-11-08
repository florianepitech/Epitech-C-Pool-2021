##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile created for day 10 c pool
##

SRC = $(shell find . -type f -name '*.c')

OBJ = $(SRC:.c=.o)

NAME_LIB = libmy.a

NAME_HEADER = my.h

all: $(NAME_LIB)

$(NAME_LIB): $(OBJ)
	gcc -c $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	cp $(NAME_LIB) ../$(NAME_LIB)
	cp $(NAME_HEADER) ../../include/$(NAME_HEADER)
	make clean

clean : $(shell rm -f $(OBJ))