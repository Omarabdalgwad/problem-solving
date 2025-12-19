#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n>>s;
    long long sum = 0;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i + 1]) {
            sum++;
        }
    }cout << sum;
}