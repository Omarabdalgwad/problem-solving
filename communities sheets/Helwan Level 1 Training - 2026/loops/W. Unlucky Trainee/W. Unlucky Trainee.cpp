#include <iostream>
using namespace std;
int main()
{
    long long N, M;
    cin >> N >> M;
    bool f = false;
    for (long long i = N; i <= M; i++) {
        long long m = i;
        bool l = true;
        long long y = 0;
        while (m> 0) {
            y= m % 10;
            m /= 10;
            if (y != 7 && y != 4) {
                l = false;
                break;
            }
        }if (l == true) {
            cout << i << " ";
            f = true;
        }
        
    }if (f== false) {
            cout << -1; 
        }
}

