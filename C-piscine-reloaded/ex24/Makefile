# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     :+:      :+:    :+:    #
#    By: student <student@42.fr>                     +:+  +:+       +:+         #
#                                                 #+#+# Kramer +#+#            #
#    Created: 2026/09/21 20:36:00 by student           #+#    #+#              #
#    Updated: 2026/09/21 20:36:00 by student          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

INC_DIR		= includes
SRC_DIR		= srcs

SRCS		= $(SRC_DIR)/ft_putchar.c \
			  $(SRC_DIR)/ft_putstr.c \
			  $(SRC_DIR)/ft_strcmp.c \
			  $(SRC_DIR)/ft_strlen.c \
			  $(SRC_DIR)/ft_swap.c

OBJS		= $(SRCS:.c=.o)

AR			= ar rcs
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
