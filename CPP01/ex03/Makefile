# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 15:39:51 by artvan-d          #+#    #+#              #
#    Updated: 2023/09/10 19:10:56 by artvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp 

OBJS = 	${SRCS:%.cpp=%.o}

NAME = 	violence

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

