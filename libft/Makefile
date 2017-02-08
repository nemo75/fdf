# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 06:54:25 by thbricqu          #+#    #+#              #
#    Updated: 2016/11/04 06:54:26 by thbricqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_C = ./
SRC = 	$(SRC_C)ft_putchar.c \
		$(SRC_C)ft_putstr.c \
		$(SRC_C)ft_putnbr.c \
		$(SRC_C)ft_atoi.c \
		$(SRC_C)ft_strlen.c \
		$(SRC_C)ft_swap.c \
		$(SRC_C)ft_strcmp.c \
		$(SRC_C)ft_strdup.c \
		$(SRC_C)ft_isalnum.c \
		$(SRC_C)ft_isalpha.c \
		$(SRC_C)ft_isascii.c \
		$(SRC_C)ft_isdigit.c \
		$(SRC_C)ft_isprint.c \
		$(SRC_C)ft_strcpy.c \
		$(SRC_C)ft_strncpy.c \
		$(SRC_C)ft_strncmp.c \
		$(SRC_C)ft_strcat.c \
		$(SRC_C)ft_toupper.c \
		$(SRC_C)ft_tolower.c \
		$(SRC_C)ft_strncat.c \
		$(SRC_C)ft_strchr.c \
		$(SRC_C)ft_strrchr.c \
		$(SRC_C)ft_memset.c \
		$(SRC_C)ft_bzero.c \
		$(SRC_C)ft_memcpy.c \
		$(SRC_C)ft_strlcat.c \
		$(SRC_C)ft_strncat.c \
		$(SRC_C)ft_memccpy.c \
		$(SRC_C)ft_memmove.c \
		$(SRC_C)ft_memchr.c \
		$(SRC_C)ft_memcmp.c \
		$(SRC_C)ft_strstr.c \
		$(SRC_C)ft_strnstr.c \
		$(SRC_C)ft_putendl.c \
		$(SRC_C)ft_putchar_fd.c \
		$(SRC_C)ft_putstr_fd.c \
		$(SRC_C)ft_putnbr_fd.c \
		$(SRC_C)ft_itoa.c \
		$(SRC_C)ft_putendl_fd.c \
		$(SRC_C)ft_memalloc.c \
		$(SRC_C)ft_memdel.c \
		$(SRC_C)ft_strnew.c \
		$(SRC_C)ft_strdel.c \
		$(SRC_C)ft_strclr.c \
		$(SRC_C)ft_striter.c \
		$(SRC_C)ft_striteri.c \
		$(SRC_C)ft_strmap.c \
		$(SRC_C)ft_strmapi.c\
		$(SRC_C)ft_strequ.c \
		$(SRC_C)ft_strnequ.c \
		$(SRC_C)ft_strsub.c \
		$(SRC_C)ft_strjoin.c \
		$(SRC_C)ft_strtrim.c \
		$(SRC_C)ft_strsplit.c \
		$(SRC_C)ft_countwordsbychar.c \
		$(SRC_C)ft_lstnew.c \
		$(SRC_C)ft_lstdelone.c \
		$(SRC_C)ft_lstdel.c \
		$(SRC_C)ft_lstiter.c \
		$(SRC_C)ft_lstadd.c \
		$(SRC_C)ft_lstmap.c \
		$(SRC_C)ft_countletters.c \
		$(SRC_C)ft_strlenint.c \
		$(SRC_C)ft_lstcount.c \
		$(SRC_C)ft_lstpushback.c \
		$(SRC_C)ft_iswhite.c \
		$(SRC_C)get_next_line.c


FLAG = -Wall -Werror -Wextra
HEADERS = ./includes/
OBJ =	ft_putchar.o \
		ft_putstr.o \
		ft_atoi.o \
		ft_putnbr.o \
		ft_strlen.o \
		ft_swap.o \
		ft_strcmp.o \
		ft_strdup.o \
		ft_isprint.o \
		ft_isdigit.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isalnum.o \
		ft_strncmp.o \
		ft_strcpy.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strcat.o \
		ft_strncat.o \
		ft_toupper.o \
		ft_tolower.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_bzero.o \
		ft_memset.o \
		ft_memcpy.o \
		ft_strlcat.o \
		ft_memccpy.o \
		ft_memmove.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_strstr.o \
		ft_strnstr.o \
		ft_putendl.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_putnbr_fd.o \
		ft_itoa.o \
		ft_putendl_fd.o \
		ft_memalloc.o \
		ft_strnew.o \
		ft_memdel.o \
		ft_strdel.o \
		ft_strclr.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strequ.o \
		ft_strnequ.o \
		ft_strsub.o \
		ft_strjoin.o \
		ft_strtrim.o \
		ft_strsplit.o \
		ft_countwordsbychar.o \
		ft_lstnew.o \
		ft_lstdelone.o \
		ft_lstdel.o \
		ft_strncat.o \
		ft_lstiter.o \
		ft_lstadd.o \
		ft_lstmap.o \
		ft_strlenint.o \
		ft_countletters.o \
		ft_lstcount.o \
		ft_lstpushback.o \
		ft_iswhite.o \
		get_next_line.o

OPTIONS = -c -I $(HEADERS)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re