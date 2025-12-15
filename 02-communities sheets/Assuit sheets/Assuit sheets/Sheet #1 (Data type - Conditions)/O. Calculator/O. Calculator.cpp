#include <iostream>
using namespace std;

int main()
{
    long long A,B;
    char S;
    cin >> A >> S >> B;

    long long add = A + B;
    long long sub = A - B;
    long long div = A / B;
    long long multipl = A * B;


    if (S == '+') {
        cout << add;
    }
    else if (S == '-') {
        cout << sub;
    }
    else if (S == '/') {
        cout << div;
    }
    else
        cout << multipl;
    
}

