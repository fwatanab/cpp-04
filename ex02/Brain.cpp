#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = "Empty";
	std::cout << "Brain construct" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destruct" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy construct" << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	std::cout << "Brain operator =" << std::endl;
	return *this;
}
