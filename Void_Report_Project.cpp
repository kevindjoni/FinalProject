#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

void report()
{	
	double charge = 0.5;

	cout << endl << "Report" << endl;
	cout << "------" << endl;
	cout << "In Time: " << time1 << endl;
	cout << "Out Time: " << time2 << endl;
	cout << "Duration: " << " " << endl;
	cout << "Charge: " << duration * charge << endl << endl; 
}
