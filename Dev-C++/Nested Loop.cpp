// C++ program to display 7 days of 3 weeks

#include <iostream>
using namespace std;

int main() {
    int minute = 2, seconds_in_a_minute = 60;
    
    for (int i = 1; i <= minute; ++i) {
    	cout << "minute: " << i << endl;
    	
    	for (int j = 1; j <= seconds_in_a_minute; ++j) {
    		cout << "     Second:" << j << endl;
		}
	}

    return 0;
}
