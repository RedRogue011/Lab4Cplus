// part2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iomanip>
#include<iostream>
	
using namespace std;

#define F1 setiosflags(ios::right)

	int main()
	{

		// 1.  This Program is useing the setw(3) to set the feild width to be used on output operations 
	cout << 6 << endl;
	cout << 18 << endl;
	cout << 124 << endl;
	cout << "---\n";
	cout << (6 + 18 + 124) << endl;
		

    cout << setw(3) << 6 << endl;
	cout << setw(3) << 18 << endl;
	cout << setw(3) << 124 << endl;
	cout << "---\n";
	cout << (6 + 18 + 124) << endl;
		
		
		
			//2.  When the showbase format flag is set, numerical integer values inserted into output streams are prefixed with the same prefixes used by C++ literal constants:
			//0x for hexadecimal values(see hex), 0 for octal values(see oct) and no prefix for decimal - base values(see dec).

	cout << "decimal base 10 = " << 15 << endl;
	cout << "hex base 16 = " << hex << 15 << endl;
	cout << "oct base 8  = " << oct << 15 << endl;

	cout << "decimal base 10 = " << dec << 15 << endl; // Need to add dec so it does not output a oct value
	cout << "hex base 16 = " << showbase << hex << 15 << endl;
	cout << "oct base 8  = " << oct << 15 << endl;
		
	
	// 3. Sets the character width to ten and will either right or left justify 
		cout << "" << setw(10)
		<< setiosflags(ios::left)
		<< 142 << "|" << endl;

        cout << "" << setw(10)
		<< setiosflags(ios::right)
		<< 142 << "|" << endl;
		

	// 4.
	cout << "|" << 5 << "|" << endl;                  // This just Prints a 5 with no widths or justification.
	cout << "|" << setw(4) << 5 << "|" << endl;      // This one sets the terminal width to 4
	cout << "|" << setw(4) << 56289 << "|" << endl;  //  this one sets to 4 but will let you put the whole number and ingores the set width
	
	

// The below code sets terminal width to 5 and will round floating point dec to 2 digits
	cout << "|" << setw(5) << setiosflags(ios::fixed) << setprecision(2)
		<< 5.26 << "|" << endl;
	cout << "|" << setw(5) << setiosflags(ios::fixed) << setprecision(2)
		<< 5.267 << "|" << endl;



	// 5. This code is setting the terminal width to 10 and then useing his Defined F1 to set the right justification 
	cout << "" << setw(10)
		<< F1
		<< 142 << "|" << endl;


			system("pause");
			return 0;
	
	
	
	
	
	}

