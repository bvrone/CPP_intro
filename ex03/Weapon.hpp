#ifndef __WEAPON__
#define __WEAPON__

#include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		void setType(std::string);
		const std::string& getType();
};

#endif // __WEAPON__