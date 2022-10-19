#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter Name: ";
	string name;
	cin >> name;
	cout << "Enter Age: ";
	int age;
    cin >> age;
	cout << "Enter Gender: ";
	string Gender;
	cin >> Gender;
	cout << endl;
	cout << "Hellow, " << name << endl;
	cout << "You are " << age << " Years old" << endl;
	cout << "Your Gender is " << Gender << endl;
}