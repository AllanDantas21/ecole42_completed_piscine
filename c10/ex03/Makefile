NAME = ft_display_file
SRC =	src/display_file.c src/main.c
OBJ = ${SRC:.c=.o}
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM = rm -rf

all:	$(NAME) 

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean : 
		${RM} ${OBJ}


fclean : clean
		${RM} $(NAME)
		${RM} $(LIBFT)

re: fclean all

.PHONY:		all clean fclean re