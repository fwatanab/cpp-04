#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i = 0; i < 4; i++) {
		materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete materias[i];
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (materiaCount < 4 && m != NULL)
		materias[materiaCount++] = m->clone();
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < materiaCount; i++) {
		if (materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}
