NAME	= libft.a
SOURCE	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c \
			ft_atoi.c
OBJECT	= $(SOURCE:.c=.o)

FLAGS	= -Wall -Werror -Wextra
INCLUDE	= libft.h

LIB		= ar rcs
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJECT) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECT)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)

re: fclean all