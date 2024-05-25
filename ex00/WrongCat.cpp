#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "wrongCat";
	std::cout << "a wrong cat has been construct" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "a wrong cat has been copy construct" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "a wrong cat has been destruct" << std::endl;
}

void	WrongCat::makeSound() const {
	WrongAnimal::makeSound();
}
