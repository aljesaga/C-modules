# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 09:05:32 by alsanche          #+#    #+#              #
#    Updated: 2023/09/19 11:01:21 by alsanche         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = Animals

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CPFLAGS = -Wall -Wextra -Werror -std=c++98

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