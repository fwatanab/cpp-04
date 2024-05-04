#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class	AAnimal{
	protected:
		std::string	type;
		Brain*		brain;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		virtual void	makeSound() const = 0;
		std::string	getType() const;
};

#endif
