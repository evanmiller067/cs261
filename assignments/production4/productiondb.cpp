#include "productiondb.h"

bool yeardata::addData(entry &oneEntry)
{
	resourceCount += oneEntry.getAmount();
	std::string aStation = oneEntry.getStationName();
	std::map<std::string, stationdata*>::iterator exact = stations.find(aStation);

	if (exact == stations.end())
	{
		stationdata *ns = new stationdata(aStation);
		ns->addResource(oneEntry);
		return stations.insert(std::make_pair(aStation, ns)).second;
	}
	else
	{
		exact->second->addResource(oneEntry);
		return true;
	}
}
yeardata::~yeardata()
{
	for (auto i = stations.begin(); i != stations.end(); ++i)
	{
		delete i->second;
	}
}
bool stationdata::addResource(entry &oneEntry)
{
	int month = oneEntry.getMonth();
	stationResourceCount += oneEntry.getAmount();
	std::map<int, monthdata*>::iterator exact = months.find(month);

	if (exact == months.end())
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
	for (auto it = months.begin(); it != months.end(); ++it)
	{
		delete it->second;
	}
}
bool resourcecount::addResource(entry &oneEntry)
{
	int day = oneEntry.getDay();
	if (dayResource.find(day) == dayResource.end())
	{
		entry *newEntry = new entry(oneEntry);
		resourceAmount += newEntry->getAmount();
		return dayResource.insert(std::make_pair(day, newEntry)).second;
	}
	else
	{
		return false;
	}
}
resourcecount::~resourcecount()
{
	for (auto i = dayResource.begin(); i != dayResource.end(); ++i)
	{
		delete i->second;
	}
}
bool productiondb::addData(entry &oneEntry)
{
	int year = oneEntry.getYear();
	yearMap::iterator exact;
	exact = years.find(year);

	if (exact == years.end())
	{
		yeardata * newYear = new yeardata();
		newYear->addData(oneEntry);
		return years.insert(std::make_pair(year, newYear)).second;
	}
	else
	{
		exact->second->addData(oneEntry);
		return true;
	}
}
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
std::string entry::getStationName()
{
	return station;
}
std::string entry::getResourceName()
{
	return resource;
}
int entry::getYear()
{
	return year;
}
int entry::getMonth()
{
	return month;
}
int entry::getDay()
{
	return day;
}
int entry::getAmount()
{
	return amount;
}

