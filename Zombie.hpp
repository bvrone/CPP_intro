#ifndef __Zombie__
#define __Zombie__

#define ANNOUNCE_MSG	" BraiiiiiiinnnzzzZ..."
#define DYING_MSG		" dyin"

#include <string>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(std::string name);
		~Zombie();
		void setName(std::string name);
		void announce(void);
		std::string getName(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif /* __Zombie__ */