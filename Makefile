SRCS			=	$(wildcard srcs/*.c)
OBJS			= $(SRCS:.c=.o)

BONUS			= $(wildcard srcs/ft_lst*.c)
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)


clean:
				$(RM) $(OBJS) $(BONUS_OBJS)


fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
