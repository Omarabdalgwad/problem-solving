#include <iostream>
using namespace std;

int main()
{
    long long K,S;
    cin >> K >> S;
    
    long long c = 0;
    for (int X = 0; X <= K; X++) {
        for (int Y = 0; Y <= K; Y++) {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K) {
                c++;
            }
        }
    }cout << c;
}

