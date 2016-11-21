# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumiguel <jumiguel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 15:37:32 by jumiguel          #+#    #+#              #
#    Updated: 2016/11/20 18:09:31 by jumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ./src/fillit.c\
	  ./src/solve.c\
	  ./src/tetrovalid.c\
	  ./src/line.c\
	  ./src/get_map.c\
	  ./src/ft_error.c

OBJ = $(SRC:.c:.o)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
	@/bin/echo "-----Compilating sources-----"
	@make -C ./libft
	@/bin/echo "---Done---"
	@/bin/echo "-----Creating executable-----"
	@gcc $(FLAGS) -o $(NAME) $(SRC) -I./libft/includes/ ./libft/libft.a
	@/bin/echo "---Done---"

clean:
	@/bin/echo "-----Cleaning-----"
	@/bin/rm -f $(OBJ)
	@make clean -C ./libft

fclean:
	@/bin/echo "-----Fcleaning-----"
	@/bin/rm -f $(NAME)
	@make fclean -C ./libft

re: fclean all

.PHONY : clean fclean re all
