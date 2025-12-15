#include <iostream>
using namespace std;

int main()
{
    long long X;
    cin >> X;
    long long Z;
    while (cin >> Z) {
        if (X < Z) {
            cout << "Lose"; return 0;
        }
        else cout << "Win\n";
    }
}
