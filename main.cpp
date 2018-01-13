#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


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


	
		cout << "Name:" << employeeName << "Department: "<< dept << "Pay: $" << totalPay << endl;
		


		cout << "program ended successfully" << endl;
		system("pause");
		return 0;
}

