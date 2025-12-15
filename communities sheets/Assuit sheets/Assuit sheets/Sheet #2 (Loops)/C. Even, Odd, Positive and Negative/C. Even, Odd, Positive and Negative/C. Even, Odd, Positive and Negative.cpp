#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int N2 = 0;
    int Even = 0;
    int odd = 0;
    int positive = 0;
    int Negative = 0;

    for (int i = 1; i <= N; i++) {
        N2++;
        cin >> N2;
        if (N2 % 2 == 0) {
            Even++;
        }  if (N2 % 2 != 0) {
            odd++;
        }  if (N2 > 0) {
            positive++;
        } if (N2 < 0) {
            Negative++;
        }
    } cout << "Even: " << Even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive<< endl;
    cout << "Negative: " << Negative << endl;
}

