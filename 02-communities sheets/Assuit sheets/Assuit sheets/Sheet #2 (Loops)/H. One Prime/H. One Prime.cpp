#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long X;
    cin >> X;
    bool prime = true;
    if (X == 1) {
        cout << "NO";
    }
    else if (X > 1) {
        for (long long i = 2; i <= sqrt(X); i++){
            if (X % i == 0) {
                prime = false;
                break;
            }
        } if (prime == false) {
            cout << "NO";
        }
        else cout << "YES";
    }
}

