#include "Cat.hpp"

Cat::Cat() {
	type = "cat";
	std::cout << "A cat been construct" << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat been destruct" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy construct" << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Cat operator =" << std::endl;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
