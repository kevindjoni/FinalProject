#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
#include "Void_In_Project.cpp"
using namespace std;

string time2;
int durationMin;
int durationSec;
int durationHr;
double rate = 0.5;
double charge;

void out()
{
	time_t rawtime; 
	struct tm *timeinfo;
	
	clock_t stop;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << endl;
	time2 = asctime(timeinfo);
	stop = clock();
	
	durationHr = ((stop - start) / (int)CLOCKS_PER_SEC) / 3600;
	durationMin = (((stop - start) / (int)CLOCKS_PER_SEC) - durationHr * 3600) / 60;
	durationSec = (((stop - start) / (int)CLOCKS_PER_SEC) - durationHr * 3600) - durationMin * 60;
	
	if(durationHr == 0 && durationMin < 15)
	{
		charge = 0;
	}
	else if(durationHr == 0 && durationMin >= 15)
	{
		charge = rate;
	}
	else if(durationHr == 1 && durationMin > 0)
	{
		charge = 2 * rate;
	}
	else if(durationHr == 2 && durationMin > 0)
	{
		charge = 3 * rate;
	}
	else if(durationHr == 3 && durationMin > 0)
	{
		charge = 4 * rate;
	}
	else if(durationHr == 4 && durationMin > 0)
	{
		charge = 5 * rate;
	}
	else if(durationHr == 5 && durationMin > 0)
	{
		charge = 6 * rate;
	}
	else
	{
		charge = 5;
	}
	
	cout << "Out Time and Date: " << endl << time2 << endl;	
}
