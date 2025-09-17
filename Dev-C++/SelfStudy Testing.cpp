#include <iostream>
#include <fstream>
using namespace std;

int main(){
string j;
ofstream Cplusplusjournel;
Cplusplusjournel.open("H:\\cplusplusjournel\\journal.txt");
cin >> j;
Cplusplusjournel << j << endl;

}
