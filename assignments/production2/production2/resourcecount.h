#ifndef RESOURCECOUNT_H
#define RESOURCECOUNT_H
#include <string>
#include <map>

class resourcecount
{
	private:
		std::string resourceName;
		int resourceAmount;
		typedef std::map<int, entry*> entryMap;
		entryMap::const_iterator getBegin() const {return dayResource.cbegin();};
		entryMap::const_iterator getEnd() const {return dayResource.cend();};
		friend class productiondb;
	public:
		resourcecount(std::string rescName = " ") : resourceAmount(o), resourceName(rescName) {};
		~resourcecount();
		bool addResource(entry &oneEntry);
		int getTotalResource() const {return resourceAmount};
};
#endif
