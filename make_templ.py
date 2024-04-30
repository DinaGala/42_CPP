import os
import sys

# Define the Makefile template
make_template = '''
RED = \\033[1;31m
GREEN = \\033[1;32m
YELLOW = \\033[1;33m
BLUE = \\033[1;34m
BLACK = \\033[0;39m

NAME = {exec_name}
CPP = c++
FLAGS = -Wall -Wextra -Werror -MMD -std=c++98 
RM = rm -f

SRC =  main.cpp {file_name}.cpp
F_OBJ = obj/
OBJ = $(addprefix $(F_OBJ), $(SRC:.cpp=.o))
DEP = $(addprefix $(F_OBJ), $(SRC:.cpp=.d))

$(F_OBJ)%.o: %.cpp Makefile
	$(CPP) $(FLAGS) -I ./ -c $< -o $@

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

'''


def generate_files(exec_name, file_name, folder):
    # Create the folder if it doesn't exist
    if not os.path.exists(folder):
        os.makedirs(folder)
    
    # Generate the implementation content
    make_content = make_template.format(
       exec_name=exec_name,
       file_name=file_name
    )
    
    # Write the .hpp file
    file_path = os.path.join(folder, 'Makefile')
    with open(file_path, 'w') as file:
        file.write(make_content)
    

if __name__ == '__main__':
    # Check if the correct number of arguments is provided
    if len(sys.argv) != 4:
        print('Usage: python generate_files.py <exec_name> <file_name> <folder>')
        sys.exit(1)
    
    # Parse command-line arguments
    exec_name = sys.argv[1]
    file_name = sys.argv[2]
    folder = sys.argv[3]
    
    # Generate the files
    generate_files(exec_name, file_name, folder)
