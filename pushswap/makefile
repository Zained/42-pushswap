#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdriay <mdriay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/17 15:48:58 by mdriay            #+#    #+#              #
#    Updated: 2015/04/18 19:03:44 by mdriay           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

MKEX = gcc -Wall -Wextra -Werror -o
SRC = main.c \
	ft_list.c \
	ft_handle.c \
	ft_action.c \
	ft_display.c \
	ft_check.c \
	ft_sort.c

FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
COMP = gcc -c
NAME = push_swap

all : $(NAME)

$(NAME) : $(OBJECT)
	@$(MKEX) $(NAME) $(OBJECT) -L libft/ -lft
	@echo "\033[32mProgram OK\033[0m"

$(OBJECT) :
	@make -C libft/
	@$(COMP) $(SRC) $(FLAGS) -I libft/

clean :
	@make clean -C libft/
	@/bin/rm -f $(OBJECT)


fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all