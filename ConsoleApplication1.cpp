#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

#define F1 setiosflags(ios::left)

int main()
{

	string employeeName = "Robert Goulet";
	double employeeHours;
	double totalPay;
	char dept;
	const double PAYRATE = 15.50;

	employeeHours = 44.5;
	dept = 'A';

	totalPay = employeeHours * PAYRATE;



	cout << "" << F1 << setw(20) << "Name" << setw(16) << "Department" << setw(10) << "Pay\n" << endl;
	cout << "" << F1 << setw(20) << employeeName << setw(16) << dept << setw(10) << totalPay << endl;
	cout << "\n\n";
	
	cout << "program ended successfully" << endl; 


	
	system("pause");
	return 0;
}

