NAME = Animals

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

${NAME}: ${OBJS}
				@${CC} ${CPFLAGS} ${OBJS} -o ${NAME}
				@echo "\033[32mCOMPILATION IS FINISHED ✅"
			
all: ${NAME}

clean:
		@rm -f ${OBJS}

fclean: clean
		@rm -f ${NAME}

re:  fclean all

PHONY: all clean fclean re