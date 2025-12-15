#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int g = n;
    int l=0;
    while (n > 0) {
        l = l * 10 + (n % 10);
        n /= 10;
    } if (l == g) {
        cout << g << endl << "YES";
    }
    else
        cout << l <<endl<< "NO";
}
