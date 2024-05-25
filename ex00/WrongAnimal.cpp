#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrongAnimal") {
	std::cout << "a wrong animal has been construct" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "a wrong animal has been copy construct" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "a wrong animal has been destruct" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "A wrong sound from WrongAnimal!" << std::endl;
}
