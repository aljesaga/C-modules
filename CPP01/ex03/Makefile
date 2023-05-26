# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 17:38:38 by alsanche          #+#    #+#              #
#    Updated: 2023/05/26 17:38:39 by alsanche         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = Humans

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = ${SRCS:.cpp=.o}

CC = clang++

CPFLAGS = -Wall -Wextra -Werror -std=c++98 ##-fsanitize=address

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