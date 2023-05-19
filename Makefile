# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 02:27:18 by scharuka          #+#    #+#              #
#    Updated: 2023/05/19 18:34:44 by scharuka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER		=	ft_server/ft_server.c

CLIENT		=	ft_client/ft_client.c

LIBFT		=	cd libft && make

LIB			=	libft/libft.a

CLIENT_SRCS = client.c

SEVER_SRCS = server.c

CLIENT_OBJS := $(CLIENT_SRCS:.c=.o)

SERVER_OBJS := $(SEVER_SRCS:.c=.o)

OBJS		=	$(CLIENT_OBJS) \
				$(SERVER_OBJS)

SERVER_NAME	=	server

CLIENT_NAME	=	client

NAME		=	server

all: $(NAME)


$(NAME):lib_comp ft_server ft_client
	#ar -rcs $(NAME) $(OBJS)

lib_comp:
	cd libft && make

ft_server: $(SERVER_OBJS)
	gcc -Wall -Wextra -Werror $(SERVER_OBJS) $(LIB) -o $(SERVER_NAME)

ft_client: $(CLIENT_OBJS)
	gcc -Wall -Wextra -Werror $(CLIENT_OBJS) $(LIB) -o $(CLIENT_NAME)


clean:
	rm -f $(OBJS)
	cd libft && make clean
fclean: clean
	rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	cd libft && make fclean
.c.o:
	gcc -Wall -Wextra -Werror -c -I include $< -o $(<:.c=.o)
re: fclean all
.PHONY:		all	clean	fclean	re

#not yet fininsh
