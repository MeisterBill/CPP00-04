# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 20:26:47 by artvan-d          #+#    #+#              #
#    Updated: 2023/09/07 20:32:48 by artvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	Contact.cpp	\
		main.cpp \
		PhoneBook.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME = 	phonebook

CC 	= 	c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@ -I.

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	 rm -rf ${OBJS}

fclean: clean
	 ${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re