#include <iostream>
using namespace std;

int main()
{
    string f, s;
    cin >> f >> s;

    
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        f[i] = tolower(f[i]);
        if (f[i] < s[i]) {
            cout << -1; return 0;
        }
        if (f[i] > s[i]) {
            cout << 1; return 0;
        }
    }cout << 0;
}