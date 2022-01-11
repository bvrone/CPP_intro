#ifndef __KAREN__
#define __KAREN__

#define DEBUG_LVL	"[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n"
#define INFO_LVL	"[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!\n"
#define WARN_LVL	"[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve beencoming here for years and you just started working here last month.\n"
#define ERROR_LVL	"[ ERROR ]\nThis is unacceptable, I want to speak to the manager now."
#define DEFAULT_LVL	"[ Probably complaining about insignificant problems ]"
#define DEF_LVL		-1

#include <string>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		void complain(int level);
};

#endif // __KAREN__