#include <iostream>
#include <string>

using namespace std;

int main()

{

int n = 1;		//counter
int sum;

cout << "Start with: ";
cin >> sum;
cout << "-------------------------------------------------- \n";


while ( n <= 10 )
{
    sum++;
    n++;
cout << "sum is: " << sum << endl;
}

//cout << "sum is" << sum << endl;

return 0;
}

