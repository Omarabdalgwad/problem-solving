#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 2; i <= N; i++){
        bool pr = true;
        for (int u = 2; u*u <= i; u++) {
            if (i % u == 0) {
                pr = false;
                break;
            }
        } if (pr==true) cout << i << " ";
    }
}
