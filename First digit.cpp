#include<iostream>
using namespace std;

int main()
{
	int X;
	cin >> X;
	int digit = X / 1000;	
	if (digit % 2 == 0)
    	cout << "EVEN";
	else
		cout << "ODD";
	return 0;
}