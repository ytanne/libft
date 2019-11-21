# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 21:08:37 by yorazaye          #+#    #+#              #
#    Updated: 2019/11/20 22:23:27 by yorazaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN = binary_manipulation
LIST = list_manipulation
PRINT = printing_functions
MEME = memory_manipulation
ALNMB = alphanumber_check
EXTRA = extra_functions
FT_B = ft_btree_apply_in ft_btree_apply_pr ft_btree_apply_sf ft_btree_new_node
FT_L = ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew
FT_P = ft_print_bits ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd\
	   ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd
FT_M = ft_bzero ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy\
	   ft_memdel ft_memmove ft_memset
FT_AN = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint
FT_E = ft_atoi ft_itoa ft_pow get_next_line
FT_O = $(addsuffix .o, $(FT_B) $(FT_L) $(FT_P) $(FT_M) $(FT_AN) $(FT_E))
FT_C = $(patsubst %, $(BIN)/%, $(addsuffix .c, $(FT_B)))\
	   $(patsubst %, $(LIST)/%, $(addsuffix .c, $(FT_L)))\
	   $(patsubst %, $(PRINT)/%, $(addsuffix .c, $(FT_P)))\
	   $(patsubst %, $(MEME)/%, $(addsuffix .c, $(FT_M)))\
	   $(patsubst %, $(ALNMB)/%, $(addsuffix .c, $(FT_AN)))\
	   $(patsubst %, $(EXTRA)/%, $(addsuffix .c, $(FT_E)))
FT_I = includes
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FT_O)
	@ar -rc $(NAME) $(FT_O) && ranlib $(NAME)

$(FT_O):
	@gcc -c $(FT_C) -I $(FT_I) $(FLAGS)

clean:
	rm -f $(FT_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
