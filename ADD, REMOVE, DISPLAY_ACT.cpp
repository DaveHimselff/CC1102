#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int x = 10;
    const int y = 2;
    string num[x][y];
    string number[y] = { "Name", "Number" };
    int c = 0, in;
    do {
        cout << "1 = Add/Edit" << endl;
        cout << "2 = Delete" << endl;
        cout << "3 = View All" << endl;
        cout << "4 = Exit" << endl;
        cout << "Enter Option: ";
        cin >> c;
        switch (c) {
        case 1:
            cout << "Enter slot to add/edit (0-9): ";
            cin >> in;
            for (int a = 0; a < y; a++) {
                cout << "Enter " << number[a] << ": ";
                cin >> num[in][a];
            }
            break;
        case 2:
            cout << "Enter slot to delete (0-9): ";
            cin >> in;
            for (int a = 0; a < y; a++) {
                num[in][a] = "";
            }
            break;
        case 3:
            for (string z[y] : num) {
                for (string details : z) {
                    cout << details;
                    cout << " | ";
                }
                cout << endl;
            }
            break;
        case 4:
            cout << "Thank you, Have a Great Day!";
            break;
        default:
            cout << "Invalid input." << endl;
            break;
        }

    } while (c != 4);
}