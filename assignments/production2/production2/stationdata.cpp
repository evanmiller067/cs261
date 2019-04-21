#include "stationdata.h"
bool stationdata::addResource(entry &oneEntry)
{
	int month = oneEntry.getMonth();
	stationResourceCount += oneEntry.getAmount();
	std::map<int, monthdata*>::iterator exact = months.find(month);

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
	for(auto it = months.begin(); it != months.end(); ++it)
	{
		delete it->second;
	}
}
