
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
        if (arr[i] <= 10) {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }

}

