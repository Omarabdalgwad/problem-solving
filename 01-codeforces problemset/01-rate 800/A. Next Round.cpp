#include <iostream>
using namespace std;

int main()
{
    long long N,K;
    cin >> N >> K;

    long long arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] >= arr[K] && arr[i] > 0) {
            sum++;
        }
    }cout << sum;

}
