# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-sch <rvan-sch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/23 18:04:22 by rvan-sch          #+#    #+#              #
#    Updated: 2021/04/16 18:18:25 by rvan-sch      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS=-Wall -Wextra -Werror

HFILES=-I get_next_line/

CFILES = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_dec_length.c \
	ft_hex_length.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_line_length.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strjoin_freefirst.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_lstadd_back_bonus.c \
	ft_lstnew_bonus.c \
	get_next_line/get_next_line.c \
	ft_atol.c \
	ft_string_isdigits.c

TEMP1=$(CFILES:get_next_line/%=%)
OFILES=$(TEMP1:.c=.o)

all: $(NAME)

$(NAME):
	@echo "[+] libft: compiling sources ..."
	@gcc $(FLAGS) -c $(CFILES) $(HFILES)
	@echo "[+] libft: generating $(NAME)"
	@ar rcs $(NAME) $(OFILES)

clean:
	@echo "[-] libft: cleaning extra files ..."
	@rm -f $(OFILES)
	@rm -f *~
	@rm -f \#*#

fclean: clean
	@echo "[-] libft: removing $(NAME) ..."
	@rm -f $(NAME)

re: fclean all
