#include <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    char upper = X - 32;
    char lower = X + 32;

    if ((X >= 'A') && (X <= 'Z')) {
        cout << lower;
    }
    else if (X >= 'a' && X <= 'z') {
        cout << upper;
    }  
}
