#ifndef PRODUCTIONDB_H
#define PRODUCTIONDB_H
#include <map>
#include <string>
//productiondb - a mapping of station name to stationdata class

class productiondb
{
	private:
		std::map<std::string station, stationdata>;
};

#endif
