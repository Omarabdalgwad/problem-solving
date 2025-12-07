#include <iostream>
using namespace std;

int main()
{
    long long N,M;
    cin >> N>> M;
    for (long long i = 1 ; i <= M; i++) {
        if (N % i == 0) {
            cout << i << " is a divisor of " << N<<endl;
        }
    }
}

