#include <iostream>
#include <vector>
using namespace std;


int main()
{
    long long N;
    cin >> N;
    vector<long long>arr(N);
    for (long long i = 0; i < N; i++) {
        cin >> arr[i];
    } 
    for (long long i = N-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

