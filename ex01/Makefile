# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 12:34:41 by khanhayf          #+#    #+#              #
#    Updated: 2024/02/10 15:46:45 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = Bureaucrat.hpp Form.hpp
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = main.o Bureaucrat.o Form.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
	
re : fclean all