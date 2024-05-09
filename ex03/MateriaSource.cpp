#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i = 0; i < 4; i++) {
		materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete materia[i];
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (materiaCount < 4 && m)
		materia[materiaCount] = m->clone();
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < materiaCount; i++) {
		if (materia[i]->getType() == type)
			return materia[i]->clone();
	}
	return NULL;
}
