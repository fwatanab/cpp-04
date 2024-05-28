#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "Cure copy constructor" << std::endl;
}

Cure&	Cure::operator=(const Cure& other) {
	if (this != &other)
		AMateria::operator=(other);
	std::cout << "operator =" << std::endl;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
