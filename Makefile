# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 21:08:37 by yorazaye          #+#    #+#              #
#    Updated: 2019/11/21 17:31:53 by yorazaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_STRUCT = ft_btree_apply_in ft_btree_apply_pr ft_btree_apply_sf\
		 ft_btree_new_node ft_lstadd ft_lstdel ft_lstdelone ft_lstiter\
		 ft_lstmap ft_lstnew
FT_MEM = ft_memalloc ft_memccpy ft_memchr ft_memcmp ft_memcpy ft_memdel\
		 ft_memmove ft_memset ft_bzero
FT_PRINT = ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr\
		   ft_putnbr_fd ft_putstr ft_putstr_fd ft_print_bits
FT_STRING = ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat ft_strlcat\
			ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strcmp ft_strnew\
			ft_strdel ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi\
			ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit\
			ft_strncmp ft_strncat ft_tolower ft_toupper
FT_EXTRA = ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii\
		   ft_isprint ft_itoa get_next_line
FT_PRINTF = ft_printf cspdi dipuxo_av25 ft_base ft_extra ft_ls_do\
			ft_putaddress ft_putdouble ft_putdouble_l fwpl\
			others oufxxl print_struct

STR_LOC = struct_manipulation
MEM_LOC = memory_manipulation
PRINT_LOC = print_manipulation
STRING_LOC = string_manipulation
PRINTF_LOC = ft_printf
EXTRA_LOC = extra_functions

STRUCT_P = $(patsubst %, $(STR_LOC)/%, $(addsuffix .c, $(FT_STRUCT)))
MEM_P = $(patsubst %, $(MEM_LOC)/%, $(addsuffix .c, $(FT_MEM)))
PRINT_P = $(patsubst %, $(PRINT_LOC)/%, $(addsuffix .c, $(FT_PRINT)))
PRINTF_P = $(patsubst %, $(PRINTF_LOC)/%, $(addsuffix .c, $(FT_PRINTF)))
STRING_P = $(patsubst %, $(STRING_LOC)/%, $(addsuffix .c, $(FT_STRING)))
EXTRA_P = $(patsubst %, $(EXTRA_LOC)/%, $(addsuffix .c, $(FT_EXTRA)))

FT_O = $(addsuffix .o, $(FT_STRUCT) $(FT_MEM) $(FT_PRINTF)\
	   $(FT_PRINT) $(FT_STRING) $(FT_EXTRA))
FT_I = includes
FT_A = libft.a
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
ALL_C = $(STRUCT_P) $(MEM_P) $(PRINT_P) $(STRING_P) $(EXTRA_P) $(PRINTF_P)

all: $(NAME)

$(NAME): $(FT_O)
	@echo "Compilation of libft.a library"
	@ar -rc $(NAME) $(FT_O) && ranlib $(NAME)

$(FT_O):
	@echo "Compilation of object files"
	@gcc -c $(ALL_C) -I $(FT_I) $(FLAGS)

clean:
	@echo "Getting rid of object files"
	@rm -f $(FT_O)

fclean: clean
	@echo "Cleaning everything"
	@rm -f $(NAME)

re: fclean all
