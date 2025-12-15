#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    for (int i = 1; i <= 12; i++) {
        cout << N << " * " << i << " = " << N * i<<endl;
    }
}

