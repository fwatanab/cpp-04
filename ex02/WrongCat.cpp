#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "wrongCat";
	std::cout << "a wrong cat has been construct" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "a wrong cat has been destruct" << std::endl;
}

void	WrongCat::makeSound() const {
	WrongAnimal::makeSound();
}
