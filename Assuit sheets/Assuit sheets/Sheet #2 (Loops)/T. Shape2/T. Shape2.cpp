#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string s = "*";
    while (T--) {
        for (int i = T - 1; i >= 0; i--) {
            cout << " ";
        }
        cout << s << endl;
        s += "**";
    }
}
