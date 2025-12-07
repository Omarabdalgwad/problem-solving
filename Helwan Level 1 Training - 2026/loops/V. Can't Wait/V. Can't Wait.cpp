#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int m = 0;
    int sum = 0;
    while (n > 0) {
         m = n % 10;
         sum += m;
         n /= 10;
        }cout << sum;
}

