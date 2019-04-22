#ifndef REPORTER_H
#define REPORTER_H
//class to handle all output from productiondb
#include "productiondb.h"
#include <iostream>

class reporter
{
	public:
		//functions called by showreport.cpp
		void printFullReport(int); 
		void printStationReport(int); 
};
#endif
