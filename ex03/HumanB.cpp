#include "HumanB.hpp"

#include <iostream>
#include <cstddef>

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL) { }

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() const {
	if (_weapon == NULL) {
		return;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
