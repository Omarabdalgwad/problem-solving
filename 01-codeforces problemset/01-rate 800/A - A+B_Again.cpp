#include <iostream>
using namespace std;
int main()
{
    long long t;
    string n;
    cin >> t;
    while (t--) {
        long long sum = 0;
        cin >> n;
        for (int i = 0; i < n.size(); i++) {
            sum += n[i] - '0';
        }cout << sum << endl;
    }
}