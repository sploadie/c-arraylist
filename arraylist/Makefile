# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgauvrit <tgauvrit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 10:54:05 by tgauvrit          #+#    #+#              #
#    Updated: 2014/11/24 18:39:05 by tgauvrit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			$(AL_LIB)

AL_LIB_NAME =	arylst

AL_LIB =		lib$(AL_LIB_NAME).a

CC =			gcc

FLAGS =			-Wall -Werror -Wextra

PREREQ =		libft.a

HEADERS =		-I ./ -I ./../

AL_SRC_DIR =	./

AL_COMPILED =	arraylist.o \
				x_arraylist_size.o \
				x_arraylist_resize.o \
				x_arraylist_push.o \
				x_arraylist_shift.o \
				arlst_iter.o \
				x_arlst_iter_pop.o \
				x_arlst_iter_pip.o

COMPILED =		$(AL_COMPILED)

all: $(AL_LIB)

$(AL_LIB): $(PREREQ) $(AL_COMPILED)
	ar rc $(AL_LIB) $(AL_COMPILED)

$(AL_COMPILED): %.o: $(AL_SRC_DIR)%.c
	$(CC) -c $(FLAGS) $(HEADERS) $< -o $@

libft.a:
	@echo "WARNING : libft.a command not specified (libft.a assumed pre-built)"

clean:
	-/bin/rm -f $(COMPILED)

fclean: clean
	-/bin/rm -f $(AL_LIB)

re: fclean all
