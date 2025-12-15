#include <iostream>
using namespace std;

int main()
{
    long long n,a,b;
    cin >> n;
    long long count = 0;
    for (int a = 1; a < n; a++) {
        for (int b = 1; b < n; b++) {
            if ((a * a) + (b * b) == (n * n)) {
                count++;
                
            }
        }
    }cout << count/2;
}

