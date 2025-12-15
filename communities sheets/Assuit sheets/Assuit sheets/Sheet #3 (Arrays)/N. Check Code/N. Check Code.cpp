#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    char s[a + b + 1];

    for (int i = 0; i < a + b + 1; i++) {
        cin >> s[i]; 
    }

    bool f = true;
    if (s[a] != '-') {
        f = false;
    }

    for (int i = 0; i < a + b + 1; i++) {
        if (i == a)
            continue;

        if (s[i] == '-') {
            f = false;
            break;
        }
    }

    if (f) cout << "Yes";
    else cout << "No";
}
