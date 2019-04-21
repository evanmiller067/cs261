#ifndef REPORTER_H
#define REPORTER_H
//class to handle all output from productiondb
#include "productiondb.h"
#include <iostream>

class reporter
{
	public:
		//functions called by showreport.cpp
		void printFullReport(int); //might not be void
		void printStationReport(int); //might not be void
};
#endif
