#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    string tri = "*";
    for (int i = 1; i <= N; i++) {
        cout << tri<<endl;
        tri += '*';
    }
}

