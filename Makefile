# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/25 15:01:56 by lucsanta          #+#    #+#              #
#    Updated: 2026/11/27 23:07:54 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

INCLUDES = -I. -I$(LIBFT_DIR) -I$(PRINTF_DIR)

SRC_DIR = src
SRCS = $(SRC_DIR)/main.c \
	   $(SRC_DIR)/parsing.c \
	   $(SRC_DIR)/stack.c \
	   $(SRC_DIR)/input.c \
	   $(SRC_DIR)/flags.c \
	   $(SRC_DIR)/ops.c \
	   $(SRC_DIR)/swap.c \
	   $(SRC_DIR)/push.c \
	   $(SRC_DIR)/rotate.c \
	   $(SRC_DIR)/reverse_rotate.c \
	   $(SRC_DIR)/sort_small.c \
	   $(SRC_DIR)/sort_simple.c \
	   $(SRC_DIR)/sort_complex.c \
	   $(SRC_DIR)/sort_utils.c \
	   $(SRC_DIR)/normalize.c \
	   $(SRC_DIR)/sort_medium.c 

OBJS = $(SRCS:.c=.o)

all:
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(PRINTF_DIR)
	$(MAKE) $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re