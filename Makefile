##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

RM		=		rm -f

CC		=		gcc

CFLAGS	=		-W -Werror -Wall -Wextra -g -o

WFLAGS	=		-lcsfml-system -lcsfml-window -lcsfml-graphics -lm

LIB		=		-I./include/ -L./lib/ -lmy

SRC		=		main.c			\


OBJ		=		$(SRC:.c=.o)

NAME	=		lib

all:		$(NAME)

$(NAME):	$(SRC)
			make -C ./lib
			$(CC) $(CFLAGS) $(NAME) $(SRC) $(LIB)

clean:
			$(RM) $(OBJ)
			make clean -C ./lib

fclean:		clean
			$(RM) $(NAME)
			make fclean -C ./lib

re:			fclean all
			make re -C ./lib
