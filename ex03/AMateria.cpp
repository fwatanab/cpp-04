#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type(type) {}

std::string const&	AMateria::getType() const {
	std::cout << type << std::endl;
	return type;
}

AMateria::~AMateria() {}
