import os
import sys

# Define the class template
class_template = '''

#include "{class_name}.hpp"


int	main(int, char **)
{{
    {class_name}	VAR;

	std::cout << std::endl;
	
	return (0);
}}

'''


def generate_files(class_name, folder):
    # Create the folder if it doesn't exist
    if not os.path.exists(folder):
        os.makedirs(folder)
    
    # Generate the class content
    class_content = class_template.format(
        class_name=class_name
    )
    
    # Write the .hpp file
    file_path = os.path.join(folder, 'main.cpp')
    with open(file_path, 'w') as file:
        file.write(class_content)

if __name__ == '__main__':
    # Check if the correct number of arguments is provided
    if len(sys.argv) != 3:
        print('Usage: python generate_files.py <class_name> <folder>')
        sys.exit(1)
    
    # Parse command-line arguments
    class_name = sys.argv[1]
    folder = sys.argv[2]
    
    # Generate the files
    generate_files(class_name, folder)


