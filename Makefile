NAME =	libft.a
FLAGS =	-Wall -Wextra -Werror
CC = 	gcc
ODIR =	bin/
IDIR = 
SRC =ft_atoi.c \
    ft_isdigit.c \
  	ft_memalloc.c \
  	ft_memmove.c \
    ft_putnbr.c \
    ft_strchr.c \
  	ft_strequ.c \
    ft_strmap.c \
   	ft_strnew.c \
    ft_strtrim.c \
	ft_bzero.c \
    ft_islower.c \
  	ft_memccpy.c \
   	ft_memset.c \
    ft_putnbr_fd.c \
  	ft_strclr.c \
  	ft_striter.c \
   	ft_strmapi.c \
  	ft_strnstr.c \
   	ft_substr.c \
	ft_count_word.c \
  	ft_isprint.c \
  	ft_memchr.c \
    ft_putchar.c \
    ft_putstr.c \
    ft_strcmp.c \
  	ft_striteri.c \
  	ft_strncat.c \
  	ft_strrchr.c \
   	ft_tolower.c \
	ft_isalnum.c \
    ft_isspace.c \
  	ft_memcmp.c \
    ft_putchar_fd.c \
  	ft_putstr_fd.c \
  	ft_strcpy.c \
  	ft_strjoin.c \
   	ft_strncmp.c \
  	ft_strsplit.c \
  	ft_toupper.c \
	ft_isalpha.c \
    ft_isupper.c \
  	ft_memcpy.c \
    ft_putendl.c \
    ft_realloc.c \
    ft_strdel.c \
  	ft_strlcat.c \
   	ft_strncpy.c \
  	ft_strstr.c \
	ft_isascii.c \
    ft_itoa.c \
    ft_memdel.c \
    ft_putendl_fd.c \
  	ft_strcat.c \
    ft_strdup.c \
  	ft_strlen.c \
    ft_strnequ.c \
  	ft_strsub.c \
	ft_strlcpy.c \


OBJ = $(addprefix $(ODIR), $(SRC:.c=.o))

EXT = $(IDIR)$(NAME:.a=.h)
EXT += Makefile

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(ODIR)%.o: %.c $(EXT)
	@mkdir -p $(ODIR)
	@echo "-> Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "-> Cleaning libft object files..."
	@rm -f $(ODIR)*.o

fclean: clean
	@echo "-> Cleaning $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
