#include <iostream>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;

    if (C >= B && C >= A) {
        if (A >= B) {
            cout << B << " " << C;
        }
        else 
            cout << A <<  " " << C;
        
    }
    else if (A >= B && A >= C) {
        if (C >= B) {
            cout << B << " " << A;
        }
        else
            cout << C << " " << A;
    }
    else if (B >= A && B >= C) {
        if (A >= C) {
            cout << C << " " << B;
        }
        else
            cout << A << " " << B;
    }
}
