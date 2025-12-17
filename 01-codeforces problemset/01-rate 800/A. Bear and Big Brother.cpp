#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long aa = a;
    long long bb = b;
    int year = 1;

    for (int i = 0; i < year; i++) {
        aa *= 3;
        bb *= 2;
        if (aa > bb) {
            cout << year; return 0;
        }
        else {
            year++;
        }

    }
}

