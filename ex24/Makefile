# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 21:06:34 by kacoulib          #+#    #+#              #
#    Updated: 2016/11/07 23:24:24 by kacoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS	= ./includes/
SOURCES =   ./srcs/ft_putchar.c ./srcs/ft_putstr.c

SOURCE	= ./bin/make
FLAGS	= -Wall -Werror -Wextra

all :
	gcc $(FLAGS) -c $(SOURCES) $(HEADER) -I $(NAME)
	 ar rc $(NAME) *.o 
	  ranlib $(NAME)
clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
re : fclean all
