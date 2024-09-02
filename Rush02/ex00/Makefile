CC = cc
NAME = rush-02
SRC = main.c check_numbers.c
OBJ = $(SRC:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra

#

.PHONY: all clean fclean re

#

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(SFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(SFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
