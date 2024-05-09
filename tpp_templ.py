import os
import sys

# Define the class template
class_template = '''
#ifndef {class_name_upper}_HPP
# define {class_name_upper}_HPP

# include <iostream>

template <typename T>
class {class_name}
{{
	public:
		{class_name}();
		~{class_name}();
		// {class_name}(std::string const &type);
		{class_name}(const {class_name} &other);
		{class_name}& operator=(const {class_name} &other);

	private:
		T	_var;
}};

# include "{class_name}.tpp"

#endif
'''


impl_template = '''

#include "{class_name}.hpp"

template <typename T>
{class_name}<T>::{class_name}()
{{
//	std::cout << "{class_name} Default constructor called" << std::endl;
}}

//template <typename T>
//{class_name}<T>::{class_name}(std::string const &type): _type(type)
//{{
//	std::cout << "{class_name} Name constructor called" << std::endl;
//}}

template <typename T>
{class_name}<T>::~{class_name}()
{{
//	std::cout << "{class_name} Default destructor called" << std::endl;
}}

template <typename T>
{class_name}<T>::{class_name}(const {class_name}<T> &other)
{{
//	std::cout << "{class_name} Copy constructor called" << std::endl;
	*this = other;
}}

template <typename T>
{class_name}<T>	&{class_name}::operator=(const {class_name}<T> &other) 
{{
//	std::cout << "{class_name} Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	// ASSIGNMENT HERE
	return (*this);
}}

'''


def generate_files(class_name, folder):
    # Create the folder if it doesn't exist
    if not os.path.exists(folder):
        os.makedirs(folder)
    
    # Generate the class content
    class_content = class_template.format(
        class_name=class_name,
        class_name_upper=class_name.upper()
    )
    
    # Generate the implementation content
    impl_content = impl_template.format(
        class_name=class_name
    )
    
    # Write the .hpp file
    hpp_file_path = os.path.join(folder, '{0}.hpp'.format(class_name))
    with open(hpp_file_path, 'w') as file:
        file.write(class_content)
    
    # Write the .cpp file
    tpp_file_path = os.path.join(folder, '{0}.tpp'.format(class_name))
    with open(tpp_file_path, 'w') as file:
        file.write(impl_content)

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


