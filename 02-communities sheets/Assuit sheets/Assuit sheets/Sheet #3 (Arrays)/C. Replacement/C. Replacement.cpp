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
    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            arr[i] = 1;
        }
        else if (arr[i] < 0) {
            arr[i] = 2;
        }
        cout << arr[i]<<" ";
    }
}

