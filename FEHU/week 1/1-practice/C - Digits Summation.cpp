#include <iostream>
using namespace std;
int main()
{
    long long N, M;
    cin >> N >> M;
    long long V = (N % 10) + (M % 10);
    cout << V;
}