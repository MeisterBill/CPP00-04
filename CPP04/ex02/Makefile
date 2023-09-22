SRCS = 	main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME = 	animal02

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
