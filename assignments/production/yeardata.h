#ifndef YEARDATA_H
#define YEARDATA_H
#include <vector>

//class holding all data for a year broken down by 12 months.
//includes array of resourceCount objects, one per month.

class yeardata
{
	private:
		int year;
		std::vector<resourcecount> rc;
};

#endif
