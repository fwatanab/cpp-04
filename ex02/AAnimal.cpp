#include "AAnimal.hpp"

AAnimal::AAnimal() : type("animal"), brain(new Brain()){
	std::cout << "an animal has been construct" << std::endl;
}

AAnimal::~AAnimal() {
	delete	brain;
	std::cout << "An animal has been destruct" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type), brain(new Brain(*other.brain)) {
	std::cout << "Animal copy construct" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		type = other.type;
		if (brain)
			delete	brain;
		brain = new	Brain(*other.brain);
	}
	std::cout << "Animal operator =" << std::endl;
	return *this;
}

void	AAnimal::makeSound() const {
	std::cout << "Some animal sound!" << std::endl;
}

std::string	AAnimal::getType() const {
	return type;
}
