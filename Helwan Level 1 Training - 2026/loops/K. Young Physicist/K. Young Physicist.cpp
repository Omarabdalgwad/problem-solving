#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long x, y, z;
    long long sumX = 0, sumY = 0, sumZ = 0;
    while (n--) {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0) cout << "YES";
    else cout << "NO";
}

