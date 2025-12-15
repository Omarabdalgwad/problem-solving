#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--) {
        for (int i = N; i >= 0; i--) {
            cout << "*";
        }cout << endl;
    }
}