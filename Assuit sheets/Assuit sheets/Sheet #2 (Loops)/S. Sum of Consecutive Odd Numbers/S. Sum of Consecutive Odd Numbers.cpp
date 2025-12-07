#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long T;
    cin >> T;
    while (T--) {
        long long X, Y;
        cin >> X >> Y;
        long long mn = min(X, Y);
        long long mx = max(X, Y);
        long long sum = 0;
        for (int i = mn + 1; i < mx; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }cout << sum << endl;
    }
    
}
