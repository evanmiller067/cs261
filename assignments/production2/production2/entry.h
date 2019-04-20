#ifndef ENTRY_H
#define ENTRY_H
#include <string>
class resourcecount;
class yeardata;
class monthdata;
class stationdata;

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
		entry() : year(0), month(0), day(0), amount(0), station(" "), resource(" ") {};
		~entry();
	
		entry(const entry &oneEntry);
		entry & operator=(const entry &oneEntry);
		int getyear();
		int getMonth();
		int getDay();
		int getAmount();
		std::string getStationName();
		std::string getResourceName();
};
#endif
