#ifndef ENTRY_H
#define ENTRY_H
#include <string>
class entry
{
	private:
		int year;
		int month;
		int day;
		int amount;
		std::string station;
		std::string resource;
	public:
		entry(int, int, int, int, std::string, std::string);
		~entry();
};
#endif
