#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	std::string _name;

	Zombie();
	Zombie(const Zombie &other);

	Zombie& operator=(const Zombie &other);

public:
	explicit Zombie(const std::string &name);

	~Zombie();

	void announce() const;

	static Zombie* newZombie(const std::string &name);
	static void randomChump(const std::string &name);
};

#endif
