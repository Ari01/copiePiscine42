SRCS	= ./srcs/ft_display_file.c ./srcs/file.c
OBJS	= ${SRCS:.c=.o}
NAME	= ft_display_file
VPATH	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I ${VPATH}
RM		= rm -f

all:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

.PHONY:	all clean fclean
