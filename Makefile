NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putunbr.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o : %.c
	${CC} ${FLAGS} -c $< -o $@

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean ${NAME}
	
.PHONY : 
	all re fclean clean 

