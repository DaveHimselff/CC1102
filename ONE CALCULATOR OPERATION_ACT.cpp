#include <iostream>
#include <string>
using namespace std;

int main()
{

	int B;
	cout << "Enter a first number: ";
	cin >> B;
	int M;
	cout << "Enter a second number: ";
	cin >> M;

	int dada;
	cout << "Choose an operator: ";
	cin >> dada;
	switch (dada)
	{
	case 1:
		cout << endl;
		cout << "Sum: ";
		cout << (B + M);
		cout << endl;
		break;
	case 2:
		cout << endl;
		cout << "Sum: ";
		cout << (B - M);
		cout << endl;
		break;
	case 3:
		cout << endl;
		cout << "Sum: ";
		cout << (B * M);
		cout << endl;
		break;
	case 4:
		cout << endl;
		cout << "Sum: ";
		cout << (B / M);
		cout << endl;
	default:
		cout << endl;
		cout << "Invalid Operator";
		break;
	}
}