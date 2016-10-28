#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

void out()
{
	time_t rawtime; 
	struct tm *timeinfo;
	string time2;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << endl;
	time2 = asctime(timeinfo);
	cout << "Out Time and Date: " << "\n" << time2 << endl;	
}
