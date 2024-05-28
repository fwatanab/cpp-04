#include "Character.hpp"

Character::Character() : name("none") {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "character default constructor" << std::endl;
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "character constructor" << std::endl;
}

Character::Character(const Character& other) : name(other.name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
	std::cout << "character copy constructor" << std::endl;
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		name = other.name;
		for (int i = 0; i < 4; i++) {
			delete inventory[i];
			inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
		}
	}
	std::cout << "operator =" << std::endl;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	std::cout << "Character destructor" << std::endl;
}

std::string const&	Character::getName() const {
	return name;
}

void	Character::equip(AMateria* m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
