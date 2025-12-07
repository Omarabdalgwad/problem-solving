#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long double aa = B * log(A);
    long double bb = D * log(C);
    
    if (((A == 1) && (C == 1)) || (( A == C ) ) && (B == D)) {
        cout << "NO";
    } else if (A > C ||  C > A) {
        if (aa > bb) {
            cout << "YES";
        }
        else
            cout << "NO";
    }
}

