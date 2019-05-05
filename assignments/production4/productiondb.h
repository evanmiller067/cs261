#include <map>
#include <string>
#include "entry.h"
#include "reporter.h"
#include <iostream>

class resourcecount
{
public:
//	resourcecount(std::string rescName = " ") : resourceAmount(0), resourceName(rescName) {};
	~resourcecount();
	bool addResource(entry &oneEntry);
	int getTotalResource() const {return resourceAmount;}
private:
	std::string resourceName;
	int resourceAmount;
	typedef std::map<int, entry*> entryMap;
	entryMap dayResource;
	entryMap::const_iterator getBegin() const { return dayResource.cbegin(); };
	entryMap::const_iterator getEnd() const { return dayResource.cend(); };
	friend class productiondb;
};
class monthdata
{
private:
	int monthTotalResource;
	typedef std::map<std::string, resourcecount*> aMap;
	aMap resources;
	aMap::const_iterator getBegin() const { return resources.cbegin(); };
	aMap::const_iterator getEnd() const { return resources.cend(); };
	friend class productiondb;
public:
	monthdata(int totalResource = 0) : monthTotalResource(totalResource) {};
	~monthdata();
	bool addEntry(entry &oneEntry);
	int getTotalResource() const { return monthTotalResource; };
};
class stationdata
{
private:
	int stationResourceCount;
	std::string stationName;
	typedef std::map<int, monthdata*> resourceMap;
	resourceMap months;
	resourceMap::const_iterator getBegin() const { return months.cbegin(); };
	resourceMap::const_iterator getEnd() const { return months.cend(); };
public:
//	stationdata() : stationName(" "), stationResourceCount(0) {};
//	stationdata(std::string nameOfStation) : stationName(nameOfStation) {};
	~stationdata();
	bool addResource(entry &oneEntry);
	int getResource() const { return stationResourceCount; };
	std::string getStationName() const { return stationName; };
};
class yeardata
{
public:
	yeardata() : resourceCount(0) {};
	~yeardata();
	bool addData(entry &oneEntry);
	int getResourceCount() const { return resourceCount; };
private:
	int resourceCount;
	typedef std::map<std::string, stationdata*> stationMap;
	stationMap stations;
	stationMap::const_iterator getProductionBegin() const { return stations.cbegin(); };
	stationMap::const_iterator getProductionEnd() const { return stations.cend(); };
	friend class productiondb;
};

class productiondb
{
public:
	productiondb() {};
	~productiondb();
	bool addData(entry &oneEntry);

private:
	typedef std::map<int, yeardata*> yearMap;
	yearMap years;
	yearMap::const_iterator getProductionBegin() const { return years.cbegin(); };
	yearMap::const_iterator getProductionEnd() const { return years.cend(); };
};



