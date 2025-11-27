#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    if (S == '+') {
        if (A + B == C) {
            cout << "Yes";
        }
        else
            cout << A + B;

    }
    else if (S == '-') {
        if (A - B == C) {
            cout << "Yes";
        }
        else
            cout << A - B;

    }
    else if (S == '*') {
        if (A * B == C) {
            cout << "Yes";
        }
        else
            cout << A * B;
    }
}

