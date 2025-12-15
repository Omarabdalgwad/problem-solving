#include <iostream>
using namespace std;

int main()
{
    int X;

    while (cin >> X) {
        if (X == 1999) {
            cout << "Correct"; return 0;
        }
        else if (X != 1999) {
            cout << "Wrong" << endl; 
        }
    }
}

