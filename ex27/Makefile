OBJS	= ft_display_file.c

TARGET	= ft_display_file

FILES	= ${OBJS:.c=.o}

all:	${FILES}
	gcc -Werror -Wall -Wextra ${FILES} -o ${TARGET}

clean: 
		rm -f ${FILES}


fclean: clean
		rm -f ${TARGET}

re:	fclean all