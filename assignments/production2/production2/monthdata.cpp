#include "monthdata.h"

bool monthdata::addEntry(entry & oneEntry)
{
	std::string resourceName = oneEntry.getResourceName();
	aMap::iterator exact = resources.find(resourceName);
	monthTotalResource += oneEntry.getAmount;

	if (exact == resources.end())
	{
		resource *newResource = new resource(resourceName);
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
	for (aMap::iterator i = resources.begin(); i != resources.end(); ++i)
	{	
		delete i->second;
	}
}
