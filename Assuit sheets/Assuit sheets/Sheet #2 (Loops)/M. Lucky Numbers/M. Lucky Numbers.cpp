#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;
    bool n = false;  

    for (long long i = A; i <= B; i++) {
        long long N = i;
        bool lucky = true;

        while (N > 0) {
            int b = N % 10;
            if (b != 4 && b != 7) {
                lucky = false;
                break;
            }
            N = N / 10;
        }
        if (lucky == true) {
            cout << i << " ";
            n = true;
        }
    }
    if (n == false)
        cout << -1;
}
