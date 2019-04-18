#ifndef RESOURCECOUNT_H
#define RESOURCECOUNT_H
#include <string>
#include <map>
//Class holding a mapping between resource and the
//amount of that resource seen so far.

class resourcecount
{
	private:
		std::map<string resource, int count> resourceMap;
};
#endif
