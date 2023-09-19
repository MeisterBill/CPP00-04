SRCS = 	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME = 	fragtrap

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
