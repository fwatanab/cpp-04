#include "Dog.hpp"

Dog::Dog() {
	type = "dog";
	std::cout << "A dog been construct" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "A dog been copy construct" << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "A dog been destruct" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
