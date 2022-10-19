#include <iostream>
#include <string>
using namespace std;

int main() {
	int q[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int x = q[9], y1 = 0, y2 = 1;
	cout << "First " << x << " Terms" << endl;
	for (int i = 1; i <= x; i++) {
		cout << y1 << " + ";
		int sum = y1 + y2;
		y1 = y2;
		y2 = sum;
	}
	int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int r = t[9], e1 = 21, e2 = 34;
	cout << endl;
	cout << "\nReversed Terms" << endl;
	cout << endl;
	for (int l = 1; l <= r; l++) {
		cout << e2 << " - "; 
		int rear = e2 - e1;
		e2 = e1;
		e1 = rear;
	}
}