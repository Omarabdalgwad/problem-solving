#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    if (A >= B && A >= C) {
        if (B >= C) {
            cout << C << endl << B << endl << A << endl << endl;
            cout << A << endl << B << endl << C;
        }

        else {
            cout << B << endl << C << endl << A << endl << endl;
            cout << A << endl << B << endl << C;
        }

    }
    else if (B >= A && B >= C) {
        if (A >= C) {
            cout << C << endl << A << endl << B << endl << endl;
            cout << A << endl << B << endl << C;

        }
        else {
            cout << A << endl << C << endl << B << endl << endl;
            cout << A << endl << B << endl << C;
        }

    }
    else if (C >= A && C >= B) {
        if (A >= B) {
            cout << B << endl << A  << endl << C << endl << endl;
            cout << A << endl << B << endl << C;

        }
        else {
            cout << A << endl << B << endl << C << endl << endl;
            cout << A << endl << B << endl << C;
        }
    }
}