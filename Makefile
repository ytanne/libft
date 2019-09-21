# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 21:08:37 by yorazaye          #+#    #+#              #
#    Updated: 2019/09/20 14:10:38 by yorazaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_C = src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memmove.c src/ft_memcmp.c\
	   src/ft_strlen.c src/ft_strdup.c src/ft_strcpy.c src/ft_strncpy.c src/ft_strcat.c\
	   src/ft_memccpy.c src/ft_strlcat.c src/ft_memchr.c src/ft_strchr.c src/ft_strrchr.c\
	   src/ft_strstr.c src/ft_strnstr.c src/ft_strcmp.c src/ft_strncmp.c src/ft_atoi.c\
	   src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c\
	   src/ft_toupper.c src/ft_tolower.c src/ft_memalloc.c src/ft_memdel.c src/ft_strnew.c\
	   src/ft_strdel.c src/ft_strclr.c src/ft_striter.c src/ft_striteri.c src/ft_strmap.c\
	   src/ft_strmapi.c src/ft_strequ.c src/ft_strnequ.c src/ft_strsub.c src/ft_strjoin.c\
	   src/ft_strtrim.c src/ft_strsplit.c
FT_I = includes
FT_A = libft.a
FT_O = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memcmp.o\
	   ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o\
	   ft_memccpy.o ft_strlcat.o ft_strchr.o ft_memchr.o ft_strrchr.o\
	   ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o\
	   ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o\
	   ft_toupper.o ft_tolower.o ft_memalloc.o ft_memdel.o ft_strnew.o\
	   ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o\
	   ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o\
	   ft_strtrim.o ft_strsplit.o
NAME = test
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): compile
	@ar -rc $(FT_A) $(FT_O)
	@gcc -o $(NAME) $(NAME).c -L. -lft -I $(FT_I) $(FLAGS)

compile:
	@gcc -c $(FT_C) -I $(FT_I) $(FLAGS)

clean:
	@rm -f $(FT_O) $(FT_A)

fclean: clean
	@rm -f $(NAME)

re: fclean all
