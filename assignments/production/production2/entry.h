#ifndef ENTRY_H
#define ENTRY_H
#include <string>
//take in data and pass it to productiondb
class entry
{
	private:
		int year;
		int month;
		int day;
		std::string station;
		std::string resource;
		int amount;
	public:
		entry(int, int, int, std::string, std::string, int);
};

#endif
