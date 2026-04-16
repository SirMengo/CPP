# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 11:16:01 by msimoes           #+#    #+#              #
#    Updated: 2026/04/16 03:55:39 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
SRCS = main.cpp
 
RM = rm -f
CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
 
OBJS = $(SRCS:.cpp=.o)
 
%.o : %.cpp
	@ $(CC) $(CC_FLAGS) -c $< -o $@
 
$(NAME): $(OBJS)
	@ $(CC) $(CC_FLAGS) $(OBJS) -o $(NAME) && echo "Compiled"
 
all: $(NAME)
 
clean:
	@ $(RM) $(OBJS)
 
fclean: clean
	@ $(RM) $(NAME) && echo "Cleaned"
 
re: fclean all
 
.PHONY: all clean fclean re
 