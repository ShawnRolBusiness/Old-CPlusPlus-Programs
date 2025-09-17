#include <iostream>
#include <string>
using namespace std;

int main () {
	
    for (int i = 0; i <= 20; i += 2) {
    	
      if (i == 4) {
      	continue;
	  }
	  
	  if (i == 8) {
	  	continue;
	  }
	  
	cout << i << " ";
    }
    return 0;
}

/* 
0 2 6 10 12 14 16 18 20

This one took a while to figure out...
*/
