
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long A[100000];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool P = true;
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - 1 - i]) {
            P = false;
            break;
        }
    }

    if (P==true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
