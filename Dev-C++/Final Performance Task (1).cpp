#include <iostream>
#include <string>
using namespace std;

int main () {
	double x, y;
	double sum, dif, quot, prod;
	
	cout << "Enter First Number : ";
	cin >> x;
	cout << "Enter Second Number : ";
	cin >> y;
	
	sum = x + y;
	dif = x - y;
	prod = x * y;
	quot = x / y;
	
	cout << "Sum : " << x << " + " << y << " = " << sum << endl;
	cout << "Difference : " << x << " - " << y << " = " << dif << endl;
	cout << "Product : " << x << " * " << y << " = " << prod << endl;
	cout << "Quotient : " << x << " / " << y << " = " << quot << endl;
	
	return 0;
}

/* 
Enter First Number : 50
Enter Second Number : 10
Sum : 50 + 10 = 60
Difference : 50 – 10 = 40
Product : 50 * 10 = 50
Quotient : 50 / 10 = 5
*/
