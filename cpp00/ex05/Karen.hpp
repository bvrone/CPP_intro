#ifndef __KAREN__
#define __KAREN__

#define DEBUG_LVL	"DEBUG_LVL: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
#define INFO_LVL	"INFO_LVL: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
#define WARN_LVL	"WARNING_LVL: I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month."
#define ERROR_LVL	"ERROR_LVL: This is unacceptable, I want to speak to the manager now."

#include <string>

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		void complain(std::string level);
};

#endif // __KAREN__