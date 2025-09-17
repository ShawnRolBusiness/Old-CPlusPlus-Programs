#include <iostream>
#include <string>

using namespace std;

int main()

{

int n = 1;
int count = 0;
int x, total;

cout << "Start with: ";
cin >> x;
cout << "-------------------------------------------------- \n";


while ( n <= 10 )
{
    total = x * n;
    n++;
cout << "Total is: " << total << endl;
}

return 0;
}
