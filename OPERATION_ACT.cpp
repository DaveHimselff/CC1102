#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double D, A, V, I, E;
	double average, sum;
	cout << "Enter Calculus" << endl;
	cin >> D;
	cout << "Enter Physics" << endl;
	cin >> A;
	cout << "Enter Programming" << endl;
	cin >> V;
	cout << "Enter Chemistry" << endl;
	cin >> I;
	cout<< "Enter Physical Education" << endl;
	cin >> E;

	//calculate sum value
	sum = D + A + V + I + E;
	//calculate average  value
	average = sum / 5;
	cout << "Average = " << average<< endl;
	return 0;
}