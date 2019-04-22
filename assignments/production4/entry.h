#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <map>
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
	int getYear();// { return year; }
	int getMonth();// { return month; }
	int getDay();// { return day; }
	int getAmount();// { return amount; }
	std::string getStationName();// { return station; }
	std::string getResourceName();// { return resource; }
};
#endif
