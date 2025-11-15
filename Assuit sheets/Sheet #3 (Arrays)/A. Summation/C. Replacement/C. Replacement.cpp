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
    
    for (long long i = 0; i < N; i++) {
        if (arr[i] > 0) {
            arr[i] = 1;
        }
        else if (arr[i] < 0) {
            arr[i] = 2;
        }
        cout << arr[i] << " ";
    } 
}

