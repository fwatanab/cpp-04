#include "AMateria.hpp"

AMateria::AMateria() : type("none") {
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const& type) : type(type) {
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type) {
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other)
		type = other.type;
	std::cout << "operator =" << std::endl;
	return *this;
}

std::string const&	AMateria::getType() const {
	return type;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}
