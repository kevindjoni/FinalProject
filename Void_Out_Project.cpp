#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void out()
{
	time_t rawtime; 
	struct tm *timeinfo;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << "Please wait..." << endl;
	printf("In Time and Date: %s", asctime(timeinfo));		
}
