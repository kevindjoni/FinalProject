#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Void_In_Project.cpp"
#include "Void_Out_Project.cpp"
#include "Void_Report_Project.cpp"
using namespace std;
 
int main()
{
	int option;
				
	cout << "Enter any of the following option with a number:" << "\n";
	cout << "1. In" << endl;
	cout << "2. Out" << endl;
	cout << "3. Report" << endl;
	cout << "4. Exit" << endl;
	cout << "Your option: ";
	cin >> option;
	
	switch(option)
	{
		case 1 : 
			in();
			break;
			
		case 2 :
			out();
			break;
			
		case 3 :
			report();
			break;
			
		case 4 :
			exit(0);
			 break;
		
		default :
			cout << "Error";
			exit(0);
	}
	
	//in();
	system("pause");
	//out();
	//exit(0);
	//report();
	
	return 0;
}

//Test
