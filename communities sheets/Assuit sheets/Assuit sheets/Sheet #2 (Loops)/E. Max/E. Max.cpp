#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int N2;
    int N3=0;
    for (int i = 1; i <= N; i++) {
        cin >> N2;
        if (N2 > N3) {
            N3 = N2;
        }

    } cout << N3;
}

