#include "productiondb.h"

bool productiondb::addData(entry &oneEntry)
{
	int year = oneEntry.getYear();
	yearMap::iterator exact;
	exact = years.find(year);

	if(exact == years.end())
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

