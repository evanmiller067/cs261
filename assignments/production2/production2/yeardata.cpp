#include "yeardata.h"
bool yeardata::addData(entry &oneEntry)
{
	resourceCount += oneEntry.getAmount();
	std::string aStation = oneEntry.getStationName;
//	station::iterator exact;
//	exact = stations.find(aStation);
	std::map<std::string, stationdata*>::iterator exact = stations.find(aStation);

	if(exact == stations.end())
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
	for(auto i = stations.begin(); i != stations.end(); ++i)
	{
		delete i->second;
	}
}
