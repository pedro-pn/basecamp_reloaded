DIRECS 	= ./srcs/

DIRECH	= ./includes/

SRCS	= ${DIRECS}ft_putchar.c

SRCS	+= ${DIRECS}ft_putstr.c

SRCS	+= ${DIRECS}ft_strcmp.c

SRCS	+= ${DIRECS}ft_strlen.c

SRCS	+= ${DIRECS}ft_swap.c

HDRS	= ${DIRECH}ft.h

FILES	= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all:	OBJS
		ar rc ${TARGET} ${FILES}

OBJS:	${HDRS}
	gcc -Wall -Wextra -Werror -c ${SRCS}

TARGET	= libft.a


clean:
		rm -f ${FILES}

fclean:	clean
		rm -f ${TARGET}

re:	fclean all
	

.PHONY: all clean fclean re