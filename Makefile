

FUNCTIONS = ft_error.c \
						ft_extract_data.c \
						ft_create_data.c \
						ft_debug_print.c \
						ft_place_object.c \
						ft_type_is.c

OBJECTS = ft_error.o \
						ft_extract_data.o \
						ft_create_data.o \
						ft_debug_print.o \
						ft_place_object.o \
						ft_type_is.o

LIBFT = libft.a

FLAGS = -Wall -Wextra -Werror

NAME = fillit

MAIN = main.c

FILLITLIB = fillit.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FUNCTIONS)
	ar rc $(FILLITLIB) $(OBJECTS)
	gcc $(FILLITLIB) $(LIBFT) $(MAIN) -o $(NAME)

clean:
	rm -rf $(OBJECTS)
	rm -rf $(FILLITLIB)

fclean: clean
	rm -rf fillit

re: fclean all
