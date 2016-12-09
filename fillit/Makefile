# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/05 13:02:37 by afeuerst          #+#    #+#              #
#    Updated: 2016/12/05 13:03:20 by afeuerst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = ft_error.c \
			ft_extract_data.c \
			ft_create_data.c \
			ft_debug_print.c \
			ft_place_object.c \
			ft_type_is.c \
			ft_solve.c \
			ft_check_place.c

OBJECTS = ft_error.o \
			ft_extract_data.o \
			ft_create_data.o \
			ft_debug_print.o \
			ft_place_object.o \
			ft_type_is.o \
			ft_solve.o \
			ft_check_place.o

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
