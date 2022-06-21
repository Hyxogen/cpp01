#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { }

Weapon(const Weapon &other) : _type(other._type) { } 

~Weapon() { }

const std::string &getType() const {
	return _type;
}

void setType(const std::string &type) {
	_type = type;
}

Weapon &operator=(const Weapon &other) {
	if (this == &other) {
		return *this;
	}
	_type = other._type;
	return *this;
}
