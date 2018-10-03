NAME = do-op

SRC = main.c $(wildcard ./srcs/*.c)
FLAGS =  -Wall -Wextra -Werror -o $(NAME) 
HEADERS = $(wildcard ./includes/*.h)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)  -I $(HEADERS)

clean:
	/bin/rm -f $(NAME) 

#fclean: clean
#	/bin/rm -f $(NAME)

# re: fclean all

.PHONY: all
