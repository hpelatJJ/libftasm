# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpelat <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/19 18:40:23 by hpelat            #+#    #+#              #
#    Updated: 2016/11/28 17:35:39 by hpelat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean name re

NAME = libasm.a

SPATH = srcs/

OPATH = objs/

SRCS = ft_bzero.s \
	   ft_cat.s \
	   ft_isalnum.s \
	   ft_isalpha.s \
	   ft_isascii.s \
	   ft_isdigit.s \
	   ft_islower.s \
	   ft_isprint.s \
	   ft_isupper.s \
	   ft_memchr.s \
	   ft_memcpy.s \
	   ft_memset.s \
	   ft_puts.s \
	   ft_strcat.s \
	   ft_strcmp.s \
	   ft_strdup.s \
	   ft_strlen.s \
	   ft_strncmp.s \
	   ft_tolower.s \
	   ft_toupper.s
	   

OBJS = $(SRCS:.s=.o)

S_P = $(addprefix $(SPATH), $(SRCS))

O_P = $(addprefix $(OPATH), $(OBJS))

all: DIR $(NAME)

DIR:
	mkdir -p $(OPATH)

$(NAME): $(O_P)
	ar rc $(NAME) $(O_P)
	ranlib $(NAME)
	gcc -Wall -Wextra -Werror test/main.c $(NAME)

$(OPATH)%.o: $(SPATH)%.s
	nasm -f macho64 $< -o $@

clean:
	/bin/rm -rf $(OPATH)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
