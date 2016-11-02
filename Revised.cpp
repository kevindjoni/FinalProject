#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <stdio.h>
using namespace std;

int counter = 0;

void in();
void out();
void report();
void menu();

int main()
{		
	cout << "Parking Management System" << endl;
	cout << "-------------------------" << endl;
	
	menu();
	
	return 0;
}

void menu()
{
	int option;
	
	cout << "Enter any of the following option with a number:" << "\n";
	cout << "1. Input" << endl;
	cout << "2. Output" << endl;
	cout << "3. Report" << endl;
	cout << "Your option: ";
	cin >> option;
	
	switch(option)
	{
		case 1 : 
			if(counter == 0)
			{
				in();
				counter++;
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();
			break;
			
		case 2 :
			if(counter == 1)
			{
			out();
			counter++;
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();
			break;
			
		case 3 :
			if(counter == 2)
			{
			report();
			counter++;
			exit(0);
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();	
	}
}

void report()
{
	double charge;
	
	/*
	if(duration <= 59)
	{
		charge = 1.0;
	}
	else
	{
		charge = 1.0 + 0.5;
	}
	*/

	cout << endl << "Report" << endl;
	cout << "------" << endl;
	cout << "In Time: " << " " << endl;
	cout << "Out Time: " << " " << endl;
	cout << "Duration: " << " " << endl;
	cout << "Charge: " << " " << endl << endl; 
} 

void in()
{
	time_t rawtime; 
	struct tm *timeinfo;
	string time1;
	
	clock_t start;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << endl;
	time1 = asctime(timeinfo);
	cout << "In Time and Date: " << "\n" << time1 << endl;
	start = clock();
}

void out()
{	
	int duration;
	time_t rawtime; 
	struct tm *timeinfo;
	string time2;
	
	clock_t stop;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << endl;
	time2 = asctime(timeinfo);
	stop = clock();
	
	duration = (clock() - start) / ((double)CLOCKS_PER_SEC / 60);
	
	cout << "Out Time and Date: " << "\n" << time2 << endl;	
}
