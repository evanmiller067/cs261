#ifndef PRODUCTIONDB_H
#define PRODUCTIONDB_H
#include <string>
#include <map>
#include "entry.h"
//class to store all data in maps and vectors
class productiondb
{
/*
	each year will have a month mapped to it, each month will have a day mapped to it
	each day will have a station mapped to it, each station will have a resource mapped to it
	and each resource will have an amount mapped to it.

		year
		-month
		--day
		---station
		-----resource
		------amount 
*/
	private:
		int year, month, day, amount;
		std::string station, resource;

		std::map<int year, int month> yearMap;
		std::map<int month, int day> monthMap;
		std::map<int day, std::string station> dayMap;
		std::map<std::string station, std::string resource> stationMap;
		std::map<std::string resource, int amount> resourceMap;
	public:
		addData(entry);
};
#endif
