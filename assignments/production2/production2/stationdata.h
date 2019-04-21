#ifndef STATIONDATA_H
#define STATIONDATA_H
#include <string>
#include <map>
#include "monthdata.h"
class resourcecount;
class entry;
class productiondb;
class yeardata;

class stationdata
{
	private:
		int stationResourceCount;
		std::string stationName;
		typedef std::map<int, monthdata*> resourceMap;
		resourceMap months;
		resourceMap::const_iterator getBegin() const {return months.cbegin();};
		resourceMap::const_iterator getEnd() const {return months.cend();};
	public:
		stationdata() : stationName(" "), stationResourceCount(0) {};
		stationdata(std::string nameOfStation) : stationName(nameOfStation) {};
		~stationdata();
		bool addResource(entry &oneEntry);
		int getResource() const {return stationResourceCount;};
		std::string getStationName() const {return stationName;};
};
#endif
