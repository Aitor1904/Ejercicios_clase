# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     :+:      :+:    :+:    #
#    By: student <student@42.fr>                     +:+  +:+       +:+         #
#                                                 #+#+# Kramer +#+#            #
#    Created: 2026/09/21 20:37:00 by student           #+#    #+#              #
#    Updated: 2026/09/21 20:37:00 by student          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_display_file.c
OBJS	= $(SRCS:.c=.o)

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
