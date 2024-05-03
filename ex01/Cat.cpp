#include "Cat.hpp"

Cat::Cat() {
	type = "cat";
	std::cout << "A cat been construct" << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat been destruct" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
