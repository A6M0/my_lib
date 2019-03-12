##
## EPITECH PROJECT, 2018
## lib
## File description:
## Makefile lib
##

RM			=		rm -f

CC			=		gcc -c

AR			=		ar rc

CFLAGS		=		-W -Werror -Wall -Wextra -g3

SRC			=		my_calloc.c					\
					my_getnbr.c					\
					my_isneg.c					\
					my_put_nbr.c				\
					my_putchar.c				\
					my_putstr.c					\
					my_str_to_word_array.c		\
					my_strcat.c					\
					my_strcpy.c					\
					my_strlen.c					\
					my_strncpy.c				\
					my_swap.c					\
					my_printf.c					\
					format.c					\
					format2.c					\
					my_put_nbr_base.c			\
					my_showstr_base.c			\
					my_strcmp.c					\
					my_array_strcpy.c			\
					my_strncmp.c

OBJ			=		$(SRC:.c=.o)

NAME		=		libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(SRC) $(CFLAGS)
			$(AR) $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
	 		$(RM) $(NAME)

re: 		fclean all
