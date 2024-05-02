#include "Dog.hpp"

Dog::Dog() {
	type = "dog";
	std::cout << "A dog been construct" << std::endl;
}

Dog::~Dog() {
	std::cout << "A dog been destruct" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
