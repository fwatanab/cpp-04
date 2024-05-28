#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	protected:
		AMateria*	materias[4];
		int			materiaCount;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource();
		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};

#endif
