#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long arr[100000];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    
    for (int i = 0; i < N-1; i++) {
        for (int j = N-2; j>=0; j--) {
            if (arr[j] > arr[j+1]) {
                long long x = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = x;
            }
        }
    }for (int i = 0; i < N; i++) {
        cout << arr[i]<<" ";
    }
}