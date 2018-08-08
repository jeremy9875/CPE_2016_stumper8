##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_stumper8
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Wed Jun  7 14:13:55 2017 jeremy elkaim
## Last update Wed Jun  7 17:08:06 2017 Filliat Etienne
##

CC	= gcc

NAME	= hangman

CFLAGS	+= -W -Wall
CFLAGS	+= -I include/

SRC	=	src/main.c			\
		src/get_one_word.c		\
		src/get_word.c			\
		src/my_putstr.c			\
		src/my_strcpy.c			\
		src/gameloop.c			\
		src/complementary_loop.c	\
		src/str/my_getnbr.c		\
		src/str/my_putnbr.c		\
		src/str/my_putchar.c

RM	= rm -rf

TMP	= $(SRC:.c=.c~)

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(TMP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
