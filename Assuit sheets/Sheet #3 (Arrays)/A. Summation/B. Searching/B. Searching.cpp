#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    vector<long long > arr(N);


    for (long long i = 0; i < N; i++) {
        cin >> arr[i];
    } 
    long long X;
    cin >> X;
    
    for (long long i = 0; i < N; i++) {
        if (X == arr[i]) {
            cout << i;
            return 0;
            
        } 
    } 
        cout << -1;
    
}

