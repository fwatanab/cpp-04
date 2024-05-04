#include "Character.hpp"

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

std::string const&	Character::getName() const {
	return name;
}

//Character::Character(const Character& other) {
//	for (int i = 0; i < 4; i++)
//		inventory[i] = other.inventory[i];
//}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx) {
	idx--;
	if (idx < 0 && idx <= 4)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > 0 && idx <= 4 && inventory[idx -1])
		inventory[idx -1]->use(target);
}
