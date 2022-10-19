#include <iostream>
using namespace std;

double reciprocal(double Dave)
{
	return 1.0 / Dave;
}


int main()
{
	cout << "Enter a number: ";
	int Dave;
	cin >> Dave;
	cout << "The reciprocal is: " << reciprocal(9) << endl;
	cout << endl;
	cout << endl;
	cout << "Enter a number: ";
	int kyut;
	cin >> kyut;
	cout << "The reciprocal is: " << reciprocal(0.04347826086) << endl;
}