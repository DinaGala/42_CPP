# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzhuzhle <nzhuzhle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 21:01:22 by nzhuzhle          #+#    #+#              #
#    Updated: 2024/04/28 21:42:18 by nzhuzhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
BLACK = \033[0;39m

NAME = Bureaucrat
CPP = c++
FLAGS = -Wall -Wextra -Werror -MMD -std=c++98 
RM = rm -f

SRC =  main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
PresidentialPardonForm.cpp
F_OBJ = obj/
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))

$(F_OBJ)%.o: %.cpp Makefile
	$(CC) $(FLAGS) -I ./ -c $< -o $@

all: dir $(NAME)

dir:
	@mkdir -p $(F_OBJ)

-include $(DEP)
$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -I ./ $(OBJ) -o $(NAME)
	@echo "$(GREEN)Everything has been compilated.$(BLACK)"

clean:
	$(RM) $(OBJ) $(DEP)
	$(RM) -R obj

fclean: clean
	$(RM) $(NAME)
	@echo "$(YELLOW)Everything has been cleaned.$(BLACK)"

re: fclean all

.PHONY: all clean fclean re dir

