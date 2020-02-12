NAME	 = libft.a

OBJS 	= ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

SRCS 	= ft_isalpha.c \
	   ft_strlen.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_bzero.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putstr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

SRCS_BONUS	= ${SRCS} \
			  ft_lstnew_bonus.c \
			  ft_lstadd_front_bonus.c \
			  ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c \
			  ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c \
			  ft_lstmap_bonus.c


RM 			= rm -f
CC 			= gcc

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -I includes -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

bonus:		${OBJS_BONUS}
			ar rc ${NAME} ${OBJS_BONUS}
clean:
			${RM} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
