# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 13:22:16 by ajoliet           #+#    #+#              #
#    Updated: 2022/09/12 16:07:29 by ajoliet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS = main.c \
	   parsing.c \
	   utils_lsts.c \
	   ft_utils.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
	$(RM) $(OBJS) $(NAME)
	
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
