#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main() {

//	抽象クラスはインスタンス化できない
//	AAnimal*	animal = new AAnimal();
//	AAnimal		animals;

	AAnimal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 10; i++) {
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}
