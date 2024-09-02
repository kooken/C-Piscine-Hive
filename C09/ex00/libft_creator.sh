# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msazhina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 12:07:24 by msazhina          #+#    #+#              #
#    Updated: 2024/08/21 12:29:01 by msazhina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strcmp.c ft_strlen.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.o
rm *.o
