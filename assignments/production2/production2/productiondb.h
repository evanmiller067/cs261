#ifndef PRODUCTIONDB_H
#define PRODUCTIONDB_H
#include <map>
#include <string>
#include "yeardata.h"
#include "stationdata.h"
#include "monthdata.h"
#include "resourcecount.h"
#include "entry.h"
class productiondb
{
	public:
		productiondb() {};
		~productiondb();
		bool addData(entry %oneEntry);

	private:
		typedef std::map<int, yeardata*> yearMap;
		yearMap years;
		yearMap::const_iterator getProductionBegin() const {return years.cbegin()};
		yearMap::const_iterator getProductionEnd() sonst {return years.cend()};
};

#endif
