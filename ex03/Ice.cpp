#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "Ice copy constructor" << std::endl;
}

Ice&	Ice::operator=(const Ice& other) {
	if (this != &other)
		AMateria::operator=(other);
	std::cout << "operator =" << std::endl;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice*	Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
