#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    
    long long arr[51];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < N; i++) {
        arr[i] = arr[i-2] + arr[i-1];
    }cout << arr[N - 1];
}