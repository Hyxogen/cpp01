#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
	typedef Harl::*info_proc;

	static const info_proc procs[8];

public:
	Harl();

	void debug() const;
	void info() const;
	void warning() const;
	void error() const;

	void complain(const std::string &level) const;
};

std::size_t hash(const std::string &str);

#endif
