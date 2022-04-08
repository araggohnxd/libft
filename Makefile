NAME =	libft.a

SRCS =	ft_atoi.c \
		ft_calloc.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
OBJS =	${SRCS:.c=.o}

BONUS_SRCS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
BONUS_OBJS =	${BONUS_SRCS:.c=.o}

HEAD =	libft.h
CC =	cc -Wall -Wextra -Werror
RM =	rm -f

all:			${NAME}

${NAME}:		${OBJS}
				@ar -rcs ${NAME} ${OBJS}
				@echo [SUCCESS] Library creation done!

${OBJS}:		${SRCS} ${HEAD} Makefile
				@${CC} -I . -c ${SRCS}
				@echo [SUCCESS] Objects creation done!

bonus:			${BONUS_OBJS}
				@ar -rcs ${NAME} ${BONUS_OBJS}
				@echo [BONUS] Bonus library creation done!

${BONUS_OBJS}:	${BONUS_SRCS} ${HEAD} Makefile
				@${CC} -I . -c ${BONUS_SRCS}
				@echo [BONUS] Bonus objects creation done!

clean:
				@${RM} ${OBJS} ${BONUS_OBJS}
				@echo [SUCCESS] Objects removal done!

fclean:			clean
				@${RM} ${NAME}
				@echo [SUCCESS] Library removal done!

re:				fclean all

.PHONY:			all clean fclean re
