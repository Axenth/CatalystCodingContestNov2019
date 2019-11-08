# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <jlensing@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/08 15:33:26 by jlensing       #+#    #+#                 #
#    Updated: 2019/11/08 17:43:08 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = fileinput.c fileoutput.c main.c map_to_arr.c ft_split.c 

GCC = gcc $(SRC) 

all:
	$(GCC)

clean:
	rm -f a.out

fclean: clean
	rm -f *.out

re: fclean all