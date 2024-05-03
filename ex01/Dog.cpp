#include "Dog.hpp"

Dog::Dog() {
	type = "dog";
	std::cout << "A dog been construct" << std::endl;
}

Dog::~Dog() {
	std::cout << "A dog been destruct" << std::endl;
}

Dog::Dog(const Dog&	other) : Animal(other) {}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
