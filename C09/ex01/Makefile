# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msazhina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 12:31:12 by msazhina          #+#    #+#              #
#    Updated: 2024/08/21 17:08:24 by msazhina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = libft.a
SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
HEADER = includes/ft.h
FLAGS = -Wall -Wextra -Werror

all:	$(FILE)

$(FILE):
	cc $(FLAGS) -I $(HEADER) -c $(SOURCES)
	ar -rv $(FILE) $(OBJECTS)
	ranlib $(FILE)

clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(FILE)

re: fclean all
