#include <iostream>
#include <string>
using namespace std;

int main () {
    int firstQuarter, secondQuarter, thirdQuarter, fourthQuarter;
	int sum, average;
	
	cout << "Enter First Quarter : ";
	cin >> firstQuarter;
	
	if (firstQuarter > 100) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	else if (firstQuarter < 0) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	cout << "Enter Second Quarter : ";
	cin >> secondQuarter;
	
	if (secondQuarter > 100) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	else if (secondQuarter < 0) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	cout << "Enter Third Quarter : ";
	cin >> thirdQuarter;
	
	if (thirdQuarter > 100) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	else if (thirdQuarter < 0) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	cout << "Enter Fourth Quarter : ";
	cin >> fourthQuarter;
	
	if (fourthQuarter > 100) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	else if (fourthQuarter < 0) {
		cout << "ERROR" << endl << "The value must be within 0 to 100" << endl;
		return 0;
	}
	
	sum = firstQuarter + secondQuarter + thirdQuarter + fourthQuarter;
	average = sum / 4;
	
	cout << "Average : " << average << "\n";
	
	cout << "Remarks : ";
	
	if (average == 100) {                //I added this just for fun :D
		cout << "ARE YOU A GENIUS?!?!?!?";
	}
	
	else if (average >= 90) {
		cout << "Excellent";
	}
		
	else if (average >= 86) {
		cout << "Very Good";
	}
	
	else if (average >= 81 ) {
		cout << "Good";
	}
	
	else if (average >= 75) {
		cout << "Fair";
	}
	
	else if (average >= 0) {
		cout << "Failed";
	}

	return 0;
	
}

/*  Enter First Quarter : 89
    Enter Second Quarter : 86
    Enter Third Quarter : 86
    Enter Fourth Quarter : 91
    Average : 88
    Remarks : Very Good
    
    90 – 100 Excellent
    86 – 89 Very Good
    81 – 85 Good
    75 – 80 Fair
    75 below Failed
    Any remarks : Invalid
    
    ERROR LOGS:
    
    ERROR#001 - Average is too high.
    ERROR#002 - Number is too low.
*/
