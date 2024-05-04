#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		Ice(std::string const& type);
		~Ice();
		void	use(ICharacter& target);
};

#endif
