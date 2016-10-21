#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iomanip>
using namespace std;

void in()
{
	time_t rawtime; 
	struct tm *timeinfo;
	
	clock_t start;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << "Please wait..." << endl;
	printf("In Time and Date: %s", asctime(timeinfo));
	start = clock();
}
