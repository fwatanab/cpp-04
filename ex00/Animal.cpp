#include "Animal.hpp"

Animal::Animal() : type("animal") {
	std::cout << "an animal has been construct" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "an animal has been copy construct" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "An animal has been destruct" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Some animal sound!" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}
