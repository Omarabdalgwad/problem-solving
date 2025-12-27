#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long c = 1;
    bool d = false;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i + 1] == s[i]) {
            c++;
            if (c >= 7) {
                d = true; break;
            }
        }
        else c = 1;
        
    }
    if (d) {
        cout << "YES";
    }
    else cout << "NO";

}