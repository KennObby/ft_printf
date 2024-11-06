SRCS = ft_printf.c	\
	   ft_putchar.c		\
	   ft_putstr.c		\
	   ft_putptr.c		\
	   ft_putnbr.c		\
	   ft_putunbr.c		\
	   ft_puthex_lower.c	\
	   ft_puthex_upper.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

AR = ar rcs

CC 			= cc
RM 			= rm -f
CFLAGS 		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm: norminette *

.PHONY: all clean fclean re norm
