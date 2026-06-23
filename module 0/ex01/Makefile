# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 11:16:01 by msimoes           #+#    #+#              #
#    Updated: 2026/04/20 10:22:33 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS = main.cpp PhoneBook.cpp Contact.cpp
 
RM = rm -f
COMPILER = c++
COMP_FLAGS = -Wall -Wextra -Werror -std=c++98
 
OBJS = $(SRCS:.cpp=.o)
 
%.o : %.cpp
	@ $(COMPILER) $(COMP_FLAGS) -c $< -o $@
 
$(NAME): $(OBJS)
	@ $(COMPILER) $(COMP_FLAGS) $(OBJS) -o $(NAME) && echo "Compiled"
 
all: $(NAME)
 
clean:
	@ $(RM) $(OBJS)
 
fclean: clean
	@ $(RM) $(NAME) && echo "Cleaned"
 
re: fclean all
 
.PHONY: all clean fclean re
 