NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c \
	ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_tolower.c \
	ft_toupper.c

OBJS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Linked"

%.o:%.c
	@$(CC) $(CFLAGS) -c $(SOURCES)
	@echo "Compiled"

clean:
	@$(RM) $(OBJS)
	@echo "OBJS deleted" 

fclean: clean
	@$(RM) $(NAME)
	@echo "Outputfile deleted" 

re: fclean all
