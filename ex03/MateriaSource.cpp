#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
	std::cout << "MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : materiaCount(other.materiaCount) {
	for (int i = 0; i < 4; i++)
		materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
		materiaCount = other.materiaCount;
		for (int i = 0; i < 4; i++) {
			delete materias[i];
			materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
		}
	}
	std::cout << "operator =" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete materias[i];
	std::cout << "MateriaSource destructor" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return;
	if (materiaCount < 4 && m) {
		materias[materiaCount++] = m->clone();
		delete m;
	}
	else if (m)
		delete m;
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < materiaCount; i++) {
		if (materias[i]->getType() == type) {
			return materias[i]->clone();
		}
	}
	return NULL;
}
