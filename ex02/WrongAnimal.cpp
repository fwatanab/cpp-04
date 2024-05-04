#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrongAnimal") {
	std::cout << "a wrong animal has been construct" << std::endl;
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
