#include <iostream>
using namespace std;
int main()
{
    long long t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a > b && a < c || a>c && a<b) {
            cout << a<<endl;
        }
        else if ( b > a && b< c || b<a && b>c) {
            cout << b<<endl;
        }
        else if (c > a && c<b || c<a && c>b) {
            cout << c<<endl;
        }
    }
}