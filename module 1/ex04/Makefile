# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 11:16:01 by msimoes           #+#    #+#              #
#    Updated: 2026/07/02 02:33:09 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed
SRCS = main.cpp
 
RM = rm -f
CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98
 
OBJS = $(SRCS:.cpp=.o)
 
%.o : %.cpp
	@ $(CXX) $(CXX_FLAGS) -c $< -o $@
 
$(NAME): $(OBJS)
	@ $(CXX) $(CXX_FLAGS) $(OBJS) -o $(NAME) && echo "Compiled"
 
all: $(NAME)
 
clean:
	@ $(RM) $(OBJS)
 
fclean: clean
	@ $(RM) $(NAME) && echo "Cleaned"
 
re: fclean all
 
.PHONY: all clean fclean re
 