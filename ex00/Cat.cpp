#include "Cat.hpp"

Cat::Cat() {
	type = "cat";
	std::cout << "A cat been construct" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "A cat been copy construct" << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "A cat been destruct" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
