#include "resourcecount.h"

bool resourcecount::addResource(entry &oneEntry)
{
	int day = oneEntry.getDay();
	if(dayResource.find(day) == dayResource.end())
	{
		entry *newEntry = new Entry(oneEntry);
		resourceAmount += newEntry->getAmount;
		return dayResource.insert(std::make_pair(day, newEntry)).second;
	}
	else
	{
		return false;
	}
}
resourcecount::~resourcecount()
{
	for(aMap:;iterator i = dayResource.begin(); i != dayResource.end(); ++i)
	{
		delete i->second;
	}
}
