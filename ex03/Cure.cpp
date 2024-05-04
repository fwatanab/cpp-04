#include "Cure.hpp"

Cure::Cure(std::string const& type) : AMateria(type) {
	std::cout << "Cure construct" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destruct" << std::endl;
}


void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
