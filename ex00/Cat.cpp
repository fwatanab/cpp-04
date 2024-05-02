#include "Cat.hpp"

Cat::Cat() {
	type = "cat";
	std::cout << "A cat been construct" << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat been destruct" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
