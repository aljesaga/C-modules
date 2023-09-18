NAME = FF7

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp \
		IMateriaSource.cpp Pyro.cpp Electro.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow -fsanitize=address

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