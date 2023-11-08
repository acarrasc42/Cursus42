# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 12:28:06 by acarrasc          #+#    #+#              #
#    Updated: 2023/10/17 16:10:59 by acarrasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = 		ft_isalpha.c 		\
		  		ft_isdigit.c 		\
		  		ft_isalnum.c 		\
		  		ft_isascii.c 		\
		  		ft_isprint.c 		\
		  		ft_strlen.c 		\
		  		ft_memset.c 		\
		  		ft_bzero.c 			\
		  		ft_memcpy.c 		\
		  		ft_memmove.c 		\
		  		ft_strlcpy.c 		\
		  		ft_strlcat.c 		\
		  		ft_toupper.c 		\
		  		ft_tolower.c 		\
		  		ft_strchr.c 		\
		  		ft_strrchr.c		\
		  		ft_strncmp.c 		\
		  		ft_memchr.c 		\
		  		ft_memcmp.c 		\
		  		ft_strnstr.c		\
		  		ft_atoi.c			\
		  		ft_calloc.c 		\
		  		ft_strdup.c			\
		  		ft_substr.c			\
		  		ft_strjoin.c		\
		  		ft_strtrim.c		\
		  		ft_split.c			\
		  		ft_itoa.c			\
		  		ft_strmapi.c		\
		  		ft_striteri.c		\
		  		ft_putchar_fd.c		\
		  		ft_putstr_fd.c		\
		  		ft_putendl_fd.c		\
		  		ft_putnbr_fd.c		\

SOURCES_B = 	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

OBJECTS = $(SOURCES:.c=.o)

OBJECTS_B = $(SOURCES_B:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

bonus: $(OBJECTS) $(OBJECTS_B)
	$(AR) $(NAME) $^

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean: 
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
