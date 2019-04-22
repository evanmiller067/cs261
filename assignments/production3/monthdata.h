#ifndef MONTHDATA_H
#define MONTHDATA_H
#include<map>
#include<string>
#include "entry.h"
#include "resourcecount.h"
class yeardata;
class productiondb;
class stationdata;

class monthdata
{
	private:
		int monthTotalResource;
		typedef std::map<std::string,int resource*> aMap;
		aMap resources;
		aMap::const_iterator getBegin() const {return resources.cbegin();};
		aMap::const_iterator getEnd() const {return resources.cend();};
		friend class productiondb;
	public:
		monthdata(int totalResource = 0) : monthTotalResource(totalResource) {};
		~monthdata();
		bool addEntry(entry &oneEntry);
		int getTotalResource() const {return monthTotalResource;};
};
#endif
