#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
	std::string _type;

public:
	explicit Weapon(std::string type);
	Weapon(const Weapon &other);

	~Weapon();

	const std::string &getType() const;
	void setType(const std::string type);

	Weapon &operator=(const Weapon &other);
};

#endif
