NAME = libft.a

SRCS	= ft_isalpha.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_memset.c \
		ft_bzero.c \
		ft_putendl_fd.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_split.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_strmapi.c \




OBJS =	 $(SRCS:%.c=%.o)

FLAGS =	 -Wall -Werror -Wextra

RM = rm -f 

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all