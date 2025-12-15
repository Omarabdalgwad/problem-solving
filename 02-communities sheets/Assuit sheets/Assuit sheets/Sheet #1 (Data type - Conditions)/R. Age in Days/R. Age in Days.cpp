#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long Years = N / 365;
    long long Months = (N - (365 * Years))/ 30;
    long long Days = ( N - (365 * Years)) - (30 * Months);

    cout << Years << " years" << endl;
    cout << Months << " months" << endl;
    cout << Days << " days" << endl;
}

