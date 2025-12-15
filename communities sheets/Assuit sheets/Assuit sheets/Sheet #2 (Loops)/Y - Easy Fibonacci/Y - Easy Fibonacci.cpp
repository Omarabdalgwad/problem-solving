#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long f = 0;
    long long s = 1;
    if (N == 1) {
        cout << f;
    }
    else if (N == 2) {
        cout << f << " " << s;
    }
    else {
        cout << f << " " << s;
        for (int i = 1; i <= N - 2; i++) {
            long long c = f + s;
            cout << " " << c;
            f = s;
            s = c;
        }
    }
}