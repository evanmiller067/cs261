#include "monthdata.h"
#include "resourcecount.h"

bool monthdata::addEntry(entry & oneEntry)
{
	std::string resourceName = oneEntry.getResourceName();
	aMap::iterator exact = resources.find(resourceName);
	monthTotalResource += oneEntry.getAmount();

	if (exact == resources.end())
	{
		resourcecount *newResource = new resourcecount(resourceName);
		newResource->addResource(oneEntry);
		return resources.insert(std::make_pair(resourceName, newResource)).second;
	}
	else
	{
		exact->second->addResource(oneEntry);
		return true;
	}
}
monthdata::~monthdata()
{
	for (auto it = resources.begin(); it != resources.end(); ++it)
	{
		delete it->second;
	}
}
