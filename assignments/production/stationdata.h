#ifndef STATIONDATA_H
#define STATIONDATA_H
#include <string>
#include <vector>

//class holding all data for a station, organized by year. 
//Each year has a yeardata object

class stationdata
{
	private:
		std::string station;
		std::vector<yeardata> yd;
};

#endif
