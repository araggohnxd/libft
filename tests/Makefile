EXECUTE				:= ./a.out

HEADER_PATH			:= ./includes
HEADER_FILES		:= tests.h

UNITY_PATH			:= ./unity
UNITY				:= unity.c

SOURCE_PATH			:= ./sources ./unity
SOURCE_FILES		:= $(shell ls $(SOURCE_PATH) | grep .c$)

OBJECT_PATH			:= ./objects
OBJECT_FILES		:= $(SOURCE_FILES:%.c=$(OBJECT_PATH)/%.o)

LIBFT_PATH			:= ..
LIBFT				:= $(LIBFT_PATH)/libft.a

CC					:= cc
CFLAGS				:= -Wall -Wextra -g3
IFLAGS				:= -I $(HEADER_PATH)
IFLAGS				+= -I $(UNITY_PATH)
IFLAGS				+= -I $(LIBFT_PATH)/includes
LDFLAGS				:= -L $(LIBFT_PATH) -lft
VALGRIND			:= valgrind
VGFLAGS				:= --leak-check=full --show-leak-kinds=all
REMOVE				:= rm -rf

vpath				%.c $(SOURCE_PATH)
vpath				%.h $(HEADER_PATH)

all:				test

test:				$(LIBFT) $(OBJECT_FILES)
					$(CC) $(CFLAGS) $(OBJECT_FILES) $(LDFLAGS)
					$(EXECUTE)

vg:					$(LIBFT) $(OBJECT_FILES)
					$(CC) $(CFLAGS) $(OBJECT_FILES) $(LDFLAGS)
					$(VALGRIND) $(VGFLAGS) $(EXECUTE)

$(OBJECT_PATH)/%.o:	%.c $(HEADER_FILES) Makefile | $(OBJECT_PATH)
					$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJECT_PATH):
					mkdir -p $@

clean:
					$(REMOVE) $(OBJECT_PATH)

fclean:				clean
					$(REMOVE) a.out

re:					fclean all

.PHONY:				all clean fclean re test vg
