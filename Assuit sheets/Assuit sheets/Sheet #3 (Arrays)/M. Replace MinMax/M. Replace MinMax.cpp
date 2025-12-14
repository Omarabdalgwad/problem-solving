#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long arr[100000];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    long long min =  arr[0];
    long long max = arr[0];

    for (int i = 0; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        else {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] == max) {
            arr[i] = min;
        }
        else if (arr[i] == min) {
            arr[i] = max;
        }
        cout << arr[i] << " ";
    }

}

