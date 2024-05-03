#include "Animal.hpp"

Animal::Animal() : type("animal"), brain(new Brain()){
	std::cout << "an animal has been construct" << std::endl;
}

Animal::~Animal() {
	delete	brain;
	std::cout << "An animal has been destruct" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type), brain(new Brain(*other.brain)) {
	std::cout << "Animal copy construct" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other) {
		type = other.type;
		if (brain)
			delete	brain;
		brain = new	Brain(*other.brain);
	}
	std::cout << "Animal operator =" << std::endl;
	return *this;
}

void	Animal::makeSound() const {
	std::cout << "Some animal sound!" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}
