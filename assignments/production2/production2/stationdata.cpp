#include "stationdata.h"
bool stationdata::addResource(entry &oneEntry)
{
	int month = oneEntry/getMonth();
	stationResourceCount += oneEntry.getAmount();
	stationMap::iterator exact;
	exact = months.find(month);
	
	if(exact == months.end())
	{
		monthdata * newMonth = new monthdata();
		newMonth->addEntry(oneEntry);
		return months.insert(std::make_pair(month, newMonth)).second;
	}
	else
	{
		exact->second->addEntry(oneEntry);
		return true;
	}
}
stationdata::~stationdata()
{
	for(aMap::iterator i = months.begin(); i != months.end(); ++i)
	{
		delete i->second;
	}
}
