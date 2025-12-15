#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << floor(A * 1.0 / B) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(A * 1.0 / B) << "\n";
    cout << "round " << A << " / " << B << " = " << round(A * 1.0 / B) << "\n";
}
