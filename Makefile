# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 13:22:16 by ajoliet           #+#    #+#              #
#    Updated: 2022/09/26 13:33:51 by ajoliet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = main.c \
	   parsing.c \
	   utils_lsts.c \
	   ft_utils.c \
	   ft_split.c \
	   ft_sort_utils.c \
	   sort.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
	$(RM) $(OBJS) $(NAME)
	
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
