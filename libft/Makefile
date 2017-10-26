#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/22 20:24:48 by dmontoya          #+#    #+#              #
#    Updated: 2017/10/01 22:23:13 by dmontoya         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FUNCTIONS = toupper \
			tolower \
			isprint \
			isascii \
			isdigit \
			isalpha \
			isalnum \
			strcat \
			strncat \
			atoi \
			strncmp \
			strcmp \
			strnstr \
			strstr \
			strcpy \
			strlen \
			strcpy \
			strncpy \
			strdup \
			strchr \
			strrchr \
			memset \
			bzero \
			memcpy \
			memccpy \
			putchar \
			putstr \
			strnew \
			strclr \
			striter \
			striteri \
			strmap \
			strmapi \
			strequ \
			strnequ \
			strjoin \
			strtrim \
			strsub \
			putendl \
			putnbr \
			itoa \
			memchr \
			memcmp \
			strdel \
			putchar_fd \
			putstr_fd \
			putendl_fd \
			putnbr_fd \
			strsplit \
			memalloc \
			memdel \
			strlcat \
			memmove \
			lstnew \
			lstdelone \
			lstdel	\
			lstadd \
			lstiter \
			lstmap \
			intlen

ADD_FT = $(addprefix ft_, $(FUNCTIONS))
C_FILES = $(addsuffix .c, $(ADD_FT))
OBJ_FILES = $(addsuffix .o, $(ADD_FT))

CC = gcc
FLAGS = -Wall -Wextra -Werror
INCL = ./includes/

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(C_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

clean:
	rm -f $(OBJ_FILES)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re: fclean all

