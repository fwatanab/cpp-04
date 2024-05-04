#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type(type) {
	std::cout << "materia construct" << std::endl;
}

std::string const&	AMateria::getType() const {
	std::cout << type << std::endl;
	return type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << target.getName() << std::endl;
}

AMateria::~AMateria() {
	std::cout << "materia destruct" << std::endl;
}
