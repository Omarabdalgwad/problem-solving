#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int final = s.size()-1;
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s[final] << endl;
        }
        else cout << s << endl;
    }
}