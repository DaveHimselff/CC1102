
#include <iostream>
using namespace std;
int main()
{
    char confirm = 'n';
    do {

        cout << "Do you want to exit? (y/n)";
        cin >> confirm;
    } while(confirm != 'y' && confirm != 'Y'); {
        int cd = 10;
        cout << "Countdown in: ";
       while (cd > 0) {
            cout << cd-- << "....";
            
        }
        cout << endl << "Thankn you for coming.";
    }
}