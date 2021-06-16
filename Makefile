# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 12:03:05 by ysonmez           #+#    #+#              #
#    Updated: 2021/06/16 10:04:09 by ysonmez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		ft_isprint.c ft_toupper.c ft_tolower.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror

AR		=		ar rc

RM		=		rm -f

.c.o:
			$(CC) $(CFLAGS) -I includes -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

all:		$(NAME)

re:			fclean all
