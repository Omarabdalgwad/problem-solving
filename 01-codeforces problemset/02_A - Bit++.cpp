#include <iostream>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    while (n--) {
        cin >> s;
        if (s[1] == '+')
            x = x + 1;
        else
            x = x - 1;
    }
    cout << x;
}