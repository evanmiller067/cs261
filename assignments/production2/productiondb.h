#ifndef PRODUCTIONDB_H
#define PRODUCTIONDB_H
#include <string>
#include <map>
#include "entry.h"
//class to store all data in maps and vectors
class productiondb
{
	private:
		std::map<std::string stationName, stationdata*> stationMap;
	public:
		void addData(entry&);
		~productiondb();
};
class stationdata()
{
	private:
		std::map<int year, yeardata*> yearMap;
	public:
		~stationdata();
		stationdata(std::string stationName);
};
class yeardata()
{
	//all data for a year broken down by months.
	//array of resourcecount objects, one per month
	resourcecount resourceArray[12]; // = {resourcecount(0,0,0,0,0,0,0,0,0,0,0,0)};

};
class resourcecount()
{
	private:
		std::map<std::string resource, int amount> resourceMap;
	public:
		void getResource();
};


#endif
