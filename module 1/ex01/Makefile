# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 11:16:01 by msimoes           #+#    #+#              #
#    Updated: 2026/04/28 12:01:58 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp zombieHorde.cpp

RM = rm -f
COMPILER = c++
COMPILER_FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)
 
%.o : %.cpp
	@ $(COMPILER) $(COMPILER_FLAGS) -c $< -o $@
 
$(NAME): $(OBJS)
	@ $(COMPILER) $(COMPILER_FLAGS) $(OBJS) -o $(NAME) && echo "Compiled"
 
all: $(NAME)
 
clean:
	@ $(RM) $(OBJS)
 
fclean: clean
	@ $(RM) $(NAME) && echo "Cleaned"
 
re: fclean all
 
.PHONY: all clean fclean re
 