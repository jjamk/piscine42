# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/11 17:13:55 by skang             #+#    #+#              #
#    Updated: 2020/02/11 19:25:03 by skang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -I includes
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o \
	  srcs/ft_strcmp.o
all : $(TARGET)

$(TARGET) : $(OBJS)
		$(CC) $(LDFLAGS) -o $@ $^

.c.o :
		$(CC) $(CFLAGS) -c -o $@ $<

clean :
		rm -f $(OBJS)

fclean : clean 
		rm -f $(TARGET)

re : fclean all
		
