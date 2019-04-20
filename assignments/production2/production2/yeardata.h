#ifndef YEARDATA_H
#define YEARDATA_H
#include <map>
#include<string>
class yeardata
{
	public:
		yeardata() : resourceCount(0) {};
		~yeardata();
		bool addData(entry &oneEntry);
		int getResourceCount() const {return resourceCount;};
	private:
		int resourceCount;
		typedef std::map<std::string, stationdata*> stationMap;
		stationdata stations;
		stationMap::const_iterator getProductionBegin() const {return stations.cbegin();};
		stationMap::const_iterator getProductionEnd() const {return stations.cend();};
		friend class productiondb;
};
#endif
