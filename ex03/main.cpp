#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main() {
	ICharacter*	taro = new Character("taro");
	AMateria*	water = new Ice("water");

	taro->equip(water);
	taro->use(1, *taro);

	delete	taro;
	delete	water;

	return 0;
}
