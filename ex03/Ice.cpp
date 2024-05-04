#include "Ice.hpp"

Ice::Ice(std::string const& type) : AMateria(type) {
	std::cout << "Ice construct" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destruct" << std::endl;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
