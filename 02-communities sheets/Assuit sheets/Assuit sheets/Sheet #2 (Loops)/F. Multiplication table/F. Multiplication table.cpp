#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int M=1;
    for (int i = 1; i <= 12; i++) {
        cout << N << " * " << M << " = " << N * M << endl;
        M++;
    }
}

