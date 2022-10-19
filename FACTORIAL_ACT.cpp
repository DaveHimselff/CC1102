	#include <iostream>
	#include <string>
	#include <math.h>
	using namespace std;

	int main() {
		int a;
		int q = 1;
		int num;
		while (num <= 1000) {
			cout << "Enter any Number from 0 - 12: ";
			cin >> num;
			if (num >= 13) {
				cout << "The Number is out of Range please Try again" << endl;
				if (num == 0) {
					break;
				}
				continue;
			}
			else if (num < 0) {
				cout << "The Number is Out of Range please Try again" << endl;
				if (num == 0) {
					break;
				}
				continue;
			}
			else {
				for (a = 1; a <= num; a++) {
					q = q * a;
				}
				cout << "Factorial of " << num << " is: " << q << endl;
				break;
			}
			break;
		}
		return 0;
	}