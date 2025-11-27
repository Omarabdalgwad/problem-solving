#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 1;
    }
    else cout << (long long)pow(x, y);
}
